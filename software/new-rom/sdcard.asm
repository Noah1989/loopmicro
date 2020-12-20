public sdcard_init
public sdcard_read_block_DEHL_lazy
public sdcard_block_buffer
public sdcard_current_block_address

extern video_vsync_wait

extern debug_io_print_character_A
extern debug_io_print_hex_byte_A
extern error

defc sdcard_in_receive = $D0 ; get byte, then send $FF to pull data through
defc sdcard_in_peek = $D1 ; get last received byte, no SPI action
defc sdcard_out_transmit = $D0 ; send 1 byte
defc sdcard_out_control = $D1 ; change speed and control CS singnal

defc sdcard_control_deselected = $04 ; card deselected @ 312.5kHz
defc sdcard_control_selected = $14 ; card selected @ 312.5kHz
defc sdcard_voltage_range = %00011110 ; 3.1~3.5V

sdcard_init:
	CALL	sdcard_deselect

	; 80 cycles to allow for internal startup
	LD	A, $FF
	LD	B, 10
sdcard_init_startup_loop:
	OUT	(sdcard_out_transmit), A
	DJNZ	sdcard_init_startup_loop

	CALL	sdcard_select

	; set card to idle mode
	LD	B, 60
sdcard_init_cmd0_loop:
	PUSH	BC
	LD	A, 0
	LD	DE, 0
	LD	HL, 0
	LD	B, $95
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_A
	POP	BC
	CP	$01
	JR	Z, sdcard_init_cmd0_done
	CALL	video_vsync_wait
	DJNZ	sdcard_init_cmd0_loop
sdcard_init_error_cmd0_timeout:
	CALL	error
sdcard_init_cmd0_done:

	; send interface condition
	LD	A, 8
	LD	DE, $0000
	LD	HL, $01AA
	LD	B, $87
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_ADEHL
	LD	A, D
	OR	A, E
sdcard_init_error_cmd8a:
	CALL	NZ, error
	LD	A, $01
	CP	H
sdcard_init_error_cmd8b:
	CALL	NZ, error
	LD	A, $AA
	CP	L
sdcard_init_error_cmd8c:
	CALL	NZ, error

	; read operation conditions register (check accepted voltage range)
	LD	A, 58
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_ADEHL
	LD	A, sdcard_voltage_range
	AND	A, E
	CP	sdcard_voltage_range
sdcard_init_error_cmd58_voltage:
	CALL	NZ, error

	LD	B, 60
sdcard_init_acmd41_loop:
	PUSH	BC
	; send operation condition
	LD	A, 55
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_A
	LD	A, 41
	LD	DE, $4000
	LD	HL, $0000
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_A
	POP	BC
	AND	A, A
	JR	Z, sdcard_init_acmd41_ready
	CALL	video_vsync_wait
	DJNZ	sdcard_init_acmd41_loop
sdcard_init_error_acmd41_timeout:
	CALL	error
sdcard_init_acmd41_ready:

	; read operation conditions register again (check power and capacity)
	LD	A, 58
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_ADEHL
	BIT	7, D ; power up status (should be 1 now)
sdcard_init_error_cmd58_powerup:
	CALL	Z, error
	BIT	6, D ; ensure this is a SDHC/SDXC card
sdcard_init_error_cmd58_hcs:
	CALL	Z, error ; SDSC not supported (yet)

	CALL	sdcard_deselect

	LD	DE, 0
	LD	HL, 0
	CALL	sdcard_read_block_DEHL

	RET


sdcard_read_block_DEHL_lazy:
	LD	BC, (sdcard_current_block_address)
	LD	(sdcard_current_block_address), HL
	AND	A, A ; clears carry flag
	SBC	HL, BC
	LD	BC, (sdcard_current_block_address+2)
	EX	DE, HL
	LD	(sdcard_current_block_address+2), HL
	JR	NZ, sdcard_read_block
	AND	A, A ; clears carry flag
	SBC	HL, BC
	JR	NZ, sdcard_read_block
	RET
sdcard_read_block_DEHL:
	LD	(sdcard_current_block_address), HL
	LD	(sdcard_current_block_address+2), DE
	JR	sdcard_read_block_start
sdcard_read_block:
	LD	HL, (sdcard_current_block_address)
	LD	DE, (sdcard_current_block_address+2)
