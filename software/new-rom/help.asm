public help_window

extern ui_window_handle_input_propagate

include "ui.inc"

section objects_immutable
help_window:
defb	ui_object_type_window
defb	0, 0, 80, 29
defb	$17, ' '
defw	ui_window_handle_input_propagate
defw	0
