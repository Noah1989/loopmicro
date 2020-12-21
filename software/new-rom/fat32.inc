defvars 0 {
	mbr_boot_code   ds.b 446
	mbr_partition_1 ds.b  16
	mbr_partition_2 ds.b  16
	mbr_partition_3 ds.b  16
	mbr_partition_4 ds.b  16
	mbr_magic       ds.b   2
	mbr
}

defvars 0 {
	partition_boot_flag ds.b 1
	partition_chs_begin ds.b 3
	partition_type_code ds.b 1
	partition_chs_end   ds.b 3
	partition_lba_begin ds.b 4
	partition_lba_size  ds.b 4
	partition
}

defvars stream_seekable {
	chain_first_cluster       ds.b 4
	chain_current_cluster     ds.b 4
	chain_lba_current_sector  ds.b 4
	chain_sectors_remaining_in_current_cluster ds.b 1
	chain
}
