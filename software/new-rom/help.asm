public help_contents_window
public help_reader_window
public help_menu_window

extern debug_io_print_hex_byte_A
extern debug_io_print_character_A

extern ui_window_handle_input_propagate
extern ui_window_handle_input_do_not_propagate
extern ui_widget_IX_draw
extern ui_label_IX_draw
extern ui_panel_IX_draw

extern lorem_ipsum

include "ui.inc"

help_reader_handle_input:
	BIT	0, D
	JP	NZ, ui_window_handle_input_propagate
	LD	A, E
	CP	$7A ; page down
	JR	Z, help_reader_handle_input_scroll_down
	CP	$7D ; page up
	JR	Z, help_reader_handle_input_scroll_up
	JP	ui_window_handle_input_propagate
help_reader_handle_input_scroll_down:
	LD	HL, (help_reader_text + ui_label_text)
	LD	E, 28 + 13
help_reader_handle_input_scroll_down_count_lines_loop:
	LD	A, 10
	LD	BC, 53
	CPIR
	LD	A, (HL)
	AND	A, A
	JP	Z, help_reader_handle_input_scroll_down_count_lines_done
	DEC	E
	JR	NZ, help_reader_handle_input_scroll_down_count_lines_loop
help_reader_handle_input_scroll_down_count_lines_done:
	LD	A, 13
	SUB	A, E
	JP	C, ui_window_handle_input_do_not_propagate
	INC	A
	LD	E, A
	LD	HL, (help_reader_text + ui_label_text)
help_reader_handle_input_scroll_down_add_lines_loop:
	LD	A, 10
	LD	BC, 53
	CPIR
	DEC	E
	JR	NZ, help_reader_handle_input_scroll_down_add_lines_loop
	LD	(help_reader_text + ui_label_text), HL
	LD	IX, help_reader_text
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate
help_reader_handle_input_scroll_up:
	LD	E, 14
	LD	HL, (help_reader_text + ui_label_text)
help_reader_handle_input_scroll_up_loop:
	DEC	HL
	LD	A, (HL)
	AND	A, A
	JP	Z, help_reader_handle_input_scroll_up_limit
	DEC	HL
	LD	A, (HL)
	AND	A, A
	JR	Z, help_reader_handle_input_scroll_up_limit
	LD	A, 10
	LD	BC, 53
	CPDR
	INC	HL
	INC	HL
	DEC	E
	JR	NZ, help_reader_handle_input_scroll_up_loop
	DEC	HL
help_reader_handle_input_scroll_up_limit:
	INC	HL
	LD	(help_reader_text + ui_label_text), HL
	LD	IX, help_reader_text
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

section objects_mutable

help_reader_text:
defb	ui_object_type_widget
defb	1, 0, 52, 28
defw	help_reader_window
defw	ui_label_IX_draw
defw	lorem_ipsum

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
defw	help_reader_handle_input
defw	help_reader_panel
defw	help_reader_text
defw	help_reader_scrollbar
defw	0
help_reader_panel:
defb	ui_object_type_widget
defb	1, 1, 52, 26
defw	help_reader_window
defw	ui_panel_IX_draw
defb	$1F, ' '
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
