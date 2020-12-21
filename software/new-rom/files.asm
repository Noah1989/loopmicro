public files_app

extern ui_window_handle_input_propagate
extern ui_window_handle_vsync_noop
extern ui_listview_IX_draw

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
	RET

files_app_activate:
	RET

files_app_deactivate:
	RET

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
defb	$4F, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	files_listview
defw	0

files_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	0

section objects_mutable

files_listview:
defb	ui_object_type_widget
defb	1, 0, 38, 28 ; left, top, width, height
defw	files_main_window ; ui_widget_parent
defw	ui_listview_IX_draw ; ui_widget_draw
defw	files_listing
defs	38 	; ui_listview_line_buffer

files_listing:
defw	fat32_directory_listing_IX_seek_line_BC
defw	fat32_directory_listing_IX_read_line_eof_Z
defb	38
defw	files_listview+ui_listview_line_buffer
defw	fat32_rootdir
