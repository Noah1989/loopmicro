public ui_widget_IX_draw

include "ui.inc"

ui_widget_IX_draw:
	LD	L, (IX+ui_widget_draw)
	LD	H, (IX+ui_widget_draw+1)
	JP	(HL)
