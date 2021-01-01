public memory_app

extern ui_window_handle_input_propagate
extern ui_window_handle_input_do_not_propagate
extern ui_window_handle_vsync_noop
extern ui_label_IX_draw
extern ui_panel_IX_draw
extern ui_box_IX_calculate_absolute_position_DE
extern ui_widget_IX_draw
extern ui_hotkey_highlight_IX_draw

extern convert_A_to_hex_string_DE
extern convert_A_to_binary_string_DE
extern convert_HL_to_decimal_string_DE_ret_length_B

extern debug_io_print_hex_byte_A
extern debug_io_print_character_A

include "video_io.inc"
include "ui.inc"

memory_app_init:
	RET

memory_app_activate:
	RET

memory_app_deactivate:
	RET

memory_handle_input:
	BIT	0, D ; ignore key release events
	JP	NZ, ui_window_handle_input_propagate
	LD	A, E
	CP	A, $6B ; left arrow
	JP	Z, memory_handle_input_cursor_left
	CP	A, $74 ; right arrow
	JP	Z, memory_handle_input_cursor_right
	CP	A, $75 ; up arrow
	JP	Z, memory_handle_input_cursor_line_up
	CP	A, $72 ; down arrow
	JP	Z, memory_handle_input_cursor_line_down
	CP	A, $7D ; page up
	JP	Z, memory_handle_input_cursor_page_up
	CP	A, $7A ; page down
	JP	Z, memory_handle_input_cursor_page_down
	CP	A, $2D ; R
	JP	Z, memory_handle_input_run_code

	LD	HL, memory_handle_input_hex_keycodes
	LD	BC, 16
	CPIR
	JP	Z, memory_handle_input_hex

	CALL	debug_io_print_hex_byte_A
	LD	A, 10
	CALL	debug_io_print_character_A
	JP	ui_window_handle_input_propagate

memory_handle_input_hex:
	LD	A, $F
	SUB	A, C
	LD	HL, (memory_cursor_address)
	RLD
	JP	ui_window_handle_input_do_not_propagate
memory_handle_input_hex_keycodes:
defb	$45; 0
defb	$16; 1
defb	$1E; 2
defb	$26; 3
defb	$25; 4
defb	$2E; 5
defb	$36; 6
defb	$3D; 7
defb	$3E; 8
defb	$46; 9
defb	$1C; A
defb	$32; B
defb	$21; C
defb	$23; D
defb	$24; E
defb	$2B; F

memory_handle_vsync:
	LD	IX, memory_viewer
	CALL	ui_widget_IX_draw
	LD	IX, memory_info_label
	CALL	ui_widget_IX_draw
	RET

memory_handle_input_run_code:
	CALL	memory_cursor_hide
	LD	HL, memory_handle_input_run_code_return
	PUSH	HL
	LD	HL, (memory_cursor_address)
	JP	(HL)
memory_handle_input_run_code_return:
	CALL	memory_cursor_show
	JP	ui_window_handle_input_do_not_propagate

memory_handle_input_cursor_left:
	CALL	memory_cursor_hide
	LD	HL, (memory_cursor_address)
	DEC	HL
	LD	(memory_cursor_address), HL
	CALL	memory_check_cursor_underflow
	CALL	memory_cursor_show
	LD	IX, memory_info_label
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

memory_handle_input_cursor_right:
	CALL	memory_cursor_hide
	LD	HL, (memory_cursor_address)
	INC	HL
	LD	(memory_cursor_address), HL
	CALL	memory_check_cursor_overflow
	CALL	memory_cursor_show
	LD	IX, memory_info_label
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

memory_handle_input_cursor_page_up:
	CALL	memory_cursor_hide
	LD	BC, -256
	JR	memory_handle_input_cursor_up
memory_handle_input_cursor_line_up:
	CALL	memory_cursor_hide
	LD	BC, -16
memory_handle_input_cursor_up:
	LD	HL, (memory_cursor_address)
	ADD	HL, BC
	LD	(memory_cursor_address), HL
	CALL	memory_check_cursor_underflow
	CALL	memory_cursor_show
	LD	IX, memory_info_label
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

memory_handle_input_cursor_page_down:
	CALL	memory_cursor_hide
	LD	BC, 256
	JR	memory_handle_input_cursor_down
memory_handle_input_cursor_line_down:
	CALL	memory_cursor_hide
	LD	BC, 16
memory_handle_input_cursor_down:
	LD	HL, (memory_cursor_address)
	ADD	HL, BC
	LD	(memory_cursor_address), HL
	CALL	memory_check_cursor_overflow
	CALL	memory_cursor_show
	LD	IX, memory_info_label
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

memory_check_cursor_underflow:
	LD	HL, (memory_cursor_address)
	LD	DE, (memory_viewer_top_address)
	XOR	A, A ; clear carry
	SBC	HL, DE
	RET	P
	EX	DE, HL
	LD	BC, -$100
	ADD	HL, BC
	LD	(memory_viewer_top_address), HL
	LD	IX, memory_viewer
	JP	ui_widget_IX_draw

memory_check_cursor_overflow:
	LD	HL, (memory_viewer_top_address)
	LD	BC, 24*16-1
	ADD	HL, BC
	LD	DE, (memory_cursor_address)
	XOR	A, A ; clear carry
	SBC	HL, DE
	RET	P
	LD	HL, (memory_viewer_top_address)
	LD	BC, $100
	ADD	HL, BC
	LD	(memory_viewer_top_address), HL
	LD	IX, memory_viewer
	JP	ui_widget_IX_draw

memory_cursor_hide:
	LD	IX, memory_cursor
	XOR	A, A
	LD	(memory_cursor_visible), A
	JP	ui_widget_IX_draw

