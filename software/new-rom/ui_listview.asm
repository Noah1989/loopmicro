public ui_listview_IX_draw
public ui_listview_line_cursor_IX_draw
public ui_listview_line_cursor_IX_up
public ui_listview_line_cursor_IX_down

extern ui_box_IX_calculate_absolute_position_DE
extern listing_IX_seek_line_BC
extern listing_IX_read_line_eof_Z
extern ui_widget_IX_draw

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
	LD	C, (IX+ui_listview_top_line)
	LD	B, (IX+ui_listview_top_line+1)
	LD	HL, BC
	DEC	HL ; bottom line counter
	LD	E, (IX+ui_listview_listing)
	LD	D, (IX+ui_listview_listing+1)
	LD	IX, DE
	PUSH	HL
	CALL	listing_IX_seek_line_BC
	POP	HL
	POP	DE
	POP	BC
ui_listview_IX_draw_line:
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	PUSH	DE
	PUSH	BC
	PUSH	HL
	CALL	listing_IX_read_line_eof_Z
	POP	HL
	POP	BC
	PUSH	BC
	JR	Z, ui_listview_IX_draw_line_fill
	INC	HL
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
	LD	(IX+ui_listview_bottom_line), L
	LD	(IX+ui_listview_bottom_line+1), H
	RET

ui_listview_line_cursor_IX_draw:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	L, (IX+ui_widget_parent)
	LD	H, (IX+ui_widget_parent+1)
	LD	BC, ui_listview_top_line
	ADD	HL, BC
	LD	C, (HL) ; BC <- top line
	INC	HL
	LD	B, (HL)
	LD	L, (IX+ui_listview_line_cursor_current_line)
	LD	H, (IX+ui_listview_line_cursor_current_line+1)
	XOR	A, A ; clear carry flag
	SBC	HL, BC ; HL <- current line - top line
	LD	A, D
	ADD	A, L
	OUT	(video_address_h), A
	LD	A, E
	OUT	(video_address_l), A
	LD	B, (IX+ui_box_width)
ui_listview_line_cursor_IX_draw_loop:
	IN	A, (video_table_attribute)
	XOR	A, (IX+ui_listview_line_cursor_color_xor_bitmask)
	OUT	(video_table_attribute_increment), A
	DJNZ	ui_listview_line_cursor_IX_draw_loop
	RET

ui_listview_line_cursor_IX_up:
	PUSH	IX
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	LD	IX, BC
	LD	L, (IX+ui_listview_top_line)
	LD	H, (IX+ui_listview_top_line+1)
	POP	IX
	PUSH	HL
	CALL	ui_widget_IX_draw
	POP	HL
	LD	E, (IX+ui_listview_line_cursor_current_line)
	LD	D, (IX+ui_listview_line_cursor_current_line+1)
	LD	A, E
	OR	A, D
	JR	Z, ui_listview_line_cursor_IX_up_end
	XOR	A, A ; clear carry
	SBC	HL, DE
	DEC	DE
	JR	C, ui_listview_line_cursor_IX_up_end
	ADD	HL, DE
	LD	BC, -9
	ADD	HL, BC
	PUSH	IX
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	LD	IX, BC
	LD	(IX+ui_listview_top_line), L
	LD	(IX+ui_listview_top_line+1), H
	PUSH	DE
	CALL	ui_widget_IX_draw
	POP	DE
	POP	IX
ui_listview_line_cursor_IX_up_end:
	LD	(IX+ui_listview_line_cursor_current_line), E
	LD	(IX+ui_listview_line_cursor_current_line+1), D
	CALL	ui_widget_IX_draw
	RET

ui_listview_line_cursor_IX_down:
	PUSH	IX
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	LD	IX, BC
	LD	L, (IX+ui_listview_bottom_line)
	LD	H, (IX+ui_listview_bottom_line+1)
	POP	IX
	PUSH	HL
	CALL	ui_widget_IX_draw
	POP	HL
	LD	E, (IX+ui_listview_line_cursor_current_line)
	LD	D, (IX+ui_listview_line_cursor_current_line+1)
	XOR	A, A ; clear carry
	INC	DE
	SBC	HL, DE
	JR	NC, ui_listview_line_cursor_IX_down_end
	ADD	HL, DE
	PUSH	IX
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	LD	IX, BC
	LD	C, (IX+ui_listview_top_line)
	LD	B, (IX+ui_listview_top_line+1)
	POP	IX
	XOR	A, A
	SBC	HL, BC
	LD	C, (IX+ui_box_height)
	DEC	C
	LD	B, A
	SBC	HL, BC
	JR	Z, ui_listview_line_cursor_IX_down_scroll_ok
	DEC	DE
	JR	ui_listview_line_cursor_IX_down_end
ui_listview_line_cursor_IX_down_scroll_ok:
	PUSH	IX
	LD	C, (IX+ui_widget_parent)
	LD	B, (IX+ui_widget_parent+1)
	LD	IX, BC
	LD	L, (IX+ui_listview_top_line)
	LD	H, (IX+ui_listview_top_line+1)
	LD	BC, 10
	ADD	HL, BC
	LD	(IX+ui_listview_top_line), L
	LD	(IX+ui_listview_top_line+1), H
	PUSH	DE
	CALL	ui_widget_IX_draw
	POP	DE
	LD	L, (IX+ui_listview_bottom_line)
	LD	H, (IX+ui_listview_bottom_line+1)
	POP	IX
	XOR	A, A
	SBC	HL, DE
	JR	NC, ui_listview_line_cursor_IX_down_end
	DEC	DE
ui_listview_line_cursor_IX_down_end:
	LD	(IX+ui_listview_line_cursor_current_line), E
	LD	(IX+ui_listview_line_cursor_current_line+1), D
	CALL	ui_widget_IX_draw
	RET
