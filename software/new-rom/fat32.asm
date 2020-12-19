public fat32_init

extern sdcard_read_block_DEHL_lazy
extern sdcard_block_buffer

extern error

defvars 0 {
	mbr_boot_code   ds.b 446
	mbr_partition_1 ds.b  16
	mbr_partition_2 ds.b  16
	mbr_partition_3 ds.b  16
	mbr_partition_4 ds.b  16
	mbr_magic       ds.b  2
}

defvars 0 {
	partition_boot_flag ds.b 1
	partition_chs_begin ds.b 3
	partition_type_code ds.b 1
	partition_chs_end   ds.b 3
	partition_lba_begin ds.b 4
	partition_lba_size  ds.b 4
}

fat32_init:
	LD	DE, 0
	LD	HL, 0
	CALL	sdcard_read_block_DEHL_lazy
	; verify this is a dos mbr
	LD	HL, (sdcard_block_buffer+mbr_magic)
	LD	BC, $AA55
	AND	A, A
	SBC	HL, BC
	CALL	NZ, error
	; verify filesystem type is $0B or $0C (FAT32)
	LD	A, (sdcard_block_buffer+mbr_partition_1+partition_type_code)
	CP	A, $0B
	JR	Z, fat32_init_type_ok
	CP	A, $0C
	CALL	NZ, error
fat32_init_type_ok:
	LD	HL, (sdcard_block_buffer+mbr_partition_1+partition_lba_begin)
	LD	DE, (sdcard_block_buffer+mbr_partition_1+partition_lba_begin+2)
	CALL	sdcard_read_block_DEHL_lazy
	RET
