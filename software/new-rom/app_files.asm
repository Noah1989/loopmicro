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
extern fat32_directory_listing_IX_delete_current_entry
extern fat32_working_directory

extern listing_IX_seek_line_BC
extern listing_IX_read_line_eof_Z

extern error

include "ui.inc"
include "stream.inc"
include "fat32.inc"
include "listing.inc"

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
	JP	Z, files_app_handle_input_up_arrow
	CP	A, $72 ; down arrow
	JP	Z, files_app_handle_input_down_arrow
	CP	A, $5A ; enter
	JP	Z, files_app_handle_input_enter
	CP	A, $71 ; delete
	JP	Z, files_app_handle_input_delete
	JP	ui_window_handle_input_propagate

files_app_handle_input_up_arrow:
	LD	IX, files_listview
	LD	L, (IX+ui_listview_top_line)
	LD	H, (IX+ui_listview_top_line+1)
	LD	IX, files_listview_cursor
	PUSH	HL
	CALL	ui_widget_IX_draw
	POP	HL
	LD	E, (IX+ui_listview_line_cursor_curent_line)
	LD	D, (IX+ui_listview_line_cursor_curent_line+1)
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
	LD	(IX+ui_listview_line_cursor_curent_line), E
	LD	(IX+ui_listview_line_cursor_curent_line+1), D
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
	LD	E, (IX+ui_listview_line_cursor_curent_line)
	LD	D, (IX+ui_listview_line_cursor_curent_line+1)
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
	LD	(IX+ui_listview_line_cursor_curent_line), E
	LD	(IX+ui_listview_line_cursor_curent_line+1), D
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_enter:
	LD	IX, files_listview_cursor
	LD	C, (IX+ui_listview_line_cursor_curent_line)
	LD	B, (IX+ui_listview_line_cursor_curent_line+1)
	LD	IX, files_listing
	CALL	listing_IX_seek_line_BC
	CALL	listing_IX_read_line_eof_Z
	LD	IX, fat32_working_directory
	BIT	4, (IX+directory_current_entry_attributes) ; subdirectory?
	JP	Z, ui_window_handle_input_do_not_propagate
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
	LD	(IX+ui_listview_line_cursor_curent_line), A
	LD	(IX+ui_listview_line_cursor_curent_line+1), A
	CALL	ui_widget_IX_draw
	JP	ui_window_handle_input_do_not_propagate

files_app_handle_input_delete:
	LD	IX, files_listview_cursor
	CALL	ui_widget_IX_draw
	LD	C, (IX+ui_listview_line_cursor_curent_line)
	LD	B, (IX+ui_listview_line_cursor_curent_line+1)
	LD	IX, files_listing
	CALL	listing_IX_seek_line_BC
	CALL	listing_IX_read_line_eof_Z
	LD	IX, fat32_working_directory
	BIT	4, (IX+directory_current_entry_attributes) ; subdirectory?
	JR	NZ, files_app_handle_input_delete_done ; todo: delete directories
	LD	IX, files_listing
	CALL	fat32_directory_listing_IX_delete_current_entry
	LD	IX, files_listview
	CALL	ui_widget_IX_draw
files_app_handle_input_delete_done:
	LD	IX, files_listview_cursor
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
defw	fat32_working_directory
defs	1 ; lfn sequence number
defs	1 ; number of lfn entries

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
defw	-1 ; bottom line
defs	79 ; ui_listview_line_buffer

files_listview_cursor:
defb	ui_object_type_widget
defb	-1, 0, 80, 27
defw	files_listview
defw	ui_listview_line_cursor_IX_draw
defb	$51 ; cursor color xor mask
defw	0 ; current line

section ram_initialized
files_listview_title_text:
defb	"Contents of directory "
files_listview_title_text_name:
defs	78-22+1;
