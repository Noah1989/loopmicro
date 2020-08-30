defc ui_object_type_window = 1
defc ui_object_type_widget = 2

; object
defvars 0 {
	ui_object_type ds.b 1
	ui_object
}

; box
defvars ui_object {
	ui_box_left ds.b 1
	ui_box_top ds.b 1
	ui_box_width ds.b 1
	ui_box_height ds.b 1
	ui_box
}

; window
defvars ui_box {
	ui_window_background_color ds.b 1
	ui_window_background_character ds.b 1
	ui_window_handle_input ds.w 1
	ui_window_widgets ; variable length
	ui_window
}

; widget
defvars ui_box {
	ui_widget_parent ds.w 1
	ui_widget_draw ds.w 1
	ui_widget
}

; panel
defvars ui_widget {
	ui_panel_background_color ds.b 1
	ui_panel_background_character ds.b 1
	ui_panel
}

; label
defvars ui_widget {
	ui_label_text ds.w 1
	ui_label
}
