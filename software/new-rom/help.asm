public help_contents_window
public help_reader_window
public help_menu_window

extern ui_window_handle_input_propagate
extern ui_label_IX_draw
extern ui_panel_IX_draw

extern lorem_ipsum

include "ui.inc"

section objects_immutable

help_contents_window:
defb	ui_object_type_window
defb	0, 1, 25, 28
defb	$1F, ' '
defw	ui_window_handle_input_propagate
defw	help_contents_title_label
defw	help_contents_scrollbar
defw	0
help_contents_title_label:
defb	ui_object_type_widget
defb	8, 1, 8, 28
defw	help_contents_window
defw	ui_label_IX_draw
defw	help_contents_title_label_text
help_contents_scrollbar:
defb	ui_object_type_widget
defb	24, 0, 1, 28
defw	help_contents_window
defw	ui_panel_IX_draw
defb	$19, $B3

help_reader_window:
defb	ui_object_type_window
defb	25, 1, 55, 28
defb	$19, ' '
defw	ui_window_handle_input_propagate
defw	help_reader_panel
defw	help_reader_text
defw	help_reader_scrollbar
defw	0
help_reader_panel:
defb	ui_object_type_widget
defb	1, 1, 53, 26
defw	help_reader_window
defw	ui_panel_IX_draw
defb	$1F, ' '
help_reader_text:
defb	ui_object_type_widget
defb	1, 1, 53, 27
defw	help_reader_window
defw	ui_label_IX_draw
defw	lorem_ipsum
help_reader_scrollbar:
defb	ui_object_type_widget
defb	54, 0, 1, 28
defw	help_reader_window
defw	ui_panel_IX_draw
defb	$19, $B3

help_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	0

section strings
help_contents_title_label_text:
defb	"Contents", 0
