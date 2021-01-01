public fat32_directory_listing_IX_seek_line_BC
public fat32_directory_listing_IX_read_line_eof_Z
public fat32_directory_IX_next_valid_entry_eof_Z

extern stream_IX_read_block_DE_len_BC
extern stream_IX_seek_BCDE

extern error

include "stream.inc"
include "fat32.inc"
include "listing.inc"

fat32_directory_IX_read_entry:
	LD	BC, 32
	LD	DE, IX
	LD	HL, directory_current_entry_buffer
	ADD	HL, DE
	EX	DE, HL
	CALL	stream_IX_read_block_DE_len_BC
	RET

fat32_directory_IX_next_valid_entry_eof_Z:
	LD	A, (IX+directory_current_entry_buffer)
	AND	A, A ; end of directory?
	RET	Z
	CALL	fat32_directory_IX_read_entry
	LD	A, (IX+directory_current_entry_buffer)
	AND	A, A ; end of directory?
	RET	Z
	CP	A, $E5 ; deleted entry?
	JR	Z, fat32_directory_IX_next_valid_entry_eof_Z
	LD	A, (IX+directory_current_entry_attributes)
	CP	A, $0f ; long file name?
	JR	Z, fat32_directory_IX_next_valid_entry_done
	BIT	3, (IX+directory_current_entry_attributes) ; volume id?
	JR	NZ, fat32_directory_IX_next_valid_entry_eof_Z
fat32_directory_IX_next_valid_entry_done:
	XOR	A, A
	INC	A ; clear Z flag
	RET

defvars listing {
	listing_directory ds.w 1
	listing_lfn_sequence ds.b 1
}

fat32_directory_listing_IX_seek_line_BC:
	PUSH	IX
	LD	E, (IX+listing_directory)
	LD	D, (IX+listing_directory+1)
	LD	IX, DE
	PUSH	BC
	LD	BC, 0
	LD	DE, 0
	CALL	stream_IX_seek_BCDE
	LD	(IX+directory_current_entry_buffer), $FF
	POP	BC
fat32_directory_listing_IX_seek_line_BC_loop:
	LD	A, B
	OR	A, C
	JR	Z, fat32_directory_listing_IX_seek_line_BC_done
	PUSH	BC
	CALL	fat32_directory_IX_next_valid_entry_eof_Z
	POP	BC
	JR	Z, fat32_directory_listing_IX_seek_line_BC_done
	LD	A, (IX+directory_current_entry_attributes)
	CP	A, $0f ; long file name?
	JR	Z, fat32_directory_listing_IX_seek_line_BC_loop
	DEC	BC
	JR	fat32_directory_listing_IX_seek_line_BC_loop
fat32_directory_listing_IX_seek_line_BC_done:
	POP	IX
	RET

fat32_directory_listing_IX_read_line_eof_Z:
	LD	(IX+listing_lfn_sequence), $FF
fat32_directory_listing_IX_read_line_eof_Z_loop:
	PUSH	IX
	LD	E, (IX+listing_directory)
	LD	D, (IX+listing_directory+1)
	LD	IX, DE
	CALL	fat32_directory_IX_next_valid_entry_eof_Z
	LD	A, (IX+directory_current_entry_attributes)
	LD	DE, IX	; keep reference to directory
	POP	IX
	RET	Z
	LD	HL, directory_current_entry_buffer
	ADD	HL, DE ; HL <- directory entry address
	CP	A, $0F ; long file name
	JR	NZ, fat32_directory_listing_IX_read_line_handle_regular_entry
	CALL	fat32_directory_listing_IX_read_line_handle_lfn_entry_HL
	JR	fat32_directory_listing_IX_read_line_eof_Z_loop
fat32_directory_listing_IX_read_line_handle_regular_entry:
	PUSH	AF ; save attributes
	LD	A, (IX+listing_lfn_sequence)
	CP	A, 1 ; validate lfn sequence
	JR	Z, fat32_directory_listing_IX_read_line_ok
	; if lfn invalid, use short file name
	LD	C, (IX+listing_buffer_size)
	LD	E, (IX+listing_buffer_address)
	LD	D, (IX+listing_buffer_address+1)
	LD	B, 8
fat32_directory_listing_IX_read_line_copy_short_filename_loop:
	LD	A, (HL)
	INC	HL
	CP	A, ' '
	JR	Z, fat32_directory_listing_IX_read_line_copy_short_filename_skip_space
	LD	(DE), A
	DEC	C
	JR	Z, fat32_directory_listing_IX_read_line_copy_short_filename_write_terminator
	INC	DE
fat32_directory_listing_IX_read_line_copy_short_filename_skip_space:
	DJNZ	fat32_directory_listing_IX_read_line_copy_short_filename_loop
	; add the dot
	LD	A, '.'
	LD	(DE), A
	DEC	C
	JR	Z, fat32_directory_listing_IX_read_line_copy_short_filename_write_terminator
	INC	DE
	; short extension
	LD	B, 3
fat32_directory_listing_IX_read_line_copy_short_extension_loop:
	LD	A, (HL)
	INC	HL
	CP	A, ' '
	JR	Z, fat32_directory_listing_IX_read_line_copy_short_extension_skip_space
	LD	(DE), A
	DEC	C
	JR	Z, fat32_directory_listing_IX_read_line_copy_short_filename_write_terminator
	INC	DE
