public ui_listview_IX_draw

extern ui_box_IX_calculate_absolute_position_DE
extern listing_IX_seek_line_BC
extern listing_IX_read_line_eof_Z

extern error

include "ui.inc"
include "video_io.inc"
include "listing.inc"

ui_listview_IX_draw:
	PUSH	IX

	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	B, (IX+ui_box_width)
	LD	C, (IX+ui_box_height)

	PUSH	BC
	PUSH	DE

	LD	C, (IX+ui_listview_listing)
	LD	B, (IX+ui_listview_listing+1)
	LD	IX, BC
	LD	BC, 0
	CALL	listing_IX_seek_line_BC

	POP	DE
	POP	BC

ui_listview_IX_draw_line:
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	PUSH	DE
	PUSH	BC
	CALL	listing_IX_read_line_eof_Z
	POP	BC
	PUSH	BC
	JR	Z, ui_listview_IX_draw_line_fill
	LD	E, (IX+listing_buffer_address)
	LD	D, (IX+listing_buffer_address+1)
ui_listview_IX_draw_char:
	LD	A, (DE)
	INC	DE
	AND	A, A
	JR	Z, ui_listview_IX_draw_line_fill
	OUT	(video_table_name_increment), A
	DJNZ	ui_listview_IX_draw_char
	JR	ui_listview_IX_draw_line_done
ui_listview_IX_draw_line_fill:
	LD	A, ' '
	OUT	(video_table_name_increment), A
	DJNZ	ui_listview_IX_draw_line_fill
ui_listview_IX_draw_line_done:
	POP	BC
	POP	DE
	INC	D
	DEC	C
	JR	NZ, ui_listview_IX_draw_line

	POP	IX
	RET
