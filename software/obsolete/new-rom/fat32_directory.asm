public fat32_directory_listing_IX_seek_line_BC
public fat32_directory_listing_IX_read_line_eof_Z
public fat32_directory_listing_IX_delete_current_entry
public fat32_directory_IX_create_file_name_HL

extern fat32_fat_begin_lba
extern fat32_fat_number_of_sectors
extern stream_IX_read_block_DE_len_BC
extern stream_IX_seek_BCDE
extern stream_IX_put_byte_A
extern stream_IX_skip_bytes_BC
extern stream_IX_write_block_DE_len_BC
extern sdcard_read_block_DEHL_lazy
extern sdcard_block_buffer
extern sdcard_current_block_address
extern sdcard_write_block

extern convert_A_to_hex_string_DE

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

fat32_directory_IX_create_file_name_HL:
	PUSH	HL ; save for later
	XOR	A, A
	LD	BC, 256
	CPIR
	LD	A, 255
	SUB	A, C ; file name length
fat32_directory_IX_create_file_error_empty_name:
	CALL	Z, error
	LD	C, 1 ; number of consecutive free entries required
fat32_directory_IX_create_file_calc_num_entries_loop:
	INC	C
	SUB	A, 13 ; max characters per long file name entry
	JR	NC, fat32_directory_IX_create_file_calc_num_entries_loop
	PUSH	BC
	LD	BC, 0
	LD	DE, 0
	CALL	stream_IX_seek_BCDE
	POP	BC
fat32_directory_IX_create_file_find_gap_reset:
	LD	B, 0 ; number of free entries found
	LD	E, (IX+stream_position)
	LD	D, (IX+stream_position+1)
	LD	H, (IX+stream_position+2)
	LD	L, (IX+stream_position+3)
fat32_directory_IX_create_file_find_gap_loop:
	PUSH	BC
	PUSH	DE
	PUSH	HL
	CALL	fat32_directory_IX_read_entry
	POP	HL
	POP	DE
	POP	BC
	LD	A, (IX+directory_current_entry_buffer)
	AND	A, A ; empty entry?
	JR	Z, fat32_directory_IX_create_file_find_gap_ok
	CP	A, $E5 ; deleted entry?
	JR	NZ, fat32_directory_IX_create_file_find_gap_reset
fat32_directory_IX_create_file_find_gap_ok:
	INC	B
	LD	A, B
	CP	A, C
	JR	NZ, fat32_directory_IX_create_file_find_gap_loop
	; go to beginning of gap
	PUSH	BC ; B = C = number of entries
	LD	BC, HL ; go to saved stream position
	CALL	stream_IX_seek_BCDE
	; first construct (but do not write) the regular entry
	LD	DE, IX
	LD	HL, directory_current_entry_buffer
	ADD	HL, DE
	EX	DE, HL ; generate bogus but unique short file name
	LD	A, (IX+stream_position+3)
	CALL	convert_A_to_hex_string_DE
	LD	A, (IX+stream_position+2)
	CALL	convert_A_to_hex_string_DE
	LD	A, (IX+stream_position+1)
	CALL	convert_A_to_hex_string_DE
	LD	A, (IX+stream_position+0)
	CALL	convert_A_to_hex_string_DE
	LD	A, $20 ; space / attributes
	LD	B, 4
fat32_directory_IX_create_file_build_regular_entry_extension_and_attributes_loop:
	LD	(DE), A
	INC	DE
	DJNZ	fat32_directory_IX_create_file_build_regular_entry_extension_and_attributes_loop
	XOR	A, A ; stuff the rest with zeroes
	LD	B, 20
fat32_directory_IX_create_file_build_regular_entry_fill_zeroes_loop:
	LD	(DE), A
	INC	DE
	DJNZ	fat32_directory_IX_create_file_build_regular_entry_fill_zeroes_loop
	; calculate the checksum for lfn entries
	LD	HL, -32
	ADD	HL, DE
	XOR	A, A
	LD	B, 11
