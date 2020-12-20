defvars 0 {
	stream_get_byte_A ds.w 1
	stream_put_byte_A ds.w 1
	stream_read_block_HL_len_BC ds.w 1
	stream_write_block_HL_len_BC ds.w 1
	stream
}

defvars stream {
	stream_position  ds.b 4
	stream_size      ds.b 4
	stream_seek_BCDE ds.w 1
	stream_seekable
}
