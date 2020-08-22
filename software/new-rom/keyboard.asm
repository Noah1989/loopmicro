public keyboard_init

extern debug_io_print_hex_byte_A

extern error

; I/O ports
defc sio_channel_a_control = $C1
defc sio_channel_a_data = $C0
defc sio_channel_b_control = $C3

defc keyboard_input_buffer_size = 16 ; must be power of 2

keyboard_init:
	LD	HL, keyboard_init_data_b
	LD	C, sio_channel_b_control
	LD	B, keyboard_init_data_b_length
	OTIR
	LD	C, sio_channel_a_control
	LD	B, keyboard_init_data_a_length
	OTIR
	LD	A, keyboard_input_buffer&$FF
	LD	(keyboard_input_buffer_read_offset), A
	LD	(keyboard_input_buffer_write_offset), A
	RET

keyboard_interrupt:
	EX	AF, AF'
	EXX
	LD	H, keyboard_input_buffer/$100
	LD	A, (keyboard_input_buffer_write_offset)
	LD	L, A
keyboard_interrupt_loop:
	IN	A, (sio_channel_a_control)
	AND	A, $01
	JR	Z, keyboard_interrupt_done
	IN	A, (sio_channel_a_data)
	LD	(HL), A
	LD	A, L
	INC	A
	AND	A, keyboard_input_buffer_size-1
	OR	A, keyboard_input_buffer&$FF
	LD	L, A
	LD	A, (keyboard_input_buffer_read_offset)
	CP	L
	CALL	Z, error
	JR	keyboard_interrupt_loop
keyboard_interrupt_done:
	LD	A, L
	LD	(keyboard_input_buffer_write_offset), A
	EXX
	EX	AF, AF'
	EI
	RETI

keyboard_interrupt_invalid1:
	CALL	error
keyboard_interrupt_invalid2:
	CALL	error
keyboard_interrupt_invalid3:
	CALL	error
keyboard_interrupt_invalid4:
	CALL	error
keyboard_interrupt_invalid5:
	CALL	error
keyboard_interrupt_invalid6:
	CALL	error
keyboard_interrupt_invalid7:
	CALL	error

section interrupt_vectors
align $100
keyboard_interrupt_vector:
defw	keyboard_interrupt
defw	keyboard_interrupt_invalid1
defw	keyboard_interrupt_invalid2
defw	keyboard_interrupt_invalid3
defw	keyboard_interrupt_invalid4
defw	keyboard_interrupt_invalid5
defw	keyboard_interrupt_invalid6
defw	keyboard_interrupt_invalid7

section constants
keyboard_init_data_b:
defb	1, %00000000 ; no interrupts on channel b, static vector
defb	2, keyboard_interrupt_vector&$FF
defc keyboard_init_data_b_length = ASMPC - keyboard_init_data_b
keyboard_init_data_a:
defb	4, %00000111 ; no prescaler, 1 stop bit, odd parity
defb	3, %11000001 ; 8 data bits, enable receiver
defb	5, %11100000 ; power to peripheral (DTR), transmitter off
defb	1, %00011000 ; interrupt when data received
defc keyboard_init_data_a_length = ASMPC - keyboard_init_data_a

section variables
keyboard_input_buffer_write_offset:
defs	1
keyboard_input_buffer_read_offset:
defs	1

section keyboard_input_buffer
align keyboard_input_buffer_size
keyboard_input_buffer:
defs keyboard_input_buffer_size
