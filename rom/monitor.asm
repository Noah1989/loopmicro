entrypoint monitor
.block
ld d, h
ld a, l
and $80
ld e, a
call cursor
loop:
ex de, hl
push de
wait_key:
call dump_page
call get_key
jr z, wait_key
pop de
ex de, hl
push af
call cursor
pop af
call monitor_keys
call cursor
jr loop
.endblock

entrypoint cursor
.block
push hl
and a
sbc hl, de
ld a, l
ld b, 4
loop:
rlca
rl h
djnz loop
inc h
inc h
inc h
ld a, l
and $0F
ld l, a
add a, a
add a, l
add a, 10
ld l, a
ld b, 4
call highlight
pop hl
ret
.endblock

entrypoint highlight
.block
ld a, l
out gaddr_l, a
ld a, h
out gaddr_h, a
loop:
in a, gcolor
rrca
rrca
rrca
rrca
out gcolor_inc, a
djnz loop
ret
.endblock

entrypoint dump_page
.block
ld d, 3
push hl
loop:
ld a, d
out gaddr_h, a
call dump16
inc d
ld a, d
cp 27
jr nz, loop
pop hl
ret
.endblock

entrypoint dump16
.block
push hl
ld a, 4
out gaddr_l, a
ld a, "@"
out gname_inc, a
ld a, h
call print_byte
ld a, l
call print_byte
ld a, ":"
out gname_inc, a
ld b, 16
loop:
ld a, " "
out gname_inc, a
ld a, (hl)
call print_byte
inc hl
djnz loop
ld a, " "
out gname_inc, a
out gname_inc, a
pop hl
ld c, gname_inc
ld b, 16
otir
ret
.endblock

entrypoint print_byte
.block
push af
rrca
rrca
rrca
rrca
call print_nibble
pop af
@print_nibble:
and $0F
add a, $90
daa
adc a, $40
daa
out gname_inc, a
ret
.endblock

entrypoint monitor_keys
.block
cp $7D ; PgUp
jr nz, next1
ld bc, -128
ex de, hl
add hl, bc
ex de, hl
jp scroll_cursor
next1:
cp $7A ; PgDn
jr nz, next2
ld bc, +128
ex de, hl
add hl, bc
ex de, hl
jp scroll_cursor
next2:
cp $74 ; Right
jr nz, next3
inc hl
jp scroll_page
next3:
cp $6B ; Left
jr nz, next4
dec hl
jp scroll_page
next4:
cp $75 ; Up
jr nz, next5
ld bc, -16
add hl, bc
jp scroll_page
next5:
cp $72 ; Down
jr nz, next6
ld bc, +16
add hl, bc
jp scroll_page
next6:
call hex_keys ; 0-9, A-F
jr nz, next7
ld a, c
rld
ret
next7:
cp $5A ; Enter
jr nz, next8
push de
push hl
ld bc, return
push bc
jp (hl)
return:
pop hl
pop de
ret
next8:
cp $34 ; G
jr nz, next9
ld a, 4
out gaddr_l, a
ld a, 28
out gaddr_h, a
ld c, gname_inc
ld b, 7
ld hl, text
otir
call input_addr
ld d, h
ld a, l
and $80
ld e, a
ret
text:
.db "GO TO @"
next9:
cp $29 ; Space
jr nz, next10
inc hl
jp scroll_page
ret
next10:
; ...
ret
.endblock

entrypoint hex_keys
.block
push hl
ld hl, hex_keys_F
ld bc, 16
cpdr
pop hl
ret
.db $45, $16, $1E, $26
.db $25, $2E, $36, $3D
.db $3E, $46, $1C, $32
.db $21, $23, $24
hex_keys_F:
.db $2b
.endblock

entrypoint scroll_cursor
.block
xor a
sbc hl, de
jp p, next
ld bc, +128
add hl, bc
jr done
next:
cp h
jr z, done
ld a, l
cp $80
jr c, done
ld bc, -128
add hl, bc
done:
add hl, de
ret
.endblock

entrypoint scroll_page
.block
push hl
xor a
sbc hl, de
ex de, hl
jp p, next
ld bc, -128
add hl, bc
jr done
next:
cp d
jr z, done
ld a, e
cp $80
jr c, done
ld bc, +128
add hl, bc
done:
ex de, hl
pop hl
ret
.endblock

entrypoint input_addr
.block
call input_byte
ld h, a
call input_byte
ld l, a
ret
.endblock

entrypoint input_byte
.block
call input_nibble
ld a, c
rlca
rlca
rlca
rlca
push af
call input_nibble
pop af
or c
ret
.endblock

entrypoint input_nibble
.block
ld a, "_"
out gname, a
loop:
call get_key
jr z, loop
call hex_keys
jr nz, loop
ld a, c
jp print_nibble
.endblock