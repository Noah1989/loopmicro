public files_app

extern ui_window_handle_input_propagate
extern ui_window_handle_input_do_not_propagate
extern ui_window_handle_vsync_noop
extern ui_listview_IX_draw
extern ui_panel_IX_draw
extern ui_label_IX_draw
extern ui_listview_line_cursor_IX_draw
extern ui_widget_IX_draw
extern ui_window_IX_draw
extern ui_box_IX_toggle_visibility
extern ui_box_IX_calculate_absolute_position_DE

extern sdcard_init
extern fat32_init
extern fat32_directory_listing_IX_seek_line_BC
extern fat32_directory_listing_IX_read_line_eof_Z
extern fat32_directory_listing_IX_delete_current_entry
extern fat32_working_directory
extern fat32_directory_IX_create_file_name_HL

extern listing_IX_seek_line_BC
extern listing_IX_read_line_eof_Z

extern convert_scancode_E_shift_D_to_ascii_char_A_found_NZ

extern error
extern debug_io_print_hex_byte_A
extern debug_io_print_character_A

include "ui.inc"
include "stream.inc"
include "fat32.inc"
include "listing.inc"
include "video_io.inc"

files_app_init:
	LD	A, (files_initialized)
	AND	A, A
	RET	NZ
	CALL	sdcard_init
	CALL	fat32_init
	LD	L, '/'
	LD	H, 0
	LD	(files_listview_title_text_name), HL
	LD	A, 1
	LD	(files_initialized), A
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
	JP	Z, files_app_handle_input_up_arrow
	CP	A, $72 ; down arrow
	JP	Z, files_app_handle_input_down_arrow
	CP	A, $5A ; enter
	JP	Z, files_app_handle_input_enter
	CP	A, $71 ; delete
	JP	Z, files_app_handle_input_delete
	CP	A, $31 ; N
	JP	Z, files_app_new_file
	JP	ui_window_handle_input_propagate

files_app_handle_input_up_arrow:
	LD	IX, files_listview
	LD	L, (IX+ui_listview_top_line)
	LD	H, (IX+ui_listview_top_line+1)
	LD	IX, files_listview_cursor
	PUSH	HL
	CALL	ui_widget_IX_draw
	POP	HL
	LD	E, (IX+ui_listview_line_cursor_current_line)
	LD	D, (IX+ui_listview_line_cursor_current_line+1)
	LD	A, E
	OR	A, D
	JR	Z, files_app_handle_input_up_arrow_end
	XOR	A, A ; clear carry
	SBC	HL, DE
	DEC	DE
	JR	C, files_app_handle_input_up_arrow_end
	LD	IX, files_listview
	LD	L, (IX+ui_listview_top_line)
	LD	H, (IX+ui_listview_top_line+1)
	LD	BC, -10
	ADD	HL, BC
	LD	(IX+ui_listview_top_line), L
	LD	(IX+ui_listview_top_line+1), H
	PUSH	DE
	CALL	ui_widget_IX_draw
	POP	DE
files_app_handle_input_up_arrow_end:
	LD	IX, files_listview_cursor
	LD	(IX+ui_listview_line_cursor_current_line), E
	LD	(IX+ui_listview_line_cursor_current_line+1), D
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_down_arrow:
	LD	IX, files_listview
	LD	L, (IX+ui_listview_bottom_line)
	LD	H, (IX+ui_listview_bottom_line+1)
	LD	IX, files_listview_cursor
	PUSH	HL
	CALL	ui_widget_IX_draw
	POP	HL
	LD	E, (IX+ui_listview_line_cursor_current_line)
	LD	D, (IX+ui_listview_line_cursor_current_line+1)
	XOR	A, A ; clear carry
	INC	DE
	SBC	HL, DE
	JR	NC, files_app_handle_input_down_arrow_end
	ADD	HL, DE
	LD	IX, files_listview
	LD	C, (IX+ui_listview_top_line)
	LD	B, (IX+ui_listview_top_line+1)
	XOR	A, A
	SBC	HL, BC
	LD	C, (IX+ui_box_height)
	DEC	C
	LD	B, A
	SBC	HL, BC
	JR	Z, files_app_handle_input_down_arrow_scroll_ok
	DEC	DE
	JR	files_app_handle_input_down_arrow_end