fat32_directory_IX_create_file_calculate_lfn_checksum_loop:
	RRCA
	ADD	A, (HL)
	INC	HL
	DJNZ	fat32_directory_IX_create_file_calculate_lfn_checksum_loop
	LD	(fat32_directory_lfn_checksum), A
	; write long file name entries
	POP	BC
	DEC	B ; number of long file name entries
	LD	A, -13
fat32_directory_IX_create_file_find_first_lfn_character_loop:
	ADD	A, 13
	DJNZ	fat32_directory_IX_create_file_find_first_lfn_character_loop
	LD	D, B ; 0
	LD	E, A
	POP	HL ; pointer to file name (saved at the very beginning)
	ADD	HL, DE
	LD	B, C
	DEC	B ; number of long file name entries
	LD	A, $40 ; marker for first long file name entry
fat32_directory_IX_create_file_write_next_long_file_name:
	PUSH	BC
	PUSH	HL
	OR	A, B
	CALL	stream_IX_put_byte_A
	POP	HL
	LD	B, 5
	CALL	fat32_directory_IX_create_file_write_long_file_name_loop
	PUSH	HL
	LD	A, $0F ; attributes
	CALL	stream_IX_put_byte_A
	XOR	A, A
	CALL	stream_IX_put_byte_A
	LD	A, (fat32_directory_lfn_checksum)
	CALL	stream_IX_put_byte_A
	POP	HL
	LD	B, 6
	CALL	fat32_directory_IX_create_file_write_long_file_name_loop
	PUSH	HL
	XOR	A, A
	CALL	stream_IX_put_byte_A
	XOR	A, A
	CALL	stream_IX_put_byte_A
	POP	HL
	LD	B, 2
	CALL	fat32_directory_IX_create_file_write_long_file_name_loop
	LD	BC, -26
	ADD	HL, BC
	XOR	A, A ; used at beginning of loop
	POP	BC
	DJNZ	fat32_directory_IX_create_file_write_next_long_file_name
	; now write the regular entry
	LD	DE, IX
	LD	HL, directory_current_entry_buffer
	ADD	HL, DE
	EX	DE, HL
	LD	BC, 32
	CALL	stream_IX_write_block_DE_len_BC
	CALL	sdcard_write_block
	RET

fat32_directory_IX_create_file_write_long_file_name_loop:
	LD	A, (HL)
	INC	HL
	PUSH	BC
	PUSH	HL
	CALL	stream_IX_put_byte_A
	XOR	A, A
	CALL	stream_IX_put_byte_A
	POP	HL
	POP	BC
	DJNZ	fat32_directory_IX_create_file_write_long_file_name_loop
	RET

