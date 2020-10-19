public convert_HL_to_decimal_string_DE_ret_length_B

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