files_app_handle_input_down_arrow_scroll_ok:
	LD	L, (IX+ui_listview_top_line)
	LD	H, (IX+ui_listview_top_line+1)
	LD	BC, 10
	ADD	HL, BC
	LD	(IX+ui_listview_top_line), L
	LD	(IX+ui_listview_top_line+1), H
	PUSH	DE
	CALL	ui_widget_IX_draw
	POP	DE
	LD	L, (IX+ui_listview_bottom_line)
	LD	H, (IX+ui_listview_bottom_line+1)
	XOR	A, A
	SBC	HL, DE
	JR	NC, files_app_handle_input_down_arrow_end
	DEC	DE
files_app_handle_input_down_arrow_end:
	LD	IX, files_listview_cursor
	LD	(IX+ui_listview_line_cursor_current_line), E
	LD	(IX+ui_listview_line_cursor_current_line+1), D
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_enter:
	LD	IX, files_listview_cursor
	LD	C, (IX+ui_listview_line_cursor_current_line)
	LD	B, (IX+ui_listview_line_cursor_current_line+1)
	LD	IX, files_listing
	CALL	listing_IX_seek_line_BC
	CALL	listing_IX_read_line_eof_Z
	LD	IX, fat32_working_directory
	BIT	4, (IX+directory_current_entry_attributes) ; subdirectory?
	JR	Z, files_app_handle_input_enter_open_file
	LD	L, (IX+directory_current_entry_cluster_low)
	LD	H, (IX+directory_current_entry_cluster_low+1)
	LD	E, (IX+directory_current_entry_cluster_high)
	LD	D, (IX+directory_current_entry_cluster_high+1)
	LD	A, L ; ".." pointing to root directory has cluster number 0
	OR	A, H
	OR	A, E
	OR	A, D
	JR	NZ, files_app_handle_input_enter_cluster_ok
	LD	L, 2 ; actual cluster number of root directory
files_app_handle_input_enter_cluster_ok:
	LD	(IX+chain_first_cluster+0), L
	LD	(IX+chain_first_cluster+1), H
	LD	(IX+chain_first_cluster+2), E
	LD	(IX+chain_first_cluster+3), D
	LD	IX, files_listing
	LD	DE, files_listview_title_text_name
	LD	L, (IX+listing_buffer_address)
	LD	H, (IX+listing_buffer_address+1)
	LD	BC, 78-22
	LDIR
	XOR	A, A
	LD	(DE), A
	LD	IX, files_listview_title_label
	CALL	ui_widget_IX_draw
	LD	IX, files_listview_cursor
	CALL	ui_widget_IX_draw
	LD	IX, files_listview
	XOR	A, A
	LD	(IX+ui_listview_top_line), A
	LD	(IX+ui_listview_top_line+1), A
	CALL	ui_widget_IX_draw
	LD	IX, files_listview_cursor
	XOR	A, A
	LD	(IX+ui_listview_line_cursor_current_line), A
	LD	(IX+ui_listview_line_cursor_current_line+1), A
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate
files_app_handle_input_enter_open_file:
	LD	IX, files_main_window
	CALL	ui_box_IX_toggle_visibility ; hide
	LD	IX, files_editor_window
	CALL	ui_box_IX_toggle_visibility ; show
	CALL	ui_window_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_delete:
	LD	IX, files_listview_cursor
	CALL	ui_widget_IX_draw
	LD	C, (IX+ui_listview_line_cursor_current_line)
	LD	B, (IX+ui_listview_line_cursor_current_line+1)
	LD	IX, files_listing
	CALL	listing_IX_seek_line_BC
	CALL	listing_IX_read_line_eof_Z
	LD	IX, fat32_working_directory
	BIT	4, (IX+directory_current_entry_attributes) ; subdirectory?
	JR	NZ, files_app_handle_input_delete_done ; todo: delete directories
	LD	IX, files_listing
	CALL	fat32_directory_listing_IX_delete_current_entry
