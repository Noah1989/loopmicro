extern debug_io_init
extern debug_io_print_string_HL

extern error

extern video_timing_init
extern video_text_mode_init

extern keyboard_init

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

	LD	IX, root_window
	CALL	ui_window_IX_draw

	LD	IX, taskbar_window
	CALL	ui_window_IX_draw

	LD	A, interrupt_vectors/$100
	LD	I, A
	IM	2
	EI
main_loop:
	HALT
	JR	main_loop

section interrupt_vectors
interrupt_vectors:

section objects_immutable
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
