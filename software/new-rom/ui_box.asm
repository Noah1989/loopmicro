public ui_box_IX_fill_color_L_character_H
public ui_box_IX_calculate_absolute_position_DE

include "ui.inc"
include "video_io.inc"

ui_box_IX_fill_color_L_character_H:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	B, (IX+ui_box_width)
	LD	C, (IX+ui_box_height)
ui_box_IX_draw_loop:
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	; draw a whole line
	PUSH	BC
ui_box_IX_draw_loop_line:
	LD	A, L
	OUT	(video_table_attribute), A
	LD	A, H
	OUT	(video_table_name_increment), A
	DJNZ	ui_box_IX_draw_loop_line
	POP	BC
	; next line
	INC	D
	DEC	C
	JR	NZ, ui_box_IX_draw_loop
	; done
	RET

ui_box_IX_calculate_absolute_position_DE:
	; start with own position
	LD	E, (IX+ui_box_left)
	LD	D, (IX+ui_box_top)
	; check if this box is a widget
	LD	A, (IX+ui_object_type)
	CP	A, ui_object_type_widget
	RET	NZ
	PUSH	IX
ui_box_IX_calculate_absolute_position_DE_loop:
	; get parent
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	LD	IX, BC
	; add parent position left
	LD	A, E
	ADD	A, (IX+ui_box_left)
	LD	E, A
	; add parent position top
	LD	A, D
	ADD	A, (IX+ui_box_top)
	LD	D, A
	; repeat if parent is also a widget
	LD	A, (IX+ui_object_type)
	CP	ui_object_type_widget
	JR	Z, ui_box_IX_calculate_absolute_position_DE_loop
	; done
	POP	IX
	RET
