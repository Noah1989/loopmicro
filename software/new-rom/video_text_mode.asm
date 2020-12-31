public video_text_mode_init

extern font_terminus

include "video_io.inc"

video_text_mode_init:
	LD	A, -3
	OUT	(video_scroll_x), A
	LD	A, -4
	OUT	(video_scroll_y), A
	LD	A, %10110011 ; tile row repeat, negative scroll x/y
	OUT	(video_settings), A
video_text_mode_init_load_palettes:
	XOR	A, A
	OUT	(video_address_l), A
	OUT	(video_address_h), A
	LD	BC, 2 * 256 * 16 ; two sets of 256 palettes of 16 colors
	LD	HL, video_text_mode_colors
	LD	DE, HL
video_text_mode_init_load_palettes_loop:
	LD	A, (HL)
	OUT	(video_table_palette_increment), A
	DEC	BC
	LD	A, B
	CP	A, $10
	JR	NC, video_text_mode_init_load_palettes_do_swap
	BIT	0, C
	JR	NZ, video_text_mode_init_load_palettes_no_swap
video_text_mode_init_load_palettes_do_swap:
	EX	DE, HL
video_text_mode_init_load_palettes_no_swap:
	LD	A, $0F
	AND	A, C
	JR	NZ, video_text_mode_init_load_palettes_continue
	INC	DE
	OR	A, C
	JR	NZ, video_text_mode_init_load_palettes_continue
	LD	DE, video_text_mode_colors
	INC	HL
	LD	A, B
	CP	A, $10
	JR	NZ, video_text_mode_init_load_palettes_continue
	LD	HL, video_text_mode_colors
video_text_mode_init_load_palettes_continue:
	LD	A, B
	OR	A, C
	JR	NZ, video_text_mode_init_load_palettes_loop
video_text_mode_load_characters:
	XOR	A, A
	OUT	(video_address_l), A
	OUT	(video_address_h), A
	LD	IX, font_terminus
	LD	BC, 256 * 32 ; 256 patterns of 32 bytes
video_text_mode_load_characters_loop:
	LD	A, C
	AND	A, $07
	JR	NZ, video_text_mode_load_characters_skip
	LD	E, (IX+0)
	LD	L, (IX+1)
	LD	D, (IX+8)
	LD	H, (IX+9)
	INC	IX
	INC	IX
video_text_mode_load_characters_skip:
	SUB	A, A
	RLC	H
	RLA
	RLC	L
	RLA
	RLA
	RLA
	RLC	D
	RLA
	RLC	E
	RLA
	OUT	(video_table_pattern_increment), A
	DEC	BC
	LD	A, C
	AND	A, $1F
	JR	NZ, video_text_mode_load_characters_skip2
	LD	DE, 8
	ADD	IX, DE
video_text_mode_load_characters_skip2:
	LD	A, B
	OR	A, C
	JR	NZ, video_text_mode_load_characters_loop
video_text_mode_clear_screen:
	LD	BC, 128 * 64 ; number of characters
video_text_mode_clear_screen_loop:
	LD	A, ' '
	OUT	(video_table_name), A
	LD	A, $07
	OUT	(video_table_attribute_increment), A
	DEC	BC
	LD	A, B
	OR	A, C
	JR	NZ, video_text_mode_clear_screen_loop
	RET

section constants
video_text_mode_colors:
defb	$00, $0C, $20, $3C
defb	$C0, $CC, $E0, $FC
defb	$03, $0F, $33, $3F
defb	$C3, $CF, $E3, $FF
