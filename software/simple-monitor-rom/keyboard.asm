entrypoint init_keyboard
.block
ld hl, data
ld c, $C1
ld b, 6
otir
ret
data:
.db $04, $07
.db $03, $C1
.db $05, $E0
.endblock

entrypoint get_key
.block
in a, $C1
and $01
ret z
in a, $C0
cp $E0
jr nz, normal
call next_byte
call normal
scf
ret
normal:
cp $F0
jr nz, keydown
call next_byte
cp a
ret
keydown:
and a
ret
next_byte:
loop:
in a, $C1
and $01
jr z, loop
in a, $C0
ret
.endblock