fat32_directory_listing_IX_read_line_copy_short_extension_skip_space:
	DJNZ	fat32_directory_listing_IX_read_line_copy_short_extension_loop
	DEC	DE
	LD	A, (DE)
	CP	'.' ; remove trailing dot
	JR	Z, fat32_directory_listing_IX_read_line_copy_short_filename_write_terminator
	INC	DE
fat32_directory_listing_IX_read_line_copy_short_filename_write_terminator:
	LD	A, 0
	LD	(DE), A
fat32_directory_listing_IX_read_line_ok:
	POP	AF ; attributes
	BIT	4, A ; subdirectory? -> add / in front
	JR	Z, fat32_directory_listing_IX_read_line_done
	LD	L, (IX+listing_buffer_address)
	LD	H, (IX+listing_buffer_address+1)
	LD	B, 0
	LD	C, (IX+listing_buffer_size)
	DEC	C
	JR	Z, fat32_directory_listing_IX_read_line_done
	DEC	C
	JR	Z, fat32_directory_listing_IX_read_line_done
	ADD	HL, BC
	LD	DE, HL
	DEC	HL
	LDDR
	LD	A, '/'
	LD	(DE), A
fat32_directory_listing_IX_read_line_done:
	INC	A ; clear Z flag
	RET

fat32_directory_listing_IX_read_line_handle_lfn_entry_HL:
	LD	A, (HL)
	BIT	6, A
	JR	NZ, fat32_directory_listing_IX_read_line_handle_lfn_sequence_new
	DEC	(IX+listing_lfn_sequence)
	CP	A, (IX+listing_lfn_sequence)
	JR	Z, fat32_directory_listing_IX_read_line_handle_lfn_sequence_valid
	LD	(IX+listing_lfn_sequence), $FF
	RET	; invalid sequence number
fat32_directory_listing_IX_read_line_handle_lfn_sequence_new:
	AND	A, $1F ; sequence number
	LD	(IX+listing_lfn_sequence), A
fat32_directory_listing_IX_read_line_handle_lfn_sequence_valid:
	LD	B, A
	LD	A, -13
fat32_directory_listing_IX_read_line_handle_lfn_mult_loop:
	ADD	A, 13
	DJNZ	fat32_directory_listing_IX_read_line_handle_lfn_mult_loop
	LD	E, (IX+listing_buffer_address)
	LD	D, (IX+listing_buffer_address+1)
	LD	C, A ; B is 0 here already
	EX	DE, HL
	ADD	HL, BC
	EX	DE, HL
	LD	A, (IX+listing_buffer_size)
	SUB	A, C
	RET	C
	RET	Z
	PUSH	HL
	INC	HL
	LD	C, A ; remaining buffer
	LD	B, 5
	CALL	fat32_directory_listing_IX_read_line_handle_lfn_copy_loop
	JR	Z, fat32_directory_listing_IX_read_line_handle_lfn_end
	INC	HL
	INC	HL
	INC	HL
	LD	B, 6
	CALL	fat32_directory_listing_IX_read_line_handle_lfn_copy_loop
	JR	Z, fat32_directory_listing_IX_read_line_handle_lfn_end
	INC	HL
	INC	HL
	LD	B, 2
	CALL	fat32_directory_listing_IX_read_line_handle_lfn_copy_loop
fat32_directory_listing_IX_read_line_handle_lfn_end:
	POP	HL
	JR	Z, fat32_directory_listing_IX_read_line_handle_lfn_end_write_terminator
	BIT	6, (HL)
	RET	Z ; do not write terminator unless this is the last enrty
fat32_directory_listing_IX_read_line_handle_lfn_end_write_terminator:
	LD	A, 0
	LD	(DE), A
	RET

fat32_directory_listing_IX_read_line_handle_lfn_copy_loop:
	LD	A, (HL)
	CP	A, $A0
	JR	C, fat32_directory_listing_IX_read_line_handle_lfn_copy_skip
	PUSH	HL
	PUSH	BC
	SUB	A, $A0
	LD	B, 0
	LD	C, A
	LD	HL, ucs2_map_dirty
	ADD	HL, BC
	LD	A, (HL)
	POP	BC
	POP	HL
fat32_directory_listing_IX_read_line_handle_lfn_copy_skip:
	LD	(DE), A
	DEC	C ; remaining buffer
	RET	Z ;
	INC	HL
	INC	HL ; TODO: handle non-ASCII characters correctly
	INC	DE
	DJNZ	fat32_directory_listing_IX_read_line_handle_lfn_copy_loop
	INC	B ; clear Z flag
	RET

ucs2_map_dirty: ; start at code point $00A0
defb	255, 173, 155, 156, '?', 157, '?', 21, '?', '?', 166, 174, 170, '?'
defb	'?', '?', 248, 241, 253, '?', '?', 230, 20, 250, '?', '?', 167, 175
defb	172, 171, '?', 168, '?', '?', '?', '?', 142, 143, 146, 128, '?', 144
defb	'?', '?', '?', '?', '?', '?', '?', 165, '?', '?', '?', '?', 153, '?'
defb	'?', '?', '?', '?', 154, '?', '?', 225, 133, 160, 131, '?', 132, 134
defb	145, 135, 138, 130, 136, 137, 141, 161, 140, 139, '?', 164, 149, 162
defb	147, '?', 148, 246, '?', 151, 163, 150, 129, '?', '?', 152
