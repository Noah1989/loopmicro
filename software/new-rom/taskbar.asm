public taskbar_window

extern ui_box_IX_fill_color_L_character_H
extern ui_box_IX_calculate_absolute_position_DE
extern ui_label_IX_draw

include "ui.inc"
include "video_io.inc"

defc taskbar_button_state_normal = 0
defc taskbar_button_state_pressed = 1
defc taskbar_button_state_selected = 2

; taskbar button
defvars ui_widget {
	taskbar_button_label ds.w 1
	taskbar_button_state ds.b 1
}

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

taskbar_button_colors:
defb	$3F ; normal
defb	$4F ; pressed
defb	$2F ; selected
taskbar_button_colors_hotkey:
defb	$3E ; normal
defb	$4E ; pressed
defb	$2E ; selected


taskbar_window:
defb	ui_object_type_window
defb	0, 29
defb	80, 1
defb	$3F, ' '
defw	taskbar_button_help
defw	taskbar_button_memory
defw	taskbar_button_files
defw	0

taskbar_button_help:
defb	ui_object_type_widget
defb	0, 0
defb	9, 1
defw	taskbar_window
defw	taskbar_button_IX_draw
defw	taskbar_button_help_label
defb	taskbar_button_state_normal
taskbar_button_help_label:
defb	ui_object_type_widget
defb	1, 0
defb	7, 1
defw	taskbar_button_help
defw	ui_label_IX_draw
defw	taskbar_button_help_text

taskbar_button_memory:
defb	ui_object_type_widget
defb	9, 0
defb	11, 1
defw	taskbar_window
defw	taskbar_button_IX_draw
defw	taskbar_button_memory_label
defb	taskbar_button_state_normal
taskbar_button_memory_label:
defb	ui_object_type_widget
defb	1, 0
defb	9, 1
defw	taskbar_button_memory
defw	ui_label_IX_draw
defw	taskbar_button_memory_text

taskbar_button_files:
defb	ui_object_type_widget
defb	20, 0
defb	10, 1
defw	taskbar_window
defw	taskbar_button_IX_draw
defw	taskbar_button_files_label
defb	taskbar_button_state_normal
taskbar_button_files_label:
defb	ui_object_type_widget
defb	1, 0
defb	8, 1
defw	taskbar_button_files
defw	ui_label_IX_draw
defw	taskbar_button_files_text

taskbar_button_help_text:
defb	"F1-Help", 0
taskbar_button_memory_text:
defb	"F2-Memory", 0
taskbar_button_files_text:
defb	"F3-Files", 0
