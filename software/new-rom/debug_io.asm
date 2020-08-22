public debug_io_init
public debug_io_print_character_A
public debug_io_print_string_HL
public debug_io_print_hex_byte_A

; I/O ports
defc sio_channel_b_control = $C3
defc sio_channel_b_data = $C2

debug_io_init:
	LD	C, sio_channel_b_control
	LD	B, debug_io_init_sequence_length
	LD	HL, debug_io_init_sequence
	OTIR
	RET

debug_io_init_sequence:
defb	4, %01000100 ; 9600 baud (prescaler 16), 1 stop bit, no parity
defb	5, %01101000 ; 8 data bits, enable sender
defc debug_io_init_sequence_length = ASMPC - debug_io_init_sequence

debug_io_print_character_A:
	PUSH	AF
debug_io_print_character_A_wait_ready:
	IN	A, (sio_channel_b_control)
	AND	%00000100 ; sender ready
	JR	Z, debug_io_print_character_A_wait_ready
	POP	AF
	PUSH	AF
	OUT	(sio_channel_b_data), A
debug_io_print_character_A_wait_sent:
	LD	A, 1 ; select register 1
	OUT	(sio_channel_b_control), A
	IN	A, (sio_channel_b_control)
	AND	%00000001 ; all data sent
	JR	Z, debug_io_print_character_A_wait_sent
	POP	AF
	RET

debug_io_print_string_HL:
	PUSH	AF
	PUSH	HL
debug_io_print_string_HL_loop:
	LD	A, (HL)
	AND	A, A
	JR	Z, debug_io_print_string_HL_done
	CALL	debug_io_print_character_A
	INC	HL
	JR	debug_io_print_string_HL_loop
debug_io_print_string_HL_done:
	POP	HL
	POP	AF
	RET

debug_io_print_hex_byte_A:
	PUSH	AF
	RRCA
	RRCA
	RRCA
	RRCA
	CALL	debug_io_print_hex_nibble_A
	POP	AF
debug_io_print_hex_nibble_A:
	AND	A, $0F
	ADD	A, $90
	DAA
	ADC	A, $40
	DAA
	CALL	debug_io_print_character_A
	RET
