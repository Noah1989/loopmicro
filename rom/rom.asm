.org $0000
ld sp, $0000
jr start

debug equ 1

; GPU port addresses
gaddr_l      equ $B3
gaddr_h      equ $B4
gname        equ $B8
gcolor       equ $B9
gpattern     equ $BA
gpalette     equ $BB
gname_inc    equ $BC
gcolor_inc   equ $BD
gpattern_inc equ $BE
gpalette_inc equ $BF

; Aligning the code makes debugging easier.
.macro debug_align, %%1
.if debug
width := %%1
fill $76, ((width-($ % width)) % width)
.endif
.endm

; This leaves unreachable string marks all over the code.
; A stack trace can be constructed by looking at the hidden text.
.macro entrypoint, label
debug_align $10
label:
.if debug
jr label_code
.db "label"
fill " ", ((16-($ % 16)) % 16)
.endif
label_code:
.endm

.org $0066
nmi:
retn

entrypoint start
.block
call init_sync
call init_graphics
call load_pal
call load_chars
call clear_screen
call init_keyboard
ld hl, $8000
jp monitor
.endblock

entrypoint init_sync
.block
ld b, 11
ld c, $A0 - 1
ld hl, data
loop:
inc c
outi
jr nz, loop
ret
data:
.db $D9, $39, $D4, $74
.db $F6, $7E, $E4, $E2
.db $E1, $F4, $90
.endblock

entrypoint init_graphics
.block
ld a, $FD
out $B0, a
ld a, $FC
out $B1, a
ld a, $B3
out $B2, a
ret
.endblock

entrypoint load_pal
.block
xor a
out gaddr_l, a
out gaddr_h, a
ld bc, 8192
ld hl, colors16
ld de, hl
loop:
ld a, (hl)
out gpalette_inc, a
dec bc
ld a, b
cp $10
jr nc, doswap
bit 0, c
jr nz, noswap
doswap:
ex de, hl
noswap:
ld a, $0F
and c
jr nz, continue
inc de
or c
jr nz, continue
ld de, colors16
inc hl
ld a, b
cp $10
jr nz, continue
ld hl, colors16
continue:
ld a, b
or c
jr nz, loop
ret
colors16:
.db $00, $0C, $20, $3C
.db $C0, $CC, $90, $FC
.db $03, $0F, $33, $3F
.db $C3, $CF, $E3, $FF
.endblock

entrypoint load_chars
.block
xor a
out gaddr_l, a
out gaddr_h, a
ld ix, charmap
ld bc, 8192
loop:
ld a, c
and $07
jr nz, skip
ld e, (ix+0)
ld l, (ix+1)
ld d, (ix+8)
ld h, (ix+9)
inc ix
inc ix
skip:
sub a
rlc h
rla
rlc l
rla
rla
rla
rlc d
rla
rlc e
rla
out gpattern_inc, a
dec bc
ld a, c
and $1F
jr nz, skip2
ld de, 8
add ix, de
skip2:
ld a, b
or c
jr nz, loop
ret
.endblock

entrypoint clear_screen
.block
ld d, $0E
ld e, $20
xor a
out gaddr_l, a
out gaddr_h, a
ld bc, 8192
loop:
ld a, d
out gcolor, a
ld a, e
out gname_inc, a
dec bc
ld a, b
or c
jr nz, loop
ret
.endblock

.include keyboard.asm
.include monitor.asm
.include charmap.asm