memory_cursor_show:
	LD	IX, memory_cursor
	LD	A, 1
	LD	(memory_cursor_visible), A
	JP	ui_widget_IX_draw

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
	; ascii view
	LD	BC, -16
	ADD	HL, BC
	LD	B, 16
	LD	C, video_table_name_increment
	OTIR
	INC	D
	POP	BC
	DJNZ	memory_viewer_IX_draw_loop
	RET

memory_cursor_IX_draw:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	HL, (memory_cursor_address)
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
	LD	B, A
	LD	C, 0
	ADD	HL, BC
	EX	DE, HL
	LD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	LD	HL, memory_cursor_visible
	LD	A, $4F
	LD	B, 7
	BIT	0, (HL)
	JR	NZ, memory_cursor_IX_draw_address_loop
	LD	A, (memory_address_panel + ui_panel_background_color)
memory_cursor_IX_draw_address_loop:
	OUT	(video_table_attribute_increment), A
	DJNZ	memory_cursor_IX_draw_address_loop
	LD	A, (memory_cursor_address)
	AND	A, $0F
	LD	B, A
	ADD	A, A
	ADD	A, B
	ADD	A, 8
	ADD	A, E
	OUT	(video_address_l), A
	LD	A, $4F
	LD	B, 4
	BIT	0, (HL)
	JR	NZ, memory_cursor_IX_draw_hex_loop
	LD	A, (memory_hexadecimal_panel + ui_panel_background_color)
memory_cursor_IX_draw_hex_loop:
	OUT	(video_table_attribute_increment), A
	DJNZ	memory_cursor_IX_draw_hex_loop
	LD	A, (memory_cursor_address)
	AND	A, $0F
	ADD	A, 59
	ADD	A, E
	OUT	(video_address_l), A
	LD	A, $4F
	BIT	0, (HL)
	JR	NZ, memory_cursor_IX_draw_ascii_out
	LD	A, (memory_ascii_panel + ui_panel_background_color)
memory_cursor_IX_draw_ascii_out:
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

memory_info_label_draw:
	CALL	memory_info_text_update
	JP	ui_label_IX_draw

memory_info_text_update:
	; address
	LD	DE, memory_info_text_address
	LD	HL, (memory_cursor_address)
	LD	A, H
	CALL	convert_A_to_hex_string_DE
	LD	A, L
	CALL	convert_A_to_hex_string_DE
	; hex
	LD	DE, memory_info_text_value_hex
	LD	A, (HL)
	CALL	convert_A_to_hex_string_DE
	; binary
	LD	DE, memory_info_text_value_bin
	LD	A, (HL)
	CALL	convert_A_to_binary_string_DE
	; decimal
	LD	HL, (memory_cursor_address)
	LD	L, (HL)
	LD	H, 0
	LD	DE, memory_info_text_value_dec
	CALL	convert_HL_to_decimal_string_DE_ret_length_B
	LD	HL, (memory_cursor_address)
	LD	L, (HL)
	BIT	7, L
	JR	Z, memory_info_text_update_end
	; negative decimal
	LD	A, L
	NEG	A
	LD	HL, memory_info_text_sep_neg
	LD	BC, memory_info_text_sep_neg_len
	LDIR
	LD	L, A
	LD	H, B; 0 here
	CALL	convert_HL_to_decimal_string_DE_ret_length_B
memory_info_text_update_end:
	XOR	A, A
	LD	(DE), A
	RET

section objects_immutable

memory_app:
defw	memory_app_init
defw	memory_app_activate
defw	memory_app_deactivate
defw	memory_main_window
defw	memory_menu_window
defw	0

memory_main_window:
defb	ui_object_type_window
defb	0, 1, 80, 28
defb	$1F, ' '
defw	memory_handle_input
defw	memory_handle_vsync
defw	memory_address_panel
defw	memory_hexadecimal_panel
defw	memory_ascii_panel
defw	memory_viewer
defw	memory_cursor
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
defb	2, 26, memory_info_text_len, 1
defw	memory_main_window
defw	memory_info_label_draw
defw	memory_info_text
memory_viewer:
defb	ui_object_type_widget
defb	2, 1, 76, 24
defw	memory_main_window
defw	memory_viewer_IX_draw

memory_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$3F, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	memory_menu_hotkey_highlight
defw	memory_menu_label
defw	0
memory_menu_label:
defb	ui_object_type_widget
defb	1, 0, 78, 1
defw	memory_menu_window
defw	ui_label_IX_draw
defw	memory_menu_label_text
memory_menu_hotkey_highlight:
defb	ui_object_type_widget
defb	0, 0, 78, 1
defw	memory_menu_label
defw	ui_hotkey_highlight_IX_draw
defw	$3E

section objects_mutable
memory_cursor:
defb	ui_object_type_widget
defb	0, 0, 76, 24
defw	memory_viewer
defw	memory_cursor_IX_draw

section strings
memory_menu_label_text:
defb	27, 24, 25, 26, "-Move Cursor  PageUp/Down-Skip 256 Bytes  0~9/A~F-Change Byte  R-Run Code", 0
memory_info_text_sep_neg:
defb	" or -"
memory_info_text_sep_neg_end:
defc memory_info_text_sep_neg_len = memory_info_text_sep_neg_end - memory_info_text_sep_neg

section ram_initialized
memory_viewer_top_address:
defw	$8000
memory_cursor_address:
defw	$8000
memory_cursor_visible:
defb	1
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
;	"128 or -128"
defb	"           "
memory_info_text_end:
defb	0
defc memory_info_text_len = memory_info_text_end - memory_info_text
