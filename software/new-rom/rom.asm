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
extern ui_panel_IX_draw
extern ui_label_IX_draw

extern taskbar_window

include "ui.inc"

	LD	SP, variables

	CALL	debug_io_init
	CALL	keyboard_init

	LD	HL, reset_message
	CALL	debug_io_print_string_HL

	CALL	video_timing_init
	CALL	video_text_mode_init

	CALL	draw_windows

	LD	A, interrupt_vectors/$100
	LD	I, A
	IM	2
	EI
main_loop:
	HALT
	CALL	handle_input
	JR	main_loop

draw_windows:
	LD	HL, window_list
draw_windows_loop:
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
	JR	draw_windows_loop

handle_input:
	CALL	keyboard_get_key_success_NZ_scancode_E_flags_D
	RET	Z
	LD	A, E
	CALL	debug_io_print_hex_byte_A
	LD	A, D
	CALL	debug_io_print_hex_byte_A
	LD	A, ' '
	CALL	debug_io_print_character_A
	JR	handle_input

section interrupt_vectors
interrupt_vectors:

section objects_immutable
window_list:
defw	root_window
defw	taskbar_window
defw	0
root_window:
defb	ui_object_type_window
defb	0, 0	; left, top
defb	80, 30	; width, height
defb	$30	; color
defb	$B1	; character
defw	welcome_panel, welcome_label, 0 ; widget list
welcome_panel:
defb	ui_object_type_widget
defb	20, 10	; left, top
defb	40, 10	; width, height
defw	root_window ; parent
defw	ui_panel_IX_draw ; draw method
defb	$3F, ' '; color, character
welcome_label:
defb	ui_object_type_widget
defb	2, 1	; left, top
defb	36, 8	; width, height
defw	welcome_panel ; parent
defw	ui_label_IX_draw ; draw method
defw	welcome_text ; text

section strings
reset_message:
defb	13, 10, 13, 10
defb	"--- RESET ---"
defb	13, 10, 13, 10, 0
welcome_text:
defb	"Welcome.", 10, 10
defb	"This is just a test.", 0

section constants

section charmap

section variables
org $FF00
variables:
