public app_IX_activate

extern window_list_app
extern draw_windows_HL

include "app.inc"

app_IX_activate:
	; deactivate old app
	LD	DE, (app_active)
	LD	(app_active), IX
	LD	IX, DE
	LD	A, E
	OR	A, D
	CALL	NZ, app_IX_deactivate
	; copy window list
	LD	DE, window_list_app
	LD	HL, (app_active)
	LD	BC, app_window_list
	ADD	HL, BC
app_IX_activate_copy_window_list_loop:
	LD	C, (HL)
	INC	HL
	LD	B, (HL)
	INC	HL
	EX	DE, HL
	LD	(HL), C
	INC	HL
	LD	(HL), B
	INC	HL
	EX	DE, HL
	LD	A, B
	OR	A, C
	JR	NZ, app_IX_activate_copy_window_list_loop
	; draw windows
	LD	HL, window_list_app
	CALL	draw_windows_HL
	; activate new app
	LD	IX, (app_active)
	LD	L, (IX+app_activate)
	LD	H, (IX+app_activate+1)
	JP	(HL)

app_IX_deactivate:
	LD	L, (IX+app_deactivate)
	LD	H, (IX+app_deactivate+1)
	JP	(HL)

section ram_initialized
app_active:
defw	0
