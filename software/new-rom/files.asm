public files_app

extern ui_window_handle_input_propagate
extern ui_window_handle_vsync_noop

include "ui.inc"

files_app_activate:
	RET

files_app_deactivate:
	RET

section objects_immutable

files_app:
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
defw	0

files_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	0
