public ui_window_IX_draw
public ui_window_handle_input_propagate
public ui_window_handle_input_do_not_propagate

extern debug_io_print_hex_byte_A
extern error

extern ui_box_IX_fill_color_L_character_H
extern ui_widget_IX_draw
extern ui_window_IX_handle_input_DE_propagate_NZ
extern ui_window_handle_input_propagate
include "ui.inc"

ui_window_IX_draw:
	LD	L, (IX+ui_window_background_color)
	LD	H, (IX+ui_window_background_character)
	CALL	ui_box_IX_fill_color_L_character_H
	; let HL point to widget list
	LD	DE, IX
	LD	HL, ui_window_widgets
	ADD	HL, DE
ui_window_IX_draw_widgets_loop:
	; get widget pointer into DE
	LD	E, (HL)
	INC	HL
	LD	D, (HL)
	INC	HL
	; null pointer marks end of widget list
	LD	A, E
	OR	A, D
	RET	Z
	; draw the widget
	PUSH	HL
	LD	IX, DE
	CALL	ui_widget_IX_draw
	POP	HL
	; next
	JR	ui_window_IX_draw_widgets_loop

ui_window_IX_handle_input_DE_propagate_NZ:
	LD	L, (IX+ui_window_handle_input)
	LD	H, (IX+ui_window_handle_input+1)
	JP	(HL)

ui_window_handle_input_propagate:
	XOR	A, A
	INC	A ; NZ -> propagate event
	RET

ui_window_handle_input_do_not_propagate:
	CP	A, A; set Z flag -> don't propagate
	RET
