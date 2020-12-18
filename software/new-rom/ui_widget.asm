public ui_widget_IX_draw

extern debug_io_print_hex_byte_A
extern debug_io_print_character_A

include "ui.inc"

ui_widget_IX_draw:
	LD	L, (IX+ui_widget_draw)
	LD	H, (IX+ui_widget_draw+1)
	JP	(HL)
