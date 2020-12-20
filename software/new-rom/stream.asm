public stream_IX_seek_BCDE

include "stream.inc"

stream_IX_seek_BCDE:
	LD	L, (IX+stream_seek_BCDE)
	LD	H, (IX+stream_seek_BCDE+1)
	JP	(HL)
