public listing_IX_seek_line_BC
public listing_IX_read_line_eof_Z

extern error

include "listing.inc"

listing_IX_seek_line_BC:
	LD	L, (IX+listing_seek_line_BC)
	LD	H, (IX+listing_seek_line_BC+1)
	JP	(HL)

listing_IX_read_line_eof_Z:
	LD	L, (IX+listing_read_line_eof_Z)
	LD	H, (IX+listing_read_line_eof_Z+1)
	JP	(HL)
