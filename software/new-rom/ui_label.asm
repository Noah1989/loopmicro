public ui_label_IX_draw

extern ui_box_IX_calculate_absolute_position_DE

include "ui.inc"
include "video_io.inc"

ui_label_IX_draw:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	B, (IX+ui_box_width)
	LD	C, (IX+ui_box_height)
	LD	L, (IX+ui_label_text)
	LD	H, (IX+ui_label_text+1)
ui_label_IX_draw_loop:
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	PUSH	BC
ui_label_IX_draw_loop_line:
	LD	A, (HL)
	INC	HL
	AND	A
	JR	Z, ui_label_IX_draw_end
	CP	A, 10
	JR	Z, ui_label_IX_draw_loop_line_fill
	OUT	(video_table_name_increment), A
	DJNZ	ui_label_IX_draw_loop_line
ui_label_IX_draw_loop_line_done:
	POP	BC
	INC	D
	DEC	C
	JR	NZ, ui_label_IX_draw_loop
	RET
ui_label_IX_draw_end:
	POP	BC
	RET
ui_label_IX_draw_loop_line_fill:
	LD	A, ' '
ui_label_IX_draw_loop_line_fill_loop:
	OUT	(video_table_name_increment), A
	DJNZ	ui_label_IX_draw_loop_line_fill_loop
	JR	ui_label_IX_draw_loop_line_done
