public taskbar_window

extern ui_box_IX_fill_color_L_character_H
extern ui_box_IX_calculate_absolute_position_DE
extern ui_widget_IX_draw
extern ui_label_IX_draw
extern ui_window_handle_input_propagate
extern ui_window_handle_input_do_not_propagate
extern ui_window_handle_vsync_noop

extern app_IX_activate
extern help_app
extern memory_app
extern files_app

include "ui.inc"
include "video_io.inc"

defc taskbar_button_state_normal = 0
defc taskbar_button_state_pressed = 1
defc taskbar_button_state_selected = 2

; taskbar button
defvars ui_widget {
	taskbar_button_label ds.w 1
	taskbar_button_keycode ds.b 1
	taskbar_button_state ds.b 1
	taskbar_button_app ds.w 1
	taskbar_button
}

taskbar_window_IX_handle_input:
	; params: E=scancode, D=flags
	LD	BC, IX
	LD	HL, ui_window_widgets
	ADD	HL, BC
taskbar_window_IX_handle_input_next_button:
	; get pointer to button from widget list
	LD	C, (HL)
	INC	HL
	LD	B, (HL)
	INC	HL
	; propagate event if none of the buttons matched
	LD	A, B
	OR	A, C
	JP	Z, ui_window_handle_input_propagate
	; check button scancode
	LD	IX, BC
	LD	A, (IX+taskbar_button_keycode)
	CP	A, E
	JR	NZ, taskbar_window_IX_handle_input_next_button
	; handle event for found button
	BIT	0, D
	JR	Z, taskbar_button_IX_press
taskbar_button_IX_release:
	LD	A, (IX+taskbar_button_state)
	CP	taskbar_button_state_pressed
	JP	NZ, ui_window_handle_input_do_not_propagate
	LD	A, 0
	LD	(taskbar_button_is_pressed), A
	; select and draw the button
	LD	A, taskbar_button_state_selected
	LD	(IX+taskbar_button_state), A
	PUSH	IX
	CALL	ui_widget_IX_draw
	POP	DE
	; check if this button was already selected before
	LD	HL, (taskbar_selected_button)
	XOR	A, A ; clears carry flag
	SBC	HL, DE
	JP	Z, ui_window_handle_input_do_not_propagate
	; if not, deselect and draw the previously selected button
	LD	IX, (taskbar_selected_button)
	LD	(taskbar_selected_button), DE
	LD	A, taskbar_button_state_normal
	LD	(IX+taskbar_button_state), A
	CALL	ui_widget_IX_draw
	; activate the app for the now selected button
	LD	IX, (taskbar_selected_button)
	LD	E, (IX+taskbar_button_app)
	LD	D, (IX+taskbar_button_app+1)
	LD	IX, DE
	CALL	app_IX_activate
	JP	ui_window_handle_input_do_not_propagate
taskbar_button_IX_press:
	LD	A, (taskbar_button_is_pressed)
	AND	A, A
	JP	NZ, ui_window_handle_input_do_not_propagate
	LD	A, taskbar_button_state_pressed
	CP	A, (IX+taskbar_button_state)
	JP	Z, ui_window_handle_input_do_not_propagate
	;LD	A, taskbar_button_state_pressed
	LD	(IX+taskbar_button_state), A
	CALL	ui_widget_IX_draw
	LD	A, 1
	LD	(taskbar_button_is_pressed), A
	JP	ui_window_handle_input_do_not_propagate


taskbar_button_IX_draw:
	LD	HL, taskbar_button_colors
	LD	D, 0
	LD	E, (IX+taskbar_button_state)
	ADD	HL, DE
	LD	L, (HL)
	LD	H, ' '
	CALL	ui_box_IX_fill_color_L_character_H
	CALL	ui_box_IX_calculate_absolute_position_DE
	INC	E
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	LD	HL, taskbar_button_colors_hotkey
	LD	D, 0
	LD	E, (IX+taskbar_button_state)
	ADD	HL, DE
	LD	A, (HL)
	OUT	(video_table_attribute_increment), A
	OUT	(video_table_attribute_increment), A
	LD	E, (IX+taskbar_button_label)
	LD	D, (IX+taskbar_button_label+1)
	LD	IX, DE
	CALL	ui_label_IX_draw
	RET

section ram_initialized
taskbar_selected_button:
defw	taskbar_button_help
taskbar_button_is_pressed:
defb	0

section objects_mutable
taskbar_button_help:
defb	ui_object_type_widget
defb	0, 0
defb	9, 1
defw	taskbar_window
defw	taskbar_button_IX_draw
defw	taskbar_button_help_label
defb	$05 ; F1
defb	taskbar_button_state_selected
defw	help_app
taskbar_button_memory:
defb	ui_object_type_widget
defb	9, 0
defb	11, 1
defw	taskbar_window
defw	taskbar_button_IX_draw
defw	taskbar_button_memory_label
defb	$06 ; F2
defb	taskbar_button_state_normal
defw	memory_app
taskbar_button_files:
defb	ui_object_type_widget
defb	20, 0
defb	10, 1
defw	taskbar_window
defw	taskbar_button_IX_draw
defw	taskbar_button_files_label
defb	$04 ; F3
defb	taskbar_button_state_normal
defw	files_app

section objects_immutable
taskbar_window:
defb	ui_object_type_window
defb	0, 29
defb	80, 1
defb	$3F, ' '
defw	taskbar_window_IX_handle_input
defw	ui_window_handle_vsync_noop
defw	taskbar_button_help
defw	taskbar_button_memory
defw	taskbar_button_files
defw	0
taskbar_button_help_label:
defb	ui_object_type_widget
defb	1, 0
defb	7, 1
defw	taskbar_button_help
defw	ui_label_IX_draw
defw	taskbar_button_help_text
taskbar_button_memory_label:
defb	ui_object_type_widget
defb	1, 0
defb	9, 1
defw	taskbar_button_memory
defw	ui_label_IX_draw
defw	taskbar_button_memory_text
taskbar_button_files_label:
defb	ui_object_type_widget
defb	1, 0
defb	8, 1
defw	taskbar_button_files
defw	ui_label_IX_draw
defw	taskbar_button_files_text

section strings
taskbar_button_help_text:
defb	"F1-Help", 0
taskbar_button_memory_text:
defb	"F2-Memory", 0
taskbar_button_files_text:
defb	"F3-Files", 0

section constants
taskbar_button_colors:
defb	$3F ; normal
defb	$4F ; pressed
defb	$1F ; selected
taskbar_button_colors_hotkey:
defb	$3E ; normal
defb	$4E ; pressed
defb	$1E ; selected
