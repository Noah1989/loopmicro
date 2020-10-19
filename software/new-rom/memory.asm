public memory_app

extern ui_window_handle_input_propagate

include "ui.inc"

memory_app_activate:
	RET

memory_app_deactivate:
	RET

section objects_immutable

memory_app:
defw	memory_app_activate
defw	memory_app_deactivate
defw	memory_main_window
defw	memory_menu_window
defw	0

memory_main_window:
defb	ui_object_type_window
defb	0, 1, 80, 28
defb	$2F, ' '
defw	ui_window_handle_input_propagate
defw	0

memory_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	0
