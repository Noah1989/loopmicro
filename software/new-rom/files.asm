public files_app

extern ui_window_handle_input_propagate
extern ui_window_handle_input_do_not_propagate
extern ui_window_handle_vsync_noop
extern ui_listview_IX_draw
extern ui_panel_IX_draw
extern ui_label_IX_draw
extern ui_listview_line_cursor_IX_draw
extern ui_widget_IX_draw

extern sdcard_init
extern fat32_init
extern fat32_directory_listing_IX_seek_line_BC
extern fat32_directory_listing_IX_read_line_eof_Z
extern fat32_rootdir

extern error

include "ui.inc"

files_app_init:
	CALL	sdcard_init
	CALL	fat32_init
	LD	L, '/'
	LD	H, 0
	LD	(files_listview_title_text_name), HL
	RET

files_app_activate:
	RET

files_app_deactivate:
	RET

files_app_handle_input:
	BIT	0, D ; ignore key release events
	JP	NZ, ui_window_handle_input_propagate
	LD	A, E
	CP	A, $75 ; up arrow
	JR	Z, files_app_handle_input_up_arrow
	CP	A, $72 ; down arrow
	JR	Z, files_app_handle_input_down_arrow
	JP	ui_window_handle_input_propagate

files_app_handle_input_up_arrow:
	LD	IX, files_listview_cursor
	CALL	ui_widget_IX_draw
	DEC	(IX+ui_listview_line_cursor_curent_line)
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_down_arrow:
	LD	IX, files_listview_cursor
	CALL	ui_widget_IX_draw
	INC	(IX+ui_listview_line_cursor_curent_line)
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

section objects_immutable

files_app:
defw	files_app_init
defw	files_app_activate
defw	files_app_deactivate
defw	files_main_window
defw	files_menu_window
defw	0

files_main_window:
defb	ui_object_type_window
defb	0, 1, 80, 28
defb	$1F, ' '
defw	files_app_handle_input
defw	ui_window_handle_vsync_noop
defw	files_listview_title_panel
defw	files_listview_title_label
defw	files_listview_scrollbar
defw	files_listview
defw	files_listview_cursor
defw	0

files_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	0

section objects_mutable

files_listing:
defw	fat32_directory_listing_IX_seek_line_BC
defw	fat32_directory_listing_IX_read_line_eof_Z
defb	79 ; buffer size
defw	files_listview+ui_listview_line_buffer
defw	fat32_rootdir
defs	1 ; lfn sequence number

files_listview_title_panel:
defb	ui_object_type_widget
defb	0, 0, 80, 1
defw	files_main_window
defw	ui_panel_IX_draw
defb	$E0, ' '

files_listview_title_label:
defb	ui_object_type_widget
defb	1, 0, 78, 1
defw	files_listview_title_panel
defw	ui_label_IX_draw
defw	files_listview_title_text

files_listview:
defb	ui_object_type_widget
defb	1, 1, 78, 27 ; left, top, width, height
defw	files_main_window ; ui_widget_parent
defw	ui_listview_IX_draw ; ui_widget_draw
defw	files_listing
defw	0 ; top line (scroll)
defs	79 ; ui_listview_line_buffer

files_listview_cursor:
defb	ui_object_type_widget
defb	-1, 0, 79, 27
defw	files_listview
defw	ui_listview_line_cursor_IX_draw
defb	$51 ; cursor color xor mask
defw	0 ; current line

files_listview_scrollbar:
defb	ui_object_type_widget
defb	78, 0, 1, 27
defw	files_listview
defw	ui_panel_IX_draw
defb	$19, $B3

section ram_initialized
files_listview_title_text:
defb	"Contents of directory "
files_listview_title_text_name:
defb	"1234567890123456", 0
