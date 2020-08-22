extern debug_io_print_string_iHL
extern debug_io_print_hex_byte_A

public	error

error:
	DI
	LD	HL, error_message
	CALL	debug_io_print_string_iHL
	POP	HL ; caller return address
	DEC	HL
	DEC	HL
	LD	A, H
	CALL	debug_io_print_hex_byte_A
	LD	A, L
	CALL	debug_io_print_hex_byte_A
	LD	HL, error_message2
	CALL	debug_io_print_string_iHL
error_halt_loop:
	HALT
	JR	error_halt_loop

error_message:
defb	"ERROR @ $", 0
error_message2:
defb	13, 10, 13, 10, "--- HALT ---", 13, 10, 0
