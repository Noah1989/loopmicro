public ui_hotkey_highlight_IX_draw

extern ui_box_IX_calculate_absolute_position_DE

include "video_io.inc"
include "ui.inc"

ui_hotkey_highlight_IX_draw:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	A, D
	OUT	(video_address_h), A
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	PUSH	IX
	LD	IX, BC
	LD	L, (IX+ui_label_text)
	LD	H, (IX+ui_label_text+1)
	POP	IX
ui_hotkey_highlight_IX_draw_count_reset:
	LD	B, 0
ui_hotkey_highlight_IX_draw_count_loop:
	LD	A, (HL)
	INC	HL
	INC	E
	AND	A, A
	RET	Z
	CP	A, '-'
	JR	Z, ui_hotkey_highlight_IX_draw_count_done
	CP	A, ' '
	JR	Z, ui_hotkey_highlight_IX_draw_count_reset
	INC	B
	JR	ui_hotkey_highlight_IX_draw_count_loop
ui_hotkey_highlight_IX_draw_count_done:
	LD	C, E
	DEC	C
ui_hotkey_highlight_IX_draw_paint_loop:
	DEC	C
	LD	A, C
	OUT	(video_address_l), A
	LD	A, (IX+ui_hotkey_highlight_color)
	OUT	(video_table_attribute), A
	DJNZ	ui_hotkey_highlight_IX_draw_paint_loop
	JR	ui_hotkey_highlight_IX_draw_count_reset