files_app_handle_input_delete_done:
	LD	IX, files_listview
	CALL	ui_widget_IX_draw
	LD	L, (IX+ui_listview_bottom_line)
	LD	H, (IX+ui_listview_bottom_line+1)
	LD	IX, files_listview_cursor
	LD	E, (IX+ui_listview_line_cursor_current_line)
	LD	D, (IX+ui_listview_line_cursor_current_line+1)
	XOR	A, A ; clears carry
	SBC	HL, DE
	JR	NC, files_app_handle_input_delete_cursor_ok
	ADD	HL, DE
	LD	(IX+ui_listview_line_cursor_current_line), L
	LD	(IX+ui_listview_line_cursor_current_line+1), H
files_app_handle_input_delete_cursor_ok:
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_new_file:
	XOR	A, A
	LD	(files_name_input_buffer), A
	LD	IX, files_listview_cursor
	CALL	ui_widget_IX_draw
	CALL	ui_box_IX_toggle_visibility ; hide
	LD	IX, files_name_input_window
	CALL	ui_box_IX_toggle_visibility ; show
	CALL	ui_window_IX_draw
	LD	HL, files_app_handle_input_name
	LD	(files_name_input_window+ui_window_handle_input), HL
	LD	HL, ui_window_handle_input_propagate
	LD	(files_main_window+ui_window_handle_input), HL
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_name_shift:
	LD	A, D
	AND	A, $01 ; keyup?
	DEC	A
	LD	(files_name_input_shift), A
	JP	ui_window_handle_input_do_not_propagate
files_app_handle_input_name:
	LD	A, E
	CP	A, $12 ; shift (left)
	JR	Z, files_app_handle_input_name_shift
	CP	A, $59 ; shift (right)
	JR	Z, files_app_handle_input_name_shift
	BIT	0, D ; ignore key release events
	JP	NZ, ui_window_handle_input_propagate
	CP	A, $66 ; backspace
	JR	Z, files_app_handle_input_name_backspace
	CP	A, $76 ; escape
	JR	Z, files_app_handle_input_name_escape
	CP	A, $5A ; enter
	JR	Z, files_app_handle_input_name_enter
	LD	A, (files_name_input_shift)
	LD	D, A
	CALL	convert_scancode_E_shift_D_to_ascii_char_A_found_NZ
	JP	Z, ui_window_handle_input_propagate
	LD	HL, filename_forbidden_chars
	LD	BC, 9
	CPIR
	JP	Z, ui_window_handle_input_do_not_propagate ; forbidden char
	LD	E, A
	XOR	A, A ; find end of string
	LD	HL, files_name_input_buffer
	LD	BC, 60
	CPIR
	JP	NZ, ui_window_handle_input_do_not_propagate ; buffer full
	LD	(HL), A
	DEC	HL
	LD	(HL), E
	JR	files_app_handle_input_name_redraw
files_app_handle_input_name_backspace:
	XOR	A, A ; find end of string
	LD	HL, files_name_input_buffer
	LD	BC, 61
	CPIR
	LD	A, 60
	CP	A, C
	JP	Z, ui_window_handle_input_do_not_propagate ; buffer empty
	DEC	HL
	DEC	HL
	LD	(HL), 0
files_app_handle_input_name_redraw:
	LD	IX, files_name_input_label
	CALL	ui_widget_IX_draw
	LD	IX, files_name_input_cursor
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate
files_app_handle_input_name_escape:
	LD	IX, files_name_input_window
	CALL	ui_box_IX_toggle_visibility ; hide
	LD	IX, files_listview_cursor
	CALL	ui_box_IX_toggle_visibility ; show
	LD	IX, files_main_window
	CALL	ui_window_IX_draw
	LD	HL, ui_window_handle_input_propagate
	LD	(files_name_input_window+ui_window_handle_input), HL
	LD	HL, files_app_handle_input
	LD	(files_main_window+ui_window_handle_input), HL
	JP	ui_window_handle_input_do_not_propagate
files_app_handle_input_name_enter:
	XOR	A, A
	LD	HL, files_name_input_buffer
	LD	BC, 61
	CPIR
	LD	A, 60
	SUB	A, C
	JP	Z, ui_window_handle_input_do_not_propagate ; empty name
	DEC	HL
	DEC	HL
	LD	A, (HL)
	CP	A, '.'
	JP	Z, ui_window_handle_input_do_not_propagate ; invalid name
	LD	IX, fat32_working_directory
	LD	HL, files_name_input_buffer
	CALL	fat32_directory_IX_create_file_name_HL
	JR	files_app_handle_input_name_escape

