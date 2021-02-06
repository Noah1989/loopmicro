public editor_listing_IX_seek_line_BC
public editor_listing_IX_read_line_eof_Z
public editor_file

extern fat32_chain_IX_get_byte_A
extern fat32_chain_IX_put_byte_A
extern stream_IX_read_block_DE_len_BC_bytewise
extern stream_IX_write_block_DE_len_BC_bytewise
extern fat32_chain_IX_skip_bytes_BC
extern fat32_chain_IX_seek_BCDE

extern stream_IX_get_byte_A
extern stream_IX_seek_BCDE

extern debug_io_print_hex_byte_A
extern debug_io_print_character_A
extern error

include "stream.inc"
include "fat32.inc"
include "listing.inc"
include "editor.inc"


defc editor_max_lines=2048
defc editor_max_line_length=80
defc editor_max_changed_lines=100

editor_listing_IX_seek_line_BC:
	LD	HL, editor_line_table
	ADD	HL, BC
	ADD	HL, BC
	LD	(IX+editor_listing_current_line_entry), L
	LD	(IX+editor_listing_current_line_entry+1), H
	XOR	A, A
	CP	A, (IX+editor_listing_file_loaded)
	CALL	Z, editor_listing_IX_load_file
	RET

editor_listing_IX_read_line_eof_Z:
	LD	L, (IX+editor_listing_current_line_entry)
	LD	H, (IX+editor_listing_current_line_entry+1)
	LD	E, (HL)
	INC	HL
	LD	D, (HL)
	INC	HL
	LD	A, E
	AND	A, D
	CP	$FF
	RET	Z ; end of file
	LD	(IX+editor_listing_current_line_entry), L
	LD	(IX+editor_listing_current_line_entry+1), H
	LD	L, (IX+listing_buffer_address)
	LD	H, (IX+listing_buffer_address+1)
	LD	B, (IX+listing_buffer_size)
	DEC	B
	PUSH	IX
	LD	IX, editor_file
	PUSH	HL
	PUSH	BC
	LD	BC, 0
	CALL	stream_IX_seek_BCDE
	POP	BC
	POP	HL
editor_listing_IX_read_line_loop:
	PUSH	HL
	PUSH	BC
	CALL	stream_IX_get_byte_A
	POP	BC
	POP	HL
	LD	(HL), A
	;call	debug_io_print_character_A
	CP	A, 10 ; \n
	JR	Z, editor_listing_IX_read_line_done
	CP	A, 9 ; \t
	JR	NZ, editor_listing_IX_read_line_tab_done
editor_listing_IX_read_line_tab_loop:
	LD	(HL), ' ' ; $FA
	LD	A, B
	DEC	A
	AND	A, 7
	JR	Z, editor_listing_IX_read_line_tab_done
	INC	HL
	DJNZ	editor_listing_IX_read_line_tab_loop
	JR	editor_listing_IX_read_line_done
editor_listing_IX_read_line_tab_done:
	INC	HL
	DJNZ	editor_listing_IX_read_line_loop
editor_listing_IX_read_line_done:
	XOR	A, A
	LD	(HL), A
	POP	IX
	INC	A ; clear Z (not end of file)
	RET

editor_listing_IX_load_file:
	PUSH	IX
	LD	IX, editor_file
	LD	A, (IX+file_size+2)
	OR	A, (IX+file_size+3)
editor_error_file_too_large:
	CALL	NZ, error
	LD	BC, 0
	LD	DE, 0
	CALL	stream_IX_seek_BCDE
	LD	HL, editor_line_table
	LD	C, (IX+file_size+0)
	LD	B, (IX+file_size+1)
editor_listing_IX_load_file_next_line:
	; record position of beginning of line
	LD	A, (IX+stream_position)
	LD	(HL), A
	INC	HL
	LD	A, (IX+stream_position+1)
	LD	(HL), A
	INC	HL
editor_listing_IX_load_find_end_of_line:
	; end of file?
	LD	A, B
	OR	A, C
	JR	Z, editor_listing_IX_load_file_done
	DEC	BC
	PUSH	HL
	PUSH	BC
	CALL	stream_IX_get_byte_A
	POP	BC
	POP	HL
	CP	A, 10 ; \n
	JR	NZ, editor_listing_IX_load_find_end_of_line
	JR	editor_listing_IX_load_file_next_line
editor_listing_IX_load_file_done:
	LD	A, $FF
	LD	(HL), A
	INC	HL
	LD	(HL), A
	XOR	A, A
	LD	(editor_changed_lines), A
	POP	IX
	INC	(IX+editor_listing_file_loaded)
	RET

section objects_mutable

editor_file:
defw	fat32_chain_IX_get_byte_A ;stream_get_byte_A
defw	fat32_chain_IX_put_byte_A ;stream_put_byte_A
defw	stream_IX_read_block_DE_len_BC_bytewise ;stream_read_block_DE_len_BC
defw	stream_IX_write_block_DE_len_BC_bytewise ;stream_write_block_DE_len_BC
defw	fat32_chain_IX_skip_bytes_BC ;stream_skip_bytes_BC
defw	0, 0	;stream_position
defw	-1, -1	;stream_size
defw	fat32_chain_IX_seek_BCDE ;stream_seek_BCDE
defw	0, 0	;chain_first_cluster
defw	0, 0	;chain_current_cluster
defw	0, 0	;chain_lba_current_sector
defb	0	;chain_sectors_remaining_in_current_cluster
defw	0, 0	;file_size

section editor_buffer
editor_line_table:
defs	editor_max_lines*2
editor_changes:
defs	editor_max_line_length*editor_max_changed_lines
editor_changed_lines:
defs	1
