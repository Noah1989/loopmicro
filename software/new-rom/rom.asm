extern debug_io_init
extern debug_io_print_string_iHL

extern error

extern video_timing_init
extern video_text_mode_init

	LD	SP, 0

	CALL	debug_io_init

	LD	HL, reset_message
	CALL	debug_io_print_string_iHL

	CALL	video_timing_init
	CALL	video_text_mode_init

	CALL	error

reset_message:
defb	13, 10, 13, 10
defb	"--- RESET ---"
defb	13, 10, 13, 10, 0
