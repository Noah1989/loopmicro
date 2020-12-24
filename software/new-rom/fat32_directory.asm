public fat32_directory_listing_IX_seek_line_BC
public fat32_directory_listing_IX_read_line_eof_Z

extern stream_IX_read_block_DE_len_BC
extern stream_IX_seek_BCDE

extern error

include "stream.inc"
include "fat32.inc"
include "listing.inc"

defvars chain {
	directory_current_entry_buffer
	directory_current_entry_short_filename ds.b 8
	directory_current_entry_short_extension ds.b 3
	directory_current_entry_attributes ds.b 1
	directory_current_entry_reserved ds.b 1
	directory_current_entry_create_time ds.b 3
	directory_current_entry_create_date ds.b 2
	directory_current_entry_access_date ds.b 2
	directory_current_entry_cluster_high ds.b 2
	directory_current_entry_modify_time ds.b 2
	directory_current_entry_modify_date ds.b 2
	directory_current_entry_cluster_low ds.b 2
	directory_current_entry_file_size ds.b 4
	directory
}

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
	DEC	BC
	PUSH	BC
	CALL	fat32_directory_IX_next_valid_entry_eof_Z
	POP	BC
	JR	NZ, fat32_directory_listing_IX_seek_line_BC_loop
fat32_directory_listing_IX_seek_line_BC_done:
	POP	IX
	RET

fat32_directory_listing_IX_read_line_handle_lfn_entry_HL:
	LD	A, (HL)
	AND	A, $1F ; sequence number
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
	LD	(DE), A
	DEC	C ; remaining buffer
	RET	Z ;
	INC	HL
	INC	HL ; TODO: handle non-ASCII characters correctly
	INC	DE
	DJNZ	fat32_directory_listing_IX_read_line_handle_lfn_copy_loop
	INC	B ; clear Z flag
	RET

fat32_directory_listing_IX_read_line_eof_Z:
	; search next entry
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
	JR	fat32_directory_listing_IX_read_line_eof_Z
fat32_directory_listing_IX_read_line_handle_regular_entry:
	RET	; TODO: check if lfn is valid
	; short file name
	LD	C, (IX+listing_buffer_size)
	DEC	C ; null byte at end
	LD	A, C
	CP	A, 11 ; check buffer size
	JR	C, fat32_directory_listing_IX_read_line_copy_short_name
	LD	C, 11
fat32_directory_listing_IX_read_line_copy_short_name:
	LD	E, (IX+listing_buffer_address)
	LD	D, (IX+listing_buffer_address+1)
	LD	B, 0
	LDIR	; copy BC bytes from (HL) to (DE)
	LD	(HL), 0
	INC	B ; clear Z flag
	RET
