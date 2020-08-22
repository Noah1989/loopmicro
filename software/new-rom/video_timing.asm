public video_timing_init

video_timing_init:
	LD	B, video_timing_data_length
	LD	C, $A0 ; first port address
	LD	HL, video_timing_data
video_timing_init_loop:
	OUTI
	RET	Z
	INC	C
	JR	video_timing_init_loop

video_timing_data:
defb $D9, $39, $D4, $74
defb $F6, $7E, $E4, $E2
defb $E1, $F4, $90
defc video_timing_data_length = ASMPC - video_timing_data
