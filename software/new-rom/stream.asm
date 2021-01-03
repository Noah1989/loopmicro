public stream_IX_seek_BCDE
public stream_IX_get_byte_A
public stream_IX_put_byte_A
public stream_IX_read_block_DE_len_BC
public stream_IX_read_block_DE_len_BC_bytewise
public stream_IX_write_block_DE_len_BC
public stream_IX_skip_bytes_BC

include "stream.inc"

stream_IX_get_byte_A:
	LD	L, (IX+stream_get_byte_A)
	LD	H, (IX+stream_get_byte_A+1)
	JP	(HL)

stream_IX_put_byte_A:
	LD	L, (IX+stream_put_byte_A)
	LD	H, (IX+stream_put_byte_A+1)
	JP	(HL)

stream_IX_read_block_DE_len_BC:
	LD	L, (IX+stream_read_block_DE_len_BC)
	LD	H, (IX+stream_read_block_DE_len_BC+1)
	JP	(HL)

stream_IX_write_block_DE_len_BC:
	LD	L, (IX+stream_write_block_DE_len_BC)
	LD	H, (IX+stream_write_block_DE_len_BC+1)
	JP	(HL)

stream_IX_skip_bytes_BC:
	LD	L, (IX+stream_skip_bytes_BC)
	LD	H, (IX+stream_skip_bytes_BC+1)
	JP	(HL)

stream_IX_seek_BCDE:
	LD	L, (IX+stream_seek_BCDE)
	LD	H, (IX+stream_seek_BCDE+1)
	JP	(HL)

stream_IX_read_block_DE_len_BC_bytewise:
	PUSH	BC
	PUSH	DE
	CALL	stream_IX_get_byte_A
	POP	DE
	POP	BC
	LD	(DE), A
	INC	DE
	DEC	BC
	LD	A, B
	OR	A, C
	JR	NZ, stream_IX_read_block_DE_len_BC_bytewise
	RET
