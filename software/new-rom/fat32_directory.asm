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
	BIT	3, (IX+directory_current_entry_attributes) ; volume id?
	JR	NZ, fat32_directory_IX_next_valid_entry_eof_Z
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

fat32_directory_listing_IX_read_line_eof_Z:
	; search next entry
	PUSH	IX
	LD	E, (IX+listing_directory)
	LD	D, (IX+listing_directory+1)
	LD	IX, DE
	CALL	fat32_directory_IX_next_valid_entry_eof_Z
	LD	DE, IX	; keep reference to directory
	POP	IX
	RET	Z
	LD	HL, directory_current_entry_buffer
	ADD	HL, DE ; HL <- directory entry address
	LD	C, (IX+listing_buffer_size)
	DEC	C ; null byte at end
	LD	A, C
	CP	11 ; check buffer size
	JR	C, fat32_directory_listing_IX_read_line_go
	LD	C, 11
fat32_directory_listing_IX_read_line_go:
	LD	E, (IX+listing_buffer_address)
	LD	D, (IX+listing_buffer_address+1)
	LD	B, 0
	LDIR	; copy BC bytes from (HL) to (DE)
	LD	(HL), 0
	INC	B ; clear Z flag
	RET