sdcard_read_block_start:
	;LD	A, 'b'
	;CALL	debug_io_print_character_A
	;LD	A, D
	;CALL	debug_io_print_hex_byte_A
	;LD	A, E
	;CALL	debug_io_print_hex_byte_A
	;LD	A, H
	;CALL	debug_io_print_hex_byte_A
	;LD	A, L
	;CALL	debug_io_print_hex_byte_A
	;LD	A, 10 ; \n
	;CALL	debug_io_print_character_A
	CALL	sdcard_select
	LD	A, 17
	CALL	sdcard_send_command_A_argument_DEHL_checksum_B
	CALL	sdcard_read_response_A
	LD	BC, 1024 ; max retries (TODO: adjust to 100ms)
sdcard_read_block_DEHL_start_token_loop:
	IN	A, (sdcard_in_receive)
	CP	A, $FE ; start token
	JR	Z, sdcard_read_block_DEHL_start
	DEC	BC
	LD	A, B
	OR	A, C
	JR	NZ, sdcard_read_block_DEHL_start_token_loop
sdcard_read_block_DEHL_error_timeout:
	CALL	error
sdcard_read_block_DEHL_start:
	LD	HL, sdcard_block_buffer
	LD	B, 0 ; 256 repetitions
	LD	C, sdcard_in_receive
	INIR
	INIR
	; receive CRC
	IN	L, (C)
	IN	H, (C)
	LD	(sdcard_current_block_crc), HL
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

sdcard_send_command_A_argument_DEHL_checksum_B:
	SET	0, B ; end bit
	;PUSH	AF
	;LD	A, 'c'
	;CALL	debug_io_print_character_A
	;POP	AF
	;CALL	debug_io_print_hex_byte_A
	;PUSH	AF
	;LD	A, ':'
	;CALL	debug_io_print_character_A
	;LD	A, D
	;CALL	debug_io_print_hex_byte_A
	;LD	A, E
	;CALL	debug_io_print_hex_byte_A
	;LD	A, H
	;CALL	debug_io_print_hex_byte_A
	;LD	A, L
	;CALL	debug_io_print_hex_byte_A
	;LD	A, ':'
	;CALL	debug_io_print_character_A
	;LD	A, B
	;CALL	debug_io_print_hex_byte_A
	;LD	A, 10 ; \n
	;CALL	debug_io_print_character_A
	;POP	AF
	LD	C, sdcard_out_transmit
	OR	A, $40
	OUT	(C), A
	OUT	(C), D
	OUT	(C), E
	OUT	(C), H
	OUT	(C), L
	OUT	(C), B
	RET

sdcard_read_response_A:
	;LD	A, 'r'
	;CALL	debug_io_print_character_A
	LD	B, 8
	CALL	sdcard_read_response_A_loop
	PUSH	AF
	;LD	A, 10 ; \n
	;CALL	debug_io_print_character_A
	POP	AF
	RET
sdcard_read_response_A_loop:
	IN	A, (sdcard_in_receive)
	;CALL	debug_io_print_hex_byte_A
	CP	$FF
	RET	NZ
	DJNZ	sdcard_read_response_A_loop
	RET

sdcard_read_response_ADEHL:

	CALL	sdcard_read_response_A
	;PUSH	AF
	;LD	A, '+'
	;CALL	debug_io_print_character_A
	;POP 	AF
	CP	2
	CALL	NC, error

	LD	C, sdcard_in_receive
	IN	D, (C)
	IN	E, (C)
	IN	H, (C)
	IN	L, (C)

	;PUSH	AF
	;LD	A, D
	;CALL	debug_io_print_hex_byte_A
	;LD	A, E
	;CALL	debug_io_print_hex_byte_A
	;LD	A, H
	;CALL	debug_io_print_hex_byte_A
	;LD	A, L
	;CALL	debug_io_print_hex_byte_A
	;LD	A, 10 ; \n
	;CALL	debug_io_print_character_A
	;POP	AF

	RET

section ram_uninitialized
sdcard_current_block_address:
defw	0, 0
sdcard_current_block_crc:
defw	0

section sdcard_block_buffer
align $100
sdcard_block_buffer:
defs	512, 0
