\ RC2014 classic with MC6850
8 VALUES RS_ADDR $ff00 PS_ADDR $fffa HERESTART $8000
         6850_CTL $80 6850_IO $81
         SPI_DATA 4 SPI_CTL 5 SDC_DEVID 1
RS_ADDR $80 - VALUE SYSVARS
Z80A XCOMPL Z80M XCOMPH Z80C COREL
320 322 LOADR \ MC6850
312 LOAD \ SPI relay
250 258 LOADR \ SD Card
311 LOAD \ AT28
X' SDC@ ALIAS (blk@)
X' SDC! ALIAS (blk!)
BLKSUB
: INIT 6850$ BLK$ ;
XWRAP INIT