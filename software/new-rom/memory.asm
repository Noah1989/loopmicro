public memory_app

extern ui_window_handle_input_propagate
extern ui_label_IX_draw
extern ui_panel_IX_draw
extern ui_box_IX_calculate_absolute_position_DE

extern convert_HL_to_decimal_string_DE_ret_length_B

include "video_io.inc"
include "ui.inc"

memory_app_activate:
	LD	HL, (memory_viewer_cursor_address)
	LD	L, (HL)
	LD	H, 0
	LD	DE, memory_info_text_value_dec
	CALL	convert_HL_to_decimal_string_DE_ret_length_B
	LD	HL, (memory_viewer_cursor_address)
	LD	L, (HL)
	BIT	7, L
	RET	Z
	LD	A, L
	NEG	A
	LD	HL, memory_info_text_sep_neg
	LD	BC, 4
	LDIR
	LD	L, A
	LD	H, B; 0 here
	CALL	convert_HL_to_decimal_string_DE_ret_length_B
	LD	HL, memory_info_text_end
	XOR	A, A
	SBC	HL, DE
	RET	Z
	LD	B, L
	LD	A, ' '
loop:
	LD	(DE), A
	INC	DE
	DJNZ	loop
	RET

memory_app_deactivate:
	RET

memory_viewer_IX_draw:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	HL, (memory_viewer_top_address)
	INC	E
	LD	B, 24
memory_viewer_IX_draw_loop:
	PUSH	BC
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	LD	A, '$'
	OUT	(video_table_name_increment), A
	LD	A, H
	CALL	memory_viewer_print_hex_byte_A
	LD	A, L
	CALL	memory_viewer_print_hex_byte_A
	LD	A, ' '
	OUT	(video_table_name_increment), A
	OUT	(video_table_name_increment), A
	OUT	(video_table_name_increment), A
	LD	B, 16
memory_viewer_IX_draw_hex_loop:
	LD	A, (HL)
	INC	HL
	CALL	memory_viewer_print_hex_byte_A
	LD	A, ' '
	OUT	(video_table_name_increment), A
	DJNZ	memory_viewer_IX_draw_hex_loop
	OUT	(video_table_name_increment), A
	OUT	(video_table_name_increment), A
	LD	BC, -16
	ADD	HL, BC
	LD	B, 16
	LD	C, video_table_name_increment
	OTIR
	INC	D
	POP	BC
	DJNZ	memory_viewer_IX_draw_loop
	; cursor
	DEC	E
	LD	HL, (memory_viewer_cursor_address)
	LD	BC, (memory_viewer_top_address)
	AND	A, A
	SBC	HL, BC
	LD	A, L
	SRL	H
	RRA
	SRL	H
	RRA
	SRL	H
	RRA
	SRL	H
	RRA
	EX	DE, HL
	LD	BC, -24*$100
	ADD	HL, BC
	LD	B, A
	LD	C, 0
	ADD	HL, BC
	LD	A, L
	OUT	(video_address_l), A
	LD	A, H
	OUT	(video_address_h), A
	LD	B, 7
	LD	A, $4F
memory_viewer_IX_draw_cursor_address_loop:
	OUT	(video_table_attribute_increment), A
	DJNZ	memory_viewer_IX_draw_cursor_address_loop
	LD	A, (memory_viewer_cursor_address)
	AND	A, $0F
	LD	B, A
	ADD	A, A
	ADD	A, B
	ADD	A, 8
	ADD	A, L
	OUT	(video_address_l), A
	LD	B, 4
	LD	A, $4F
memory_viewer_IX_draw_cursor_hex_loop:
	OUT	(video_table_attribute_increment), A
	DJNZ	memory_viewer_IX_draw_cursor_hex_loop
	LD	A, (memory_viewer_cursor_address)
	AND	A, $0F
	ADD	A, 59
	ADD	A, L
	OUT	(video_address_l), A
	LD	A, $4F
	OUT	(video_table_attribute_increment), A
	RET

memory_viewer_print_hex_byte_A:
	PUSH	AF
	RRCA
	RRCA
	RRCA
	RRCA
	CALL	memory_viewer_print_hex_nibble_A
	POP	AF
memory_viewer_print_hex_nibble_A:
	AND	A, $0F
	ADD	A, $90
	DAA
	ADC	A, $40
	DAA
	OUT	(video_table_name_increment), A
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
defb	$1F, ' '
defw	ui_window_handle_input_propagate
defw	memory_address_panel
defw	memory_hexadecimal_panel
defw	memory_ascii_panel
defw	memory_viewer
defw	memory_info_label
defw	0
memory_address_panel:
defb	ui_object_type_widget
defb	2, 1, 7, 24
defw	memory_main_window
defw	ui_panel_IX_draw
defb	$03, ' '
memory_hexadecimal_panel:
defb	ui_object_type_widget
defb	10, 1, 49, 24
defw	memory_main_window
defw	ui_panel_IX_draw
defb	$0E, ' '
memory_ascii_panel:
defb	ui_object_type_widget
defb	60, 1, 18, 24
defw	memory_main_window
defw	ui_panel_IX_draw
defb	$07, ' '
memory_info_label:
defb	ui_object_type_widget
defb	3, 26, memory_info_text_len, 1
defw	memory_main_window
defw	ui_label_IX_draw
defw	memory_info_text
memory_viewer:
defb	ui_object_type_widget
defb	2, 1, 5, 24
defw	memory_main_window
defw	memory_viewer_IX_draw

memory_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	0

section strings
memory_info_text_sep_neg:
defb	" / -"

section ram_initialized
memory_viewer_top_address:
defw	$0000
memory_viewer_cursor_address:
defw	$0007
memory_info_text:
defb	"Address: $"
memory_info_text_address:
;	"1234"
defb	"    "
defb	"   Hexadecimal: $"
memory_info_text_value_hex:
defb	"  "
defb	"   Binary: %"
memory_info_text_value_bin:
;	"12345678"
defb	"        "
defb	"   Decimal: "
memory_info_text_value_dec:
;	"128 / -128"
defb	"          "
memory_info_text_end:
defb	0
defc memory_info_text_len = memory_info_text_end - memory_info_text
