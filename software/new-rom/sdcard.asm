public sdcard_init

extern debug_io_print_character_A
extern debug_io_print_hex_byte_A
extern error

defc sdcard_in_receive = $D0 ; get byte, then send $FF to pull data through
defc sdcard_in_peek = $D1 ; get last received byte, no SPI action
defc sdcard_out_transmit = $D0 ; send 1 byte
defc sdcard_out_control = $D1 ; change speed and control CS singnal

defc sdcard_control_deselected = $04 ; card deselected @ 312.5kHz
defc sdcard_control_selected = $14 ; card selected @ 312.5kHz

sdcard_init:
	CALL	sdcard_deselect

	; 80 cycles to allow for internal startup
	LD	A, $FF
	LD	B, 10
sdcard_init_startup_loop:
	OUT	(sdcard_out_transmit), A
	DJNZ	sdcard_init_startup_loop

	CALL	sdcard_select

	LD	A, 0
	LD	DE, 0
	LD	HL, 0
	CALL	sdcard_send_command_A_argument_DEHL

	CALL	sdcard_read_response_A

	CALL	sdcard_deselect

	RET

sdcard_select:
	LD	A, sdcard_control_selected
	JR	sdcard_do_control
sdcard_deselect:
	LD	A, sdcard_control_deselected
sdcard_do_control:
	OUT	(sdcard_out_control), A
	LD	A, $FF
	OUT	(sdcard_out_transmit), A
	RET

sdcard_send_command_A_argument_DEHL:
	PUSH	AF
	LD	A, 't'
	CALL	debug_io_print_character_A
	POP	AF
	CALL	debug_io_print_hex_byte_A
	PUSH	AF
	LD	A, ':'
	CALL	debug_io_print_character_A
	LD	A, D
	CALL	debug_io_print_hex_byte_A
	LD	A, E
	CALL	debug_io_print_hex_byte_A
	LD	A, H
	CALL	debug_io_print_hex_byte_A
	LD	A, L
	CALL	debug_io_print_hex_byte_A
	LD	A, 10 ; \n
	CALL	debug_io_print_character_A
	POP	AF
	LD	C, sdcard_out_transmit
	OR	A, $40
	OUT	(C), A
	OUT	(C), D
	OUT	(C), E
	OUT	(C), H
	OUT	(C), L
	LD	A, $95 ; CRC
	OUT	(C), A
	RET

sdcard_read_response_A:
	LD	A, 'r'
	CALL	debug_io_print_character_A
	LD	B, 8
	CALL	sdcard_read_response_A_loop
	PUSH	AF
	LD	A, 10 ; \n
	CALL	debug_io_print_character_A
	POP	AF
	RET
sdcard_read_response_A_loop:
	IN	A, (sdcard_in_receive)
	CALL	debug_io_print_hex_byte_A
	CP	$FF
	RET	NZ
	DJNZ	sdcard_read_response_A_loop
	RET