defvars listing {
	listing_directory ds.w 1
	listing_lfn_sequence ds.b 1
	listing_lfn_count ds.b 1
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
	LD	(IX+listing_lfn_count), 0
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
	LD	(IX+listing_lfn_count), 0
	LD	(IX+listing_lfn_sequence), $FF
	RET	; invalid sequence number
fat32_directory_listing_IX_read_line_handle_lfn_sequence_new:
	AND	A, $1F ; sequence number
	LD	(IX+listing_lfn_count), A
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

fat32_directory_listing_IX_delete_current_entry:
	; step 1: mark directory entry incl. long file name as deleted
	LD	A, (IX+listing_lfn_count)
	INC	A
	PUSH	IX
	PUSH	AF
	LD	E, (IX+listing_directory)
	LD	D, (IX+listing_directory+1)
	LD	IX, DE
	LD	L, (IX+stream_position+0)
	LD	H, (IX+stream_position+1)
	LD	E, (IX+stream_position+2)
	LD	D, (IX+stream_position+3)
fat32_directory_listing_IX_delete_current_entry_calculate_position_loop:
	LD	BC, -32
	ADD	HL, BC
	LD	BC, -1
	EX	DE, HL
	ADC	HL, BC
	EX	DE, HL
	DEC	A
	JR	NZ, fat32_directory_listing_IX_delete_current_entry_calculate_position_loop
	LD	BC, DE
	EX	DE, HL
	CALL	stream_IX_seek_BCDE
	POP	BC	; AF from above
fat32_directory_listing_IX_delete_current_entry_mark_deleted_loop:
	LD	A, $E5
	PUSH	BC
	CALL	stream_IX_put_byte_A
	LD	BC, 31
	CALL	stream_IX_skip_bytes_BC
	POP	BC
	DJNZ	fat32_directory_listing_IX_delete_current_entry_mark_deleted_loop
	; step 2: mark clusters as free
	LD	L, (IX+directory_current_entry_cluster_low)
	LD	H, (IX+directory_current_entry_cluster_low+1)
	LD	E, (IX+directory_current_entry_cluster_high)
	LD	D, (IX+directory_current_entry_cluster_high+1)
fat32_directory_listing_IX_delete_current_entry_free_clusters_loop:
	LD	A, L ; check for empty file (has cluster #0)
	OR	A, H
	OR	A, E
	OR	A, D
	JR	Z, fat32_directory_listing_IX_delete_current_entry_done
	PUSH	DE
	PUSH	HL
	LD	A, L	; divide by 128 (entries per FAT sector)
	LD	L, H
	LD	H, E
	LD	E, D
	LD	D, 0	; /256
	SLA	A
	RL	L
	RL	H
	RL	E
	RL	D	; *2
	LD	BC, (fat32_fat_begin_lba)
	ADD	HL, BC
	EX	DE, HL
	LD	BC, (fat32_fat_begin_lba+2)
	ADC	HL, BC
	EX	DE, HL
	CALL	sdcard_read_block_DEHL_lazy ; read from FAT
	POP	HL
	POP	DE
	LD	A, L
	AND	A, $7F
	LD	L, A
	LD	H, 0 ; HL <- # of entry relative to sector
	ADD	HL, HL
	ADD	HL, HL ; * 4 (bytes per entry)
	LD	BC, sdcard_block_buffer
	ADD	HL, BC ; HL <- FAT entry address in buffer
	XOR	A, A
	LD	C, (HL)
	LD	(HL), A
	INC	HL
	LD	B, (HL)
	LD	(HL), A
	INC	HL
	LD	E, (HL)
	LD	(HL), A
	INC	HL
	LD	D, (HL) ; DEBC <- FAT entry (next cluster # or $FFFFFFFF)
	LD	(HL), A ; cluster maked free again
	LD	A, 1
	PUSH	BC
	PUSH	DE ; save FAT entry
	CALL	sdcard_write_block ; write changes to both FATs
	LD	DE, (sdcard_current_block_address)
	LD	BC, (sdcard_current_block_address+2)
	LD	HL, (fat32_fat_number_of_sectors)
	ADD	HL, DE
	LD	(sdcard_current_block_address), HL
	LD	HL, (fat32_fat_number_of_sectors+2)
	ADC	HL, BC
	LD	(sdcard_current_block_address+2), HL
	PUSH	BC
	PUSH	DE
	CALL	sdcard_write_block
	POP	DE
	POP	BC
	LD	(sdcard_current_block_address), DE
	LD	(sdcard_current_block_address+2), BC
	POP	DE
	POP	HL ; DEHL <- fat entry
	LD	A, L ; check for end of chain
	AND	A, H
	AND	A, E
	AND	A, D
	CP	A, $FF
	JR	NZ, fat32_directory_listing_IX_delete_current_entry_free_clusters_loop
fat32_directory_listing_IX_delete_current_entry_done:
	POP	IX
	RET

section constants

ucs2_map_dirty: ; start at code point $00A0
defb	255, 173, 155, 156, '?', 157, '?', 21, '?', '?', 166, 174, 170, '?'
defb	'?', '?', 248, 241, 253, '?', '?', 230, 20, 250, '?', '?', 167, 175
defb	172, 171, '?', 168, '?', '?', '?', '?', 142, 143, 146, 128, '?', 144
defb	'?', '?', '?', '?', '?', '?', '?', 165, '?', '?', '?', '?', 153, '?'
defb	'?', '?', '?', '?', 154, '?', '?', 225, 133, 160, 131, '?', 132, 134
defb	145, 135, 138, 130, 136, 137, 141, 161, 140, 139, '?', 164, 149, 162
defb	147, '?', 148, 246, '?', 151, 163, 150, 129, '?', '?', 152

section ram_uninitialized
fat32_directory_lfn_checksum:
defs	1
