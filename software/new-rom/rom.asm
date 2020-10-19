public window_list_app
public draw_windows_HL

extern debug_io_init
extern debug_io_print_string_HL
extern debug_io_print_hex_byte_A
extern debug_io_print_character_A

extern error

extern video_timing_init
extern video_text_mode_init

extern keyboard_init
extern keyboard_get_key_success_NZ_scancode_E_flags_D

extern ui_window_IX_draw
extern ui_window_IX_handle_input_DE_propagate_NZ
extern ui_window_handle_input_do_not_propagate
extern ui_panel_IX_draw
extern ui_label_IX_draw

extern taskbar_window

extern app_IX_activate
extern help_app

include "ui.inc"
include "app.inc"

	LD	DE, ram_initialized
	LD	HL, initializer
	LD	BC, ram_uninitialized - ram_initialized
	LDIR

	LD	SP, ram_initialized

	CALL	debug_io_init
	CALL	keyboard_init

	LD	HL, reset_message
	CALL	debug_io_print_string_HL

	CALL	video_timing_init
	CALL	video_text_mode_init

	LD	HL, window_list
	CALL	draw_windows_HL

	LD	IX, help_app
	CALL	app_IX_activate

	LD	A, interrupt_vectors/$100
	LD	I, A
	IM	2
	EI
main_loop:
	HALT
	CALL	handle_input
	JR	main_loop

draw_windows_HL:
	LD	E, (HL)
	INC	HL
	LD	D, (HL)
	INC	HL
	LD	A, E
	OR	A, D
	RET	Z
	LD	IX, DE
	PUSH	HL
	CALL	ui_window_IX_draw
	POP	HL
	JR	draw_windows_HL

handle_input:
	CALL	keyboard_get_key_success_NZ_scancode_E_flags_D
	RET	Z
	; find end of window list
	LD	HL, window_list
handle_input_find_top_window_loop:
	LD	C, (HL)
	INC	HL
	LD	B, (HL)
	INC	HL
	LD	A, B
	OR	A, C
	JR	NZ, handle_input_find_top_window_loop
	DEC	HL
	DEC	HL
handle_input_next_window:
	DEC	HL
	LD	B, (HL)
	DEC	HL
	LD	C, (HL)
	LD	IX, BC
	PUSH	HL
	CALL	ui_window_IX_handle_input_DE_propagate_NZ
	POP	HL
	JR	NZ, handle_input_next_window
	JR	handle_input

section interrupt_vectors
interrupt_vectors:

section objects_immutable
root_window:
defb	ui_object_type_window
defb	0, 0	; left, top
defb	80, 30	; width, height
defb	$30	; color
defb	$B1	; character
defw	ui_window_handle_input_do_not_propagate ; input handler
defw	0 ; widget list

section strings
reset_message:
defb	13, 10, 13, 10
defb	"--- RESET ---"
defb	13, 10, 13, 10, 0

section constants

section charmap

section initializer
initializer:

section ram_initialized
org $FF00
ram_initialized:

window_list:
defw	root_window
defw	taskbar_window
window_list_app:
defs	app_max_windows*2, 0
defw	0

section objects_mutable

section ram_uninitialized
org -1
ram_uninitialized:
