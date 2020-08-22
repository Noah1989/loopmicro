public ui_panel_IX_draw

extern ui_box_IX_fill_color_L_character_H

include "ui.inc"

ui_panel_IX_draw:
	LD	L, (IX+ui_panel_background_color)
	LD	H, (IX+ui_panel_background_character)
	CALL	ui_box_IX_fill_color_L_character_H
	RET
