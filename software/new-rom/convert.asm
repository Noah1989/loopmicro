public convert_A_to_hex_string_DE
public convert_A_to_binary_string_DE
public convert_HL_to_decimal_string_DE_ret_length_B

convert_A_to_hex_string_DE:
	PUSH	AF
	RRCA
	RRCA
	RRCA
	RRCA
	CALL	convert_A_to_hex_string_DE_nibble
	POP	AF
convert_A_to_hex_string_DE_nibble:
	AND	A, $0F
	ADD	A, $90
	DAA
	ADC	A, $40
	DAA
	LD	(DE), A
	INC	DE
	RET

convert_A_to_binary_string_DE:
	LD	C, A
	LD	B, 8
convert_A_to_binary_string_DE_loop:
	LD	A, '0'
	RLC	C
	ADC	A, 0
	LD	(DE), A
	INC	DE
	DJNZ	convert_A_to_binary_string_DE_loop
	RET

convert_HL_to_decimal_string_DE_ret_length_B:
	CALL	convert_HL_to_decimal_string_DE_core
	XOR	A, A
	CP	B
	JR	NZ, convert_HL_to_decimal_string_DE_terminate
	LD	A, '0'
	LD	(DE), A
	INC	DE
	INC	B
	XOR	A, A
convert_HL_to_decimal_string_DE_terminate:
	LD	(DE), A
	RET
convert_HL_to_decimal_string_DE_core:
	LD	A, 0 ; record the length
	LD	(DE), A
	LD	BC, -10000
	CALL	convert_HL_to_decimal_string_DE_digit
	LD	BC, -1000
	CALL	convert_HL_to_decimal_string_DE_digit
	LD	BC, -100
	CALL	convert_HL_to_decimal_string_DE_digit
	LD	BC, -10
	CALL	convert_HL_to_decimal_string_DE_digit
	LD	BC, -1
convert_HL_to_decimal_string_DE_digit:
	LD	A, -1
convert_HL_to_decimal_string_DE_digit_loop:
	INC	A
	ADD	HL, BC
	JR	C, convert_HL_to_decimal_string_DE_digit_loop
	SBC	HL, BC
	; detect leading zeroes
	LD	C, A ; save digit
	LD	A, (DE)
	LD	B, A ; save length
	OR	A, C ; length and digit both 0?
	RET	Z ; skip leading zeros
	; digit to ascii character
	LD	A, C
	ADD	A, '0'
	LD	(DE), A
	INC	DE
	; keep track of length
	INC	B
	LD	A, B
	LD	(DE), A
	RET

convert_scancode_E_to_ascii_char_A:
	

section constants
scancodes_0_to_9:
defb	$45, $16, $1E, $26, $25 ; 0-4
defb	$2E, $36, $3D, $3E, $46 ; 5-9
scancodes_A_to_Z:
defb	$1C, $32, $21, $23, $24 ; A-E
defb	$2B, $34, $33, $43, $3B ; F-J
defb	$42, $4B, $3A, $31, $44 ; K-O
defb	$4D, $15, $2D, $1B, $2C ; P-T
defb	$3C, $2A, $1D, $22, $35 ; U-Y
defb	$1A ; Z
scancode_map_other:
defb	$0E, '`', '~'
defb	$7B, '-', '_'
defb	$55, '=', '+'
defb	$54, '[', '{'
defb	$5B, ']', '}'
defb	$5D, '\', '|'
defb	$4C, ';', ':'
defb	$52, $27, $34 ; quotes
defb	$41, ',', '<'
defb	$49, '.', '>'
defb	$4A, '/', '?'
defb	$29, ' ', ' '
defb	0
ascii_numbers_shifted:
defb	')', '!', '@', '#', '$' ; 0-4
defb	'%', '^', '&'. '*', '(' ; 5-9