files_name_input_cursor_IX_draw:
	CALL	ui_box_IX_calculate_absolute_position_DE
	LD	HL, files_name_input_buffer
	LD	BC, 61
	XOR	A, A
	CPIR
	LD	A, 60
	SUB	A, C
	ADD	A, E
	OUT	(video_address_l), A
	LD	A, D
	OUT	(video_address_h), A
	LD	A, 219
	OUT	(video_table_name_increment), A
	RET

section constants
filename_forbidden_chars:
defb	$5C, '/', ':'
defb	'*', '?', $22
defb	'<', '>', '|'

section objects_immutable

files_app:
defw	files_app_init
defw	files_app_activate
defw	files_app_deactivate
defw	files_main_window
defw	files_menu_window
defw	files_name_input_window
defw	files_editor_window
defw	0

files_menu_window:
defb	ui_object_type_window
defb	0, 0, 80, 1
defb	$30, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	0

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

files_name_input_label:
defb	ui_object_type_widget
defb	1, 0, 79, 1
defw	files_name_input_window
defw	ui_label_IX_draw
defw	files_name_input_label_text

files_editor_title_panel:
defb	ui_object_type_widget
defb	0, 0, 80, 1
defw	files_editor_window
defw	ui_panel_IX_draw
defb	$E0, ' '

files_editor_title_label:
defb	ui_object_type_widget
defb	1, 0, 78, 1
defw	files_editor_title_panel
defw	ui_label_IX_draw
defw	files_editor_title_text

section objects_mutable

files_main_window:
defb	ui_object_type_window
defb	0, 1, 80, 28
defb	$1F, ' '
defw	files_app_handle_input
defw	ui_window_handle_vsync_noop
defw	files_listview_title_panel
defw	files_listview_title_label
defw	files_listview
defw	files_listview_cursor
defw	0

files_listing:
defw	fat32_directory_listing_IX_seek_line_BC
defw	fat32_directory_listing_IX_read_line_eof_Z
defb	79 ; buffer size
defw	files_listview+ui_listview_line_buffer
defw	fat32_working_directory
defs	1 ; lfn sequence number
defs	1 ; number of lfn entries

files_listview:
defb	ui_object_type_widget
defb	1, 1, 78, 27 ; left, top, width, height
defw	files_main_window ; ui_widget_parent
defw	ui_listview_IX_draw ; ui_widget_draw
defw	files_listing
defw	0 ; top line (scroll)
defw	-1 ; bottom line
defs	79 ; ui_listview_line_buffer

files_listview_cursor:
defb	ui_object_type_widget
defb	-1, 0, 80, 27
defw	files_listview
defw	ui_listview_line_cursor_IX_draw
defb	$51 ; cursor color xor mask
defw	0 ; current line

files_name_input_window:
defb	ui_object_type_window
defb	128, 28, 80, 1
defb	$4E, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	files_name_input_panel
defw	files_name_input_label
defw	files_name_input_cursor
defw	0

files_name_input_panel:
defb	ui_object_type_widget
defb	18, 0, 60, 1
defw	files_name_input_label
defw	ui_panel_IX_draw
defb	$4F, ' ';

files_name_input_cursor:
defb	ui_object_type_widget
defb	0, 0, 60, 1
defw	files_name_input_panel
defw	files_name_input_cursor_IX_draw

files_editor_window:
defb	ui_object_type_window
defb	128, 1, 80, 28
defb	$1F, ' '
defw	ui_window_handle_input_propagate
defw	ui_window_handle_vsync_noop
defw	files_editor_title_panel
defw	files_editor_title_label
;defw	files_editor_listview
;defw	files_editor_cursor
defw	0

section strings

section ram_initialized
files_listview_title_text:
defb	"Contents of directory "
files_listview_title_text_name:
defs	78-22+1;
files_name_input_label_text:
defb	"Name of new file: "
files_name_input_buffer:
defs	60+1
files_name_input_shift:
defb	0
files_initialized:
defb	0
files_editor_title_text:
defb	"Editing file "
defs	78-13+1
