extern debug_io_init
extern debug_io_print_string_iHL
extern panic

	CALL	debug_io_init

	LD	HL, reset_message
	CALL	debug_io_print_string_iHL

	CALL	panic

reset_message:
defb	13, 10, 13, 10
defb	"--- RESET ---"
defb	13, 10, 13, 10, 0
