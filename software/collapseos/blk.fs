( ----- 000 )
MASTER INDEX

002 Common assembler words    005 Z80 assembler
020 8086 assembler            030 AVR assembler
050 6809 assembler            60-99 unused
100 Block editor              110 Visual Editor
120-149 unused                150 Remote Shell
160 AVR SPI programmer        165 Sega ROM signer
170-199 unused                200 Cross compilation
210 Core words                240 Grid subsystem
245 PS/2 keyboard subsystem   250 SD Card subsystem
260 Fonts
280 Z80 boot code             310 Z80 drivers
400 8086 boot code            420 8086 drivers
450 6809 boot code            460 6809 drivers
500 loopmicro drivers
( ----- 002 )
( Common assembler words )
CREATE ORG 0 ,
CREATE BIN( 0 ,
: PC HERE ORG @ - BIN( @ + ;
: <<3 3 LSHIFT ;    : <<4 4 LSHIFT ;
VARIABLE L1 VARIABLE L2 VARIABLE L3 VARIABLE L4
CREATE BIGEND? 0 C,
: |T BIGEND? C@ IF |M ELSE |L THEN ;
: T! ( n a -- ) SWAP |T ROT C!+ C! ;
: T, ( n -- ) |T C, C, ;
: T@ C@+ SWAP C@ BIGEND? C@ IF SWAP THEN 8 LSHIFT OR ;
CREATE lblnext 0 ,
: lblnext@ lblnext @ ?DUP NOT IF ABORT" no lblnext!" THEN ;
: LIVETGT 0 BIN+ DUP BIN( ! ORG ! 0xf BIN+ @ lblnext ! ;
: CODE (entry) 0 ( native ) C, ;
( ----- 005 )
( Z80 Assembler )
-3 LOAD+ ( common words )
: A 7 ; : B 0 ; : C 1 ; : D 2 ;
: E 3 ; : H 4 ; : L 5 ; : (HL) 6 ;
: BC 0 ; : DE 1 ; : HL 2 ; : AF 3 ; : SP AF ;
: CNZ 0 ; : CZ 1 ; : CNC 2 ; : CC 3 ;
: CPO 4 ; : CPE 5 ; : CP 6 ; : CM 7 ;
1 13 LOADR+
( ----- 006 )
( As a general rule, IX and IY are equivalent to spitting an
  extra 0xdd / 0xfd and then spit the equivalent of HL )
: IX 0xdd C, HL ; : IY 0xfd C, HL ;
: IX+ 0xff AND 0xdd C, (HL) ; : IX- 0 -^ IX+ ;
: IY+ 0xff AND 0xfd C, (HL) ; : IY- 0 -^ IY+ ;
: OPXY CREATE , DOES> @ ( xyoff opref ) EXECUTE C, ;
( ----- 007 )
: OP1 CREATE C, DOES> C@ C, ;
0xf3 OP1 DI,                   0xfb OP1 EI,
0xeb OP1 EXDEHL,               0xd9 OP1 EXX,
0x08 OP1 EXAFAF',              0xe3 OP1 EX(SP)HL,
0x76 OP1 HALT,                 0xe9 OP1 JP(HL),
0x12 OP1 LD(DE)A,              0x1a OP1 LDA(DE),
0x02 OP1 LD(BC)A,              0x0a OP1 LDA(BC),
0x00 OP1 NOP,                  0xc9 OP1 RET,
0x17 OP1 RLA,                  0x07 OP1 RLCA,
0x1f OP1 RRA,                  0x0f OP1 RRCA,
0x37 OP1 SCF,
( ----- 008 )
( Relative jumps are a bit special. They're supposed to take
  an argument, but they don't take it so they can work with
  the label system. Therefore, relative jumps are an OP1 but
  when you use them, you're expected to write the offset
  afterwards yourself. )

0x18 OP1 JR,                   0x10 OP1 DJNZ,
0x38 OP1 JRC,                  0x30 OP1 JRNC,
0x28 OP1 JRZ,                  0x20 OP1 JRNZ,
( ----- 009 )
: OP1r CREATE C, DOES> C@ ( r op ) SWAP <<3 OR C, ;
0x04 OP1r INCr,                0x05 OP1r DECr,
' INCr, OPXY INC(IXY+),        ' DECr, OPXY DEC(IXY+),
( also works for c )
0xc0 OP1r RETc,
( ----- 010 )
: OP1r0 CREATE C, DOES> C@ ( r op ) OR C, ;
0x80 OP1r0 ADDr,               0x88 OP1r0 ADCr,
0xa0 OP1r0 ANDr,               0xb8 OP1r0 CPr,
0xb0 OP1r0 ORr,                0x90 OP1r0 SUBr,
0x98 OP1r0 SBCr,               0xa8 OP1r0 XORr,
' CPr, OPXY CP(IXY+),
( ----- 011 )
: OP1d CREATE C, DOES> C@ ( d op ) SWAP <<4 OR C, ;
0xc5 OP1d PUSH,                0xc1 OP1d POP,
0x03 OP1d INCd,                0x0b OP1d DECd,
0x09 OP1d ADDHLd,
: ADDIXd, IX DROP ADDHLd, ;  : ADDIXIX, HL ADDIXd, ;
: ADDIYd, IY DROP ADDHLd, ;  : ADDIYIY, HL ADDIYd, ;

: LDrr, ( rd rr ) SWAP <<3 OR 0x40 OR C, ;
' LDrr, OPXY LDIXYr,
: LDrIXY, ( rd ixy+- HL ) ROT SWAP LDIXYr, ;
: LDri, ( r i ) SWAP <<3 0x06 OR C, C, ;
: LDdi, ( d n ) SWAP <<4 0x01 OR C, T, ;
: LDd(i), ( d i ) 0xed C, SWAP <<4 0x4b OR C, T, ;
: LD(i)d, ( i d ) 0xed C, <<4 0x43 OR C, T, ;
( ----- 012 )
: OPED CREATE C, DOES> 0xed C, C@ C, ;
0xa1 OPED CPI,       0xb1 OPED CPIR,     0xa9 OPED CPD,
0xb9 OPED CPDR,      0x46 OPED IM0,      0x56 OPED IM1,
0x5e OPED IM2,       0xa0 OPED LDI,      0xb0 OPED LDIR,
0xa8 OPED LDD,       0xb8 OPED LDDR,     0x44 OPED NEG,
0x4d OPED RETI,      0x45 OPED RETN,

: OP2i CREATE C, DOES> C@ ( i op ) C, C, ;
0xd3 OP2i OUTiA,     0xdb OP2i INAi,     0xc6 OP2i ADDi,
0xe6 OP2i ANDi,      0xf6 OP2i ORi,      0xd6 OP2i SUBi,
0xee OP2i XORi,      0xfe OP2i CPi,

: OP2br CREATE C, DOES>
    0xcb C, C@ ( b r op ) ROT <<3 OR OR C, ;
0xc0 OP2br SET,      0x80 OP2br RES,     0x40 OP2br BIT,
( ----- 013 )
( bitwise rotation ops have a similar sig )
: OProt CREATE C, DOES> 0xcb C, C@ ( r op ) OR C, ;
0x10 OProt RL,       0x00 OProt RLC,     0x18 OProt RR,
0x08 OProt RRC,      0x20 OProt SLA,     0x38 OProt SRL,

( cell contains both bytes. MSB is spit as-is, LSB is ORed
  with r )
: OP2r CREATE , DOES> @ |M ( r lsb msb ) C, SWAP <<3 OR C, ;
0xed41 OP2r OUT(C)r, 0xed40 OP2r INr(C),

: OP2d CREATE C, DOES> 0xed C, C@ ( d op ) SWAP <<4 OR C, ;
0x4a OP2d ADCHLd,    0x42 OP2d SBCHLd,
( ----- 014 )
: OP3i CREATE C, DOES> C@ ( i op ) C, T, ;
0xcd OP3i CALL,                0xc3 OP3i JP,
0x22 OP3i LD(i)HL,             0x2a OP3i LDHL(i),
0x32 OP3i LD(i)A,              0x3a OP3i LDA(i),

: RST, 0xc7 OR C, ;
: JP(IX), IX DROP JP(HL), ;
: JP(IY), IY DROP JP(HL), ;
( ----- 015 )
: JPc, SWAP <<3 0xc2 OR C, T, ;
: CALLc, SWAP <<3 0xc4 OR C, T, ;
: BCALL, BIN( @ + CALL, ;
: BJP, BIN( @ + JP, ;
: BJPc, BIN( @ + JPc, ;
: ;CODE lblnext@ JP, ;
( ----- 016 )
( Place BEGIN, where you want to jump back and AGAIN after
  a relative jump operator. Just like BSET and BWR. )
: BEGIN, PC ;
: BSET BEGIN, SWAP ! ;
( same as BSET, but we need to write a placeholder )
: FJR, BEGIN, 0 C, ;
: IFZ, JRNZ, FJR, ;
: IFNZ, JRZ, FJR, ;
: IFC, JRNC, FJR, ;
: IFNC, JRC, FJR, ;
: THEN,
    DUP PC ( l l pc ) -^ 1- ( l off )
    ( warning: l is a PC offset, not a mem addr! )
    SWAP ORG @ + BIN( @ - ( off addr ) C! ;
: ELSE, JR, FJR, SWAP THEN, ;
( ----- 017 )
: FWR BSET 0 C, ;
: FSET @ THEN, ;
: AGAIN, PC - 1- _bchk C, ;
: BWR @ AGAIN, ;
( ----- 018 )
( Macros )
( clear carry + SBC )
: SUBHLd, A ORr, SBCHLd, ;
: PUSH0, BC 0 LDdi, BC PUSH, ;
: PUSH1, BC 1 LDdi, BC PUSH, ;
: PUSHZ, BC 0 LDdi, IFZ, BC INCd, THEN, BC PUSH, ;
: PUSHA, B 0 LDri, C A LDrr, BC PUSH, ;
: HLZ, A H LDrr, L ORr, ;
: DEZ, A D LDrr, E ORr, ;
: LDDE(HL), E (HL) LDrr, HL INCd, D (HL) LDrr, ;
: LDBC(HL), C (HL) LDrr, HL INCd, B (HL) LDrr, ;
: LDHL(HL), A (HL) LDrr, HL INCd, H (HL) LDrr, L A LDrr, ;
: OUTHL, DUP A H LDrr, OUTiA, A L LDrr, OUTiA, ;
: OUTDE, DUP A D LDrr, OUTiA, A E LDrr, OUTiA, ;
( ----- 020 )
( 8086 assembler. See doc/asm.txt )
-18 LOAD+ ( common words )
: AL 0 ; : CL 1 ; : DL 2 ; : BL 3 ;
: AH 4 ; : CH 5 ; : DH 6 ; : BH 7 ;
: AX 0 ; : CX 1 ; : DX 2 ; : BX 3 ;
: SP 4 ; : BP 5 ; : SI 6 ; : DI 7 ;
: ES 0 ; : CS 1 ; : SS 2 ; : DS 3 ;
: [BX+SI] 0 ; : [BX+DI] 1 ; : [BP+SI] 2 ; : [BP+DI] 3 ;
: [SI] 4 ; : [DI] 5 ; : [BP] 6 ; : [BX] 7 ;
1 9 LOADR+
( ----- 021 )
: OP1 CREATE C, DOES> C@ C, ;
0xc3 OP1 RET,        0xfa OP1 CLI,       0xfb OP1 STI,
0xf4 OP1 HLT,        0xfc OP1 CLD,       0xfd OP1 STD,
0x90 OP1 NOP,        0x98 OP1 CBW,
0xf3 OP1 REPZ,       0xf2 OP1 REPNZ,     0xac OP1 LODSB,
0xad OP1 LODSW,      0xa6 OP1 CMPSB,     0xa7 OP1 CMPSW,
0xa4 OP1 MOVSB,      0xa5 OP1 MOVSW,     0xae OP1 SCASB,
0xaf OP1 SCASW,      0xaa OP1 STOSB,     0xab OP1 STOSW,
( no argument, jumps with relative addrs are special )
0xeb OP1 JMPs,       0xe9 OP1 JMPn,      0x74 OP1 JZ,
0x75 OP1 JNZ,        0x72 OP1 JC,        0x73 OP1 JNC,
0xe8 OP1 CALL,

: OP1r CREATE C, DOES> C@ + C, ;
0x40 OP1r INCx,      0x48 OP1r DECx,
0x58 OP1r POPx,      0x50 OP1r PUSHx,
( ----- 022 )
: OPr0 ( reg op ) CREATE C, C, DOES>
    C@+ C, C@ <<3 OR 0xc0 OR C, ;
0 0xd0 OPr0 ROLr1,   0 0xd1 OPr0 ROLx1,  4 0xf6 OPr0 MULr,
1 0xd0 OPr0 RORr1,   1 0xd1 OPr0 RORx1,  4 0xf7 OPr0 MULx,
4 0xd0 OPr0 SHLr1,   4 0xd1 OPr0 SHLx1,  6 0xf6 OPr0 DIVr,
5 0xd0 OPr0 SHRr1,   5 0xd1 OPr0 SHRx1,  6 0xf7 OPr0 DIVx,
0 0xd2 OPr0 ROLrCL,  0 0xd3 OPr0 ROLxCL, 1 0xfe OPr0 DECr,
1 0xd2 OPr0 RORrCL,  1 0xd3 OPr0 RORxCL, 0 0xfe OPr0 INCr,
4 0xd2 OPr0 SHLrCL,  4 0xd3 OPr0 SHLxCL,
5 0xd2 OPr0 SHRrCL,  5 0xd3 OPr0 SHRxCL,
( ----- 023 )
: OPrr CREATE C, DOES> C@ C, <<3 OR 0xc0 OR C, ;
0x31 OPrr XORxx,     0x30 OPrr XORrr,
0x88 OPrr MOVrr,     0x89 OPrr MOVxx,    0x28 OPrr SUBrr,
0x29 OPrr SUBxx,     0x08 OPrr ORrr,     0x09 OPrr ORxx,
0x38 OPrr CMPrr,     0x39 OPrr CMPxx,    0x00 OPrr ADDrr,
0x01 OPrr ADDxx,     0x20 OPrr ANDrr,    0x21 OPrr ANDxx,
( ----- 024 )
: OPmodrm ( opbase modrmbase ) CREATE C, C, DOES>
    @ |M ( disp? modrm opoff modrmbase opbase ) ROT + C,
    ( disp? modrm modrmbase ) + DUP C, ( disp? modrm )
    0xc0 AND DUP IF ( has disp ) 0x80 AND IF
        ( disp low+high ) T, ELSE ( low only ) C, THEN
    ELSE ( no disp ) DROP THEN ;
( -- disp? modrm opoff )
: [b] ( r/m ) 0 ; : [w] ( r/m ) 1 ;
: [b]+ ( r/m disp8 ) SWAP 0x40 OR 0 ; : [w]+ [b]+ 1+ ;
: r[] ( r r/m ) SWAP <<3 OR 2 ; : x[] r[] 1+ ;
: []r ( r/m r ) <<3 OR 0 ; : []x []r 1+ ;
: r[]+ ( r r/m disp8 )
    ROT <<3 ROT OR 0x40 OR 2 ; : x[]+ r[]+ 1+ ;
: []+r ( r/m disp8 r ) <<3 ROT OR 0x40 OR 0 ; : []+x []+r 1+ ;
( ----- 025 )
0xfe 0 OPmodrm INC[],          0xfe 0x8 OPmodrm DEC[],
0xfe 0x30 OPmodrm PUSH[],      0x8e 0 OPmodrm POP[],
0x88 0 OPmodrm MOV[],          0x38 0 OPmodrm CMP[],

: OPi CREATE C, DOES> C@ C, C, ;
0x04 OPi ADDALi,     0x24 OPi ANDALi,    0x2c OPi SUBALi,
0xcd OPi INT,
: OPI CREATE C, DOES> C@ C, T, ;
0x05 OPI ADDAXI,     0x25 OPI ANDAXI,    0x2d OPI SUBAXI,
( ----- 026 )
: CMPri, 0x80 C, SWAP 0xf8 OR C, C, ;
: CMPxI, 0x81 C, SWAP 0xf8 OR C, T, ;
: CMPxi, 0x83 C, SWAP 0xf8 OR C, C, ;
: MOVri, SWAP 0xb0 OR C, C, ; : MOVxI, SWAP 0xb8 OR C, T, ;
: MOVsx, 0x8e C, SWAP <<3 OR 0xc0 OR C, ;
: MOVrm, 0x8a C, SWAP <<3 0x6 OR C, T, ;
: MOVxm, 0x8b C, SWAP <<3 0x6 OR C, T, ;
: MOVmr, 0x88 C, <<3 0x6 OR C, T, ;
: MOVmx, 0x89 C, <<3 0x6 OR C, T, ;
: PUSHs, <<3 0x06 OR C, ; : POPs, <<3 0x07 OR C, ;
: SUBxi, 0x83 C, SWAP 0xe8 OR C, C, ;
: ADDxi, 0x83 C, SWAP 0xc0 OR C, C, ;
: JMPr, 0xff C, 7 AND 0xe0 OR C, ;
: JMPf, ( seg off ) 0xea C, T, T, ;
( ----- 027 )
( Place BEGIN, where you want to jump back and AGAIN after
  a relative jump operator. Just like BSET and BWR. )
: BEGIN, PC ;
: BSET PC SWAP ! ;
( same as BSET, but we need to write a placeholder )
: FJR, PC 0 C, ;
: IFZ, JNZ, FJR, ;
: IFNZ, JZ, FJR, ;
: IFC, JNC, FJR, ;
: IFNC, JC, FJR, ;
: THEN,
    DUP PC          ( l l pc )
    -^ 1-           ( l off )
    ( warning: l is a PC offset, not a mem addr! )
    SWAP ORG @ + BIN( @ - ( off addr )
    C! ;
( ----- 028 )
: FWRs BSET 0 C, ;
: FSET @ THEN, ;
: RPCs, PC - 1- DUP 128 + 0xff > IF ABORT" PC ovfl" THEN C, ;
: RPCn, PC - 2 - T, ;
: AGAIN, RPCs, ;
( Use RPCx with appropriate JMP/CALL op. Example:
  JMPs, 0x42 RPCs, or CALL, 0x1234 RPCn, )
( ----- 029 )
: PUSHZ, CX 0 MOVxI, IFZ, CX INCx, THEN, CX PUSHx, ;
: ;CODE JMPn, lblnext@ RPCn, ;
( ----- 030 )
-28 LOAD+ ( common words )
( We divide by 2 because each PC represents a word. )
: PC HERE ORG @ - 1 RSHIFT ;
1 11 LOADR+
( ----- 031 )
: _oor ." arg out of range: " .X SPC> ." PC " PC .X NL> ABORT ;
: _r8c DUP 7 > IF _oor THEN ;
: _r32c DUP 31 > IF _oor THEN ;
: _r16+c _r32c DUP 16 < IF _oor THEN ;
: _r64c DUP 63 > IF _oor THEN ;
: _r256c DUP 255 > IF _oor THEN ;
: _Rdp ( op rd -- op', place Rd ) 4 LSHIFT OR ;
( ----- 032 )
( 0000 000d dddd 0000 )
: OPRd CREATE , DOES> @ SWAP _r32c _Rdp T, ;
0b1001010000000101 OPRd ASR,   0b1001010000000000 OPRd COM,
0b1001010000001010 OPRd DEC,   0b1001010000000011 OPRd INC,
0b1001001000000110 OPRd LAC,   0b1001001000000101 OPRd LAS,
0b1001001000000111 OPRd LAT,
0b1001010000000110 OPRd LSR,   0b1001010000000001 OPRd NEG,
0b1001000000001111 OPRd POP,   0b1001001000001111 OPRd PUSH,
0b1001010000000111 OPRd ROR,   0b1001010000000010 OPRd SWAP,
0b1001001000000100 OPRd XCH,
( ----- 033 )
( 0000 00rd dddd rrrr )
: OPRdRr CREATE C, DOES> C@ ( rd rr op )
    OVER _r32c 0x10 AND 3 RSHIFT OR ( rd rr op' )
    8 LSHIFT OR 0xff0f AND ( rd op' )
    SWAP _r32c _Rdp T, ;
0x1c OPRdRr ADC,   0x0c OPRdRr ADD,    0x20 OPRdRr AND,
0x14 OPRdRr CP,    0x04 OPRdRr CPC,    0x10 OPRdRr CPSE,
0x24 OPRdRr EOR,   0x2c OPRdRr MOV,    0x9c OPRdRr MUL,
0x28 OPRdRr OR,    0x08 OPRdRr SBC,    0x18 OPRdRr SUB,

( 0000 0AAd dddd AAAA )
: OPRdA CREATE C, DOES> C@ ( rd A op )
    OVER _r64c 0x30 AND 3 RSHIFT OR ( rd A op' )
    8 LSHIFT OR 0xff0f AND ( rd op' ) SWAP _r32c _Rdp T, ;
0xb0 OPRdA IN,     0xb8 OPRdA _ : OUT, SWAP _ ;
( ----- 034 )
( 0000 KKKK dddd KKKK )
: OPRdK CREATE C, DOES> C@ ( rd K op )
    OVER _r256c 0xf0 AND 4 RSHIFT OR ( rd K op' )
    ROT _r16+c 4 LSHIFT ROT 0x0f AND OR ( op' rdK ) C, C, ;
0x70 OPRdK ANDI,   0x30 OPRdK CPI,     0xe0 OPRdK LDI,
0x60 OPRdK ORI,    0x40 OPRdK SBCI,    0x60 OPRdK SBR,
0x50 OPRdK SUBI,

( 0000 0000 AAAA Abbb )
: OPAb CREATE C, DOES> C@ ( A b op )
    ROT _r32c 3 LSHIFT ROT _r8c OR C, C, ;
0x98 OPAb CBI,     0x9a OPAb SBI,      0x99 OPAb SBIC,
0x9b OPAb SBIS,
( ----- 035 )
: OPNA CREATE , DOES> @ T, ;
0x9598 OPNA BREAK, 0x9488 OPNA CLC,    0x94d8 OPNA CLH,
0x94f8 OPNA CLI,   0x94a8 OPNA CLN,    0x94c8 OPNA CLS,
0x94e8 OPNA CLT,   0x94b8 OPNA CLV,    0x9498 OPNA CLZ,
0x9419 OPNA EIJMP, 0x9509 OPNA ICALL,  0x9519 OPNA EICALL,
0x9409 OPNA IJMP,  0x0000 OPNA NOP,    0x9508 OPNA RET,
0x9518 OPNA RETI,  0x9408 OPNA SEC,    0x9458 OPNA SEH,
0x9478 OPNA SEI,   0x9428 OPNA SEN,    0x9448 OPNA SES,
0x9468 OPNA SET,   0x9438 OPNA SEV,    0x9418 OPNA SEZ,
0x9588 OPNA SLEEP, 0x95a8 OPNA WDR,
( ----- 036 )
( 0000 0000 0sss 0000 )
: OPb CREATE , DOES> @ ( b op )
    SWAP _r8c _Rdp T, ;
0b1001010010001000 OPb BCLR,   0b1001010000001000 OPb BSET,

( 0000 000d dddd 0bbb )
: OPRdb CREATE , DOES> @ ( rd b op )
    ROT _r32c _Rdp SWAP _r8c OR T, ;
0b1111100000000000 OPRdb BLD,  0b1111101000000000 OPRdb BST,
0b1111110000000000 OPRdb SBRC, 0b1111111000000000 OPRdb SBRS,

( special cases )
: CLR, DUP EOR, ;  : TST, DUP AND, ; : LSL, DUP ADD, ;
( ----- 037 )
( a -- k12, absolute addr a, relative to PC in a k12 addr )
: _r7ffc DUP 0x7ff > IF _oor THEN ;
: _raddr12
    PC - DUP 0< IF 0x800 + _r7ffc 0x800 OR ELSE _r7ffc THEN ;
: RJMP _raddr12 0xc000 OR ;
: RCALL _raddr12 0xd000 OR ;
: RJMP, RJMP T, ; : RCALL, RCALL T, ;
( ----- 038 )
( a -- k7, absolute addr a, relative to PC in a k7 addr )
: _r3fc DUP 0x3f > IF _oor THEN ;
: _raddr7
    PC - DUP 0< IF 0x40 + _r3fc 0x40 OR ELSE _r3fc THEN ;
: _brbx ( a b op -- a ) OR SWAP _raddr7 3 LSHIFT OR ;
: BRBC 0xf400 _brbx ; : BRBS 0xf000 _brbx ; : BRCC 0 BRBC ;
: BRCS 0 BRBS ; : BREQ 1 BRBS ; : BRNE 1 BRBC ; : BRGE 4 BRBC ;
: BRHC 5 BRBC ; : BRHS 5 BRBS ; : BRID 7 BRBC ; : BRIE 7 BRBS ;
: BRLO BRCS ; : BRLT 4 BRBS ; : BRMI 2 BRBS ; : BRPL 2 BRBC ;
: BRSH BRCC ; : BRTC 6 BRBC ; : BRTS 6 BRBS ; : BRVC 3 BRBC ;
: BRVS 3 BRBS ;
( ----- 039 )
0b11100 CONSTANT X 0b01000 CONSTANT Y 0b00000 CONSTANT Z
0b11101 CONSTANT X+ 0b11001 CONSTANT Y+ 0b10001 CONSTANT Z+
0b11110 CONSTANT -X 0b11010 CONSTANT -Y 0b10010 CONSTANT -Z
: _ldst ( Rd XYZ op ) SWAP DUP 0x10 AND 8 LSHIFT SWAP 0xf AND
    OR OR ( Rd op' ) SWAP _Rdp T, ;
: LD, 0x8000 _ldst ; : ST, SWAP 0x8200 _ldst ;
( ----- 040 )
( L1 LBL! .. L1 ' RJMP LBL, )
: LBL! ( l -- ) PC SWAP ! ;
: LBL, ( l op -- ) SWAP @ 1- SWAP EXECUTE T, ;
: SKIP, PC 0 T, ;
: TO, ( opw pc ) ( TODO: use !* instead of ! )
    ( warning: pc is a PC offset, not a mem addr! )
    2 * ORG @ + PC 1- HERE ( opw addr tgt hbkp )
    ROT H ! ( opw tgt hbkp ) SWAP ROT EXECUTE HERE ! ( hbkp )
    H ! ;
( L1 FLBL, .. L1 ' RJMP FLBL! )
: FLBL, ( l -- ) LBL! 0 T, ;
: FLBL! ( l opw -- ) SWAP @ TO, ;
: BEGIN, PC ; : AGAIN?, ( op ) SWAP 1- SWAP EXECUTE T, ;
: AGAIN, ['] RJMP AGAIN?, ;
: IF, ['] BREQ SKIP, ; : THEN, TO, ;
( ----- 041 )
( Constant common to all AVR models )
: R0 0 ; : R1 1 ; : R2 2 ; : R3 3 ; : R4 4 ; : R5 5 ; : R6 6 ;
: R7 7 ; : R8 8 ; : R9 9 ; : R10 10 ; : R11 11 ; : R12 12 ;
: R13 13 ; : R14 14 ; : R15 15 ; : R16 16 ; : R17 17 ;
: R18 18 ; : R19 19 ; : R20 20 ; : R21 21 ; : R22 22 ;
: R24 24 ; : R25 25 ; : R26 26 ; : R27 27 ; : R28 28 ;
: R29 29 ; : R30 30 ; : R31 31 ; : XL R26 ; : XH R27 ;
: YL R28 ; : YH R29 ; : ZL R30 ; : ZH R31 ;
( ----- 045 )
( ATmega328P definitions ) : > CONSTANT ;
0xc6 > UDR0 0xc4 > UBRR0L 0xc5 > UBRR0H 0xc2 > UCSR0C
0xc1 > UCSR0B 0xc0 > UCSR0A 0xbd > TWAMR 0xbc > TWCR
0xbb > TWDR 0xba > TWAR 0xb9 > TWSR 0xb8 > TWBR 0xb6 > ASSR
0xb4 > OCR2B 0xb3 > OCR2A 0xb2 > TCNT2 0xb1 > TCCR2B
0xb0 > TCCR2A 0x8a > OCR1BL 0x8b > OCR1BH 0x88 > OCR1AL
0x89 > OCR1AH 0x86 > ICR1L 0x87 > ICR1H 0x84 > TCNT1L
0x85 > TCNT1H 0x82 > TCCR1C 0x81 > TCCR1B 0x80 > TCCR1A
0x7f > DIDR1 0x7e > DIDR0 0x7c > ADMUX 0x7b > ADCSRB
0x7a > ADCSRA 0x79 > ADCH 0x78 > ADCL 0x70 > TIMSK2
0x6f > TIMSK1 0x6e > TIMSK0 0x6c > PCMSK1 0x6d > PCMSK2
0x6b > PCMSK0 0x69 > EICRA 0x68 > PCICR 0x66 > OSCCAL
0x64 > PRR 0x61 > CLKPR 0x60 > WDTCSR 0x3f > SREG 0x3d > SPL
0x3e > SPH 0x37 > SPMCSR 0x35 > MCUCR 0x34 > MCUSR 0x33 > SMCR
0x30 > ACSR 0x2e > SPDR 0x2d > SPSR 0x2c > SPCR 0x2b > GPIOR2
0x2a > GPIOR1 0x28 > OCR0B 0x27 > OCR0A 0x26 > TCNT0  ( cont. )
( ----- 046 )
( cont. ) 0x25 > TCCR0B 0x24 > TCCR0A 0x23 > GTCCR
0x22 > EEARH 0x21 > EEARL 0x20 > EEDR 0x1f > EECR
0x1e > GPIOR0 0x1d > EIMSK 0x1c > EIFR 0x1b > PCIFR
0x17 > TIFR2 0x16 > TIFR1 0x15 > TIFR0 0x0b > PORTD 0x0a > DDRD
0x09 > PIND 0x08 > PORTC 0x07 > DDRC 0x06 > PINC 0x05 > PORTB
0x04 > DDRB 0x03 > PINB
( ----- 050 )
( 6809 assembler )
-48 LOAD+ ( common words ) 1 BIGEND? C!
( for TRF/EXG ) : D 0 ; : X 1 ; : Y 2 ; : U 3 ; : S 4 ;
: PCR 5 ; : A 8 ; : B 9 ; : CCR 10 ; : DPR 11 ;
( Addressing modes. output: n3? n2? n1 nc opoff )
: # ( n ) 1 0 ; ( Immediate )
: <> ( n ) 1 0x10 ; ( Direct )
: () ( n ) |T 2 0x30 ; ( Extended )
: [] ( n ) |T 0b10011111 3 0x20 ; ( Extended Indirect)
( Offset Indexed. We auto-detect 0, 5-bit, 8-bit, 16-bit )
: _0? ?DUP IF 1 ELSE 0x84 1 0 THEN ;
: _5? DUP 0x10 + 0x1f > IF 1 ELSE 0x1f AND 1 0 THEN ;
: _8? DUP 0x80 + 0xff > IF 1 ELSE 0xff AND 0x88 2 0 THEN ;
: _16 |T 0x89 3 ;
1 9 LOADR+
( ----- 051 )
: R+N CREATE C, DOES> C@ ( roff ) >R
    _0? IF _5? IF _8? IF _16 THEN THEN THEN
    SWAP R> ( roff ) OR SWAP 0x20 ;
: R+K CREATE C, DOES> C@ 1 0x20 ;
: PCR+N ( n ) _8? IF _16 THEN SWAP 0x8c OR SWAP 0x20 ;
: [R+N] CREATE C, DOES> C@ 0x10 OR ( roff ) >R
    _0? IF _8? IF _16 THEN THEN SWAP R> OR SWAP 0x20 ;
: [PCR+N] ( n ) _8? IF _16 THEN SWAP 0x9c OR SWAP 0x20 ;
0 R+N X+N   0x20 R+N Y+N  0x40 R+N U+N   0x60 R+N S+N
: X+0 0 X+N ; : Y+0 0 Y+N ; : S+0 0 S+N ; : U+0 0 S+N ;
0 [R+N] [X+N] 0x20 [R+N] [Y+N]
0x40 [R+N] [U+N] 0x60 [R+N] [S+N]
: [X+0] 0 [X+N] ; : [Y+0] 0 [Y+N] ;
: [S+0] 0 [S+N] ; : [U+0] 0 [U+N] ;
( ----- 052 )
0x86 R+K X+A   0x85 R+K X+B   0x8b R+K X+D
0xa6 R+K Y+A   0xa5 R+K Y+B   0xab R+K Y+D
0xc6 R+K U+A   0xc5 R+K U+B   0xcb R+K U+D
0xe6 R+K S+A   0xe5 R+K S+B   0xeb R+K S+D
0x96 R+K [X+A] 0x95 R+K [X+B] 0x9b R+K [X+D]
0xb6 R+K [Y+A] 0xb5 R+K [Y+B] 0xbb R+K [Y+D]
0xd6 R+K [U+A] 0xd5 R+K [U+B] 0xdb R+K [U+D]
0xf6 R+K [S+A] 0xf5 R+K [S+B] 0xfb R+K [S+D]
0x80 R+K X+  0x81 R+K X++  0x82 R+K -X  0x83 R+K --X
0xa0 R+K Y+  0xa1 R+K Y++  0xa2 R+K -Y  0xa3 R+K --Y
0xc0 R+K U+  0xc1 R+K U++  0xc2 R+K -U  0xc3 R+K --U
0xe0 R+K S+  0xe1 R+K S++  0xe2 R+K -S  0xe3 R+K --S
0x91 R+K [X++] 0x93 R+K [--X] 0xb1 R+K [Y++] 0xb3 R+K [--Y]
0xd1 R+K [U++] 0xd3 R+K [--U] 0xf1 R+K [S++] 0xf3 R+K [--S]
( ----- 053 )
: ,? DUP 0xff > IF T, ELSE C, THEN ;
: ,N ( cnt ) 0 DO C, LOOP ;
: OPINH ( inherent ) CREATE , DOES> @ ,? ;
( Targets A or B )
: OP1 CREATE , DOES> @ ( n2? n1 nc opoff op ) + ,? ,N ;
( Targets D/X/Y/S/U. Same as OP1, but spit 2b immediate )
: OP2 CREATE , DOES> @ OVER + ,? IF ,N ELSE DROP T, THEN ;
( Targets memory only. opoff scheme is different than OP1/2 )
: OPMT CREATE , DOES> @
    SWAP 0x10 - ?DUP IF 0x50 + + THEN ,? ,N ;
( Targets 2 regs )
: OPRR ( src tgt -- ) CREATE C, DOES> C@ C, SWAP <<4 OR C, ;
' OPINH :* OPBR
CREATE wbr 0 C, ( wide BR? ) : wbr? wbr C@ 0 wbr C! ;
: OPLBR CREATE , DOES> @ ,? 1 wbr C! ;
( ----- 054 )
0x89 OP1 ADCA,        0xc9 OP1 ADCB,
0x8b OP1 ADDA,        0xcb OP1 ADDB,      0xc3 OP2 ADDD,
0x84 OP1 ANDA,        0xc4 OP1 ANDB,      0x1c OP1 ANDCC,
0x48 OPINH ASLA,      0x58 OPINH ASLB,    0x08 OPMT ASL,
0x47 OPINH ASRA,      0x57 OPINH ASRB,    0x07 OPMT ASR,
0x4f OPINH CLRA,      0x5f OPINH CLRB,    0x0f OPMT CLR,
0x81 OP1 CMPA,        0xc1 OP1 CMPB,      0x1083 OP2 CMPD,
0x118c OP2 CMPS,      0x1183 OP2 CMPU,    0x8c OP2 CMPX,
0x108c OP2 CMPY,
0x43 OPINH COMA,      0x53 OPINH COMB,    0x03 OPMT COM,
0x3c OP1 CWAI,        0x19 OPINH DAA,
0x4a OPINH DECA,      0x5a OPINH DECB,    0x0a OPMT DEC,
0x88 OP1 EORA,        0xc8 OP1 EORB,      0x1e OPRR EXG,
0x4c OPINH INCA,      0x5c OPINH INCB,    0x0c OPMT INC,
0x0e OPMT JMP,        0x8d OP1 JSR,
( ----- 055 )
0x86 OP1 LDA,         0xc6 OP1 LDB,       0xcc OP2 LDD,
0x10ce OP2 LDS,       0xce OP2 LDU,       0x8e OP2 LDX,
0x108e OP2 LDY,
0x12 OP1 LEAS,        0x13 OP1 LEAU,      0x10 OP1 LEAX,
0x11 OP1 LEAY,
0x48 OPINH LSLA,      0x58 OPINH LSLB,    0x08 OPMT LSL,
0x44 OPINH LSRA,      0x54 OPINH LSRB,    0x04 OPMT LSR,
0x3d OPINH MUL,
0x40 OPINH NEGA,      0x50 OPINH NEGB,    0x00 OPMT NEG,
0x12 OPINH NOP,
0x8a OP1 ORA,         0xca OP1 ORB,       0x1a OP1 ORCC,
0x49 OPINH ROLA,      0x59 OPINH ROLB,    0x09 OPMT ROL,
0x46 OPINH RORA,      0x56 OPINH RORB,    0x06 OPMT ROR,
0x3b OPINH RTI,       0x39 OPINH RTS,
0x82 OP1 SBCA,        0xc2 OP1 SBCB,
0x1d OPINH SEX,
( ----- 056 )
0x87 OP1 STA,         0xc7 OP1 STB,       0xcd OP2 STD,
0x10cf OP2 STS,       0xcf OP2 STU,       0x8f OP2 STX,
0x108f OP2 STY,
0x80 OP1 SUBA,        0xc0 OP1 SUBB,      0x83 OP2 SUBD,
0x3f OPINH SWI,       0x103f OPINH SWI2,  0x113f OPINH SWI3,
0x13 OPINH SYNC,      0x1f OPRR TFR,
0x4d OPINH TSTA,      0x5d OPINH TSTB,    0x0d OPMT TST,

0x24 OPBR BCC,        0x1024 OPLBR LBCC,  0x25 OPBR BCS,
0x1025 OPLBR LBCS,    0x27 OPBR BEQ,      0x1027 OPLBR LBEQ,
0x2c OPBR BGE,        0x102c OPLBR LBGE,  0x2e OPBR BGT,
0x102e OPLBR LBGT,    0x22 OPBR BHI,      0x1022 OPLBR LBHI,
0x24 OPBR BHS,        0x1024 OPLBR LBHS,  0x2f OPBR BLE,
0x102f OPLBR LBLE,    0x25 OPBR BLO,      0x1025 OPLBR LBLO,
0x23 OPBR BLS,        0x1023 OPLBR LBLS,  0x2d OPBR BLT,
0x102d OPLBR LBLT,    0x2b OPBR BMI,      0x102b OPLBR LBMI,
( ----- 057 )
0x26 OPBR BNE,        0x1026 OPLBR LBNE,  0x2a OPBR BPL,
0x102a OPLBR LBPL,    0x20 OPBR BRA,      0x16 OPLBR LBRA,
0x21 OPBR BRN,        0x1021 OPLBR BRN,   0x8d OPBR BSR,
0x17 OPLBR LBSR,      0x28 OPBR BVC,      0x1028 OPLBR LBVC,
0x29 OPBR BVS,        0x1029 OPLBR LBVS,

: _ ( r c cref mask -- r c ) ROT> OVER = ( r mask c f )
    IF ROT> OR SWAP ELSE NIP THEN ;
: OPP CREATE C, DOES> C@ C, 0 TOWORD BEGIN ( r c )
    '$' 0x80 _ 'S' 0x40 _ 'U' 0x40 _ 'Y' 0x20 _ 'X' 0x10 _
    '%' 0x08 _ 'B' 0x04 _ 'A' 0x02 _ 'C' 0x01 _ 'D' 0x06 _
    '@' 0xff _ DROP C< DUP WS? UNTIL DROP C, ;
0x34 OPP PSHS, 0x36 OPP PSHU, 0x35 OPP PULS, 0x37 OPP PULU,
( ----- 058 )
: BEGIN, ( -- a ) HERE ;
: BSET ( lbl -- ) BEGIN, SWAP ! ;
: LPC ( lbl -- ) @ ORG @ - BIN( @ + ;
: AGAIN, ( a -- ) HERE - 1- wbr? IF 1- T, ELSE _bchk C, THEN ;
: BBR, ( lbl -- ) @ AGAIN, ;
( same as BSET, but we need to write a placeholder. we need to
  remember wbr? value so we put it in the placeholder. )
: FBR, ( -- a ) BEGIN, wbr? DUP C, IF 0 C, THEN ;
: IFWORD ( -- a ) CREATE , DOES> @ EXECUTE FBR, ;
: THEN, ( a -- ) DUP HERE -^ 1- ( l off ) OVER C@ ( l off wbr )
    IF 1- SWAP T! ELSE _bchk SWAP C! THEN ;
: ELSE, BRA, FBR, SWAP THEN, ;
: FSET @ THEN, ;
: ;CODE LBRA, lblnext BBR, ;
( ----- 059 )

' BNE, IFWORD IFZ,   ' BEQ, IFWORD IFNZ,
' BCC, IFWORD IFCS,  ' BCS, IFWORD IFCC,
' IFZ, :* IF=,       ' IFNZ, :* IF!=,
' BHS, IFWORD IF<,   ' BHI, IFWORD IF<=,
' BLS, IFWORD IF>,   ' BLO, IFWORD IF>=,
( ----- 100 )
( Block editor. Load with "100 LOAD", see doc/ed.txt )
CREATE ACC 0 ,
: _LIST ." Block " DUP . NL> LIST ;
: L BLK> @ _LIST ;
: B BLK> @ 1- BLK@ L ;
: N BLK> @ 1+ BLK@ L ;
1 6 LOADR+
( ----- 101 )
( Cursor position in buffer. EDPOS/64 is line number )
CREATE EDPOS 0 ,
CREATE IBUF 64 ALLOT0
CREATE FBUF 64 ALLOT0
: edpos@ EDPOS @ ;
: 'pos ( pos -- a, addr of pos in memory ) BLK( + ;
: 'edpos@ edpos@ 'pos ;
: _lpos ( ln -- a ) 64 * 'pos ;
: _pln ( ln -- )
    DUP _lpos DUP 64 + SWAP DO ( lno )
        I 'edpos@ = IF '^' EMIT THEN
        I C@ DUP SPC < IF DROP SPC THEN
        EMIT
    LOOP ( lno ) 1+ . ;
: _zbuf 64 0 FILL ; ( buf -- )
( ----- 102 )
: _type ( buf -- )
    C< DUP CR = IF 2DROP EXIT THEN SWAP DUP _zbuf ( c a )
    BEGIN ( c a ) C!+ C< TUCK 0x0d = UNTIL ( c a ) C! ;
( user-facing lines are 1-based )
: T 1- DUP 64 * EDPOS ! _pln ;
: P IBUF _type IBUF 'edpos@ 64 MOVE BLK!! ;
: _mvln+ ( ln -- move ln 1 line down )
    DUP 14 > IF DROP EXIT THEN
    _lpos DUP 64 + 64 MOVE ;
: _mvln- ( ln -- move ln 1 line up )
    DUP 14 > IF DROP 15 _lpos _zbuf
    ELSE 1+ _lpos DUP 64 - 64 MOVE THEN ;
( ----- 103 )
: _U ( U without P, used in VE )
    15 edpos@ 64 / - ?DUP IF
    0 DO
        14 I - _mvln+
    LOOP THEN ;
: U _U P ;
( ----- 104 )
: _F ( F without _type and _pln. used in VE )
    FBUF 'edpos@ 1+ ( a1 a2 )
    BEGIN
        C@+ ROT ( a2+1 c2 a1 ) C@+ ROT ( a2+1 a1+1 c1 c2 )
        = NOT IF DROP FBUF THEN ( a2 a1 )
        TUCK C@ CR = ( a1 a2 f1 )
        OVER BLK) = OR ( a1 a2 f1|f2 )
    UNTIL ( a1 a2 )
    DUP BLK) < IF BLK( - FBUF + -^ EDPOS ! ELSE DROP THEN ;
: F FBUF _type _F edpos@ 64 / _pln ;
( ----- 105 )
: _blen ( buf -- length of str in buf )
    DUP BEGIN C@+ SPC < UNTIL -^ 1- ;
: _rbufsz ( size of linebuf to the right of curpos )
    edpos@ 64 MOD 63 -^ ;
: _lnfix ( --, ensure no ctl chars in line before EDPOS )
    edpos@ DUP 0xffc0 AND 2DUP = IF 2DROP EXIT THEN DO
    I 'pos DUP C@ SPC < IF SPC SWAP C! ELSE DROP THEN LOOP ;
: _i ( i without _pln and _type. used in VE )
    _rbufsz IBUF _blen 2DUP > IF
        _lnfix TUCK - ( ilen chars-to-move )
        >R 'edpos@ 2DUP + ( ilen a a+ilen R:ctm )
        R> MOVE- ( ilen )
    ELSE DROP 1+ ( ilen becomes rbuffsize+1 ) THEN
    DUP IBUF 'edpos@ ROT MOVE ( ilen ) EDPOS +! BLK!! ;
: i IBUF _type _i edpos@ 64 / _pln ;
( ----- 106 )
: icpy ( n -- copy n chars from cursor to IBUF )
    IBUF _zbuf 'edpos@ IBUF ( n a buf ) ROT MOVE ;
: _X ( n -- )
    DUP icpy 'edpos@ 2DUP + ( n a1 a1+n )
    SWAP _rbufsz MOVE ( n )
    ( get to next line - n )
    DUP edpos@ 0xffc0 AND 0x40 + -^ 'pos ( n a )
    SWAP 0 FILL BLK!! ;
: X _X edpos@ 64 / _pln ;
: _E FBUF _blen _X ;
: E FBUF _blen X ;
: Y FBUF _blen icpy ;
( ----- 110 )
( Visual editor. Load with "110 LOAD", see doc/ed.txt )
-10 LOAD+ ( B100, block editor )
1 7 LOADR+
( ----- 111 )
CREATE CMD 2 C, '$' C, 0 C,
CREATE PREVPOS 0 , CREATE PREVBLK 0 , CREATE xoff 0 ,
: MIN ( n n - n ) 2DUP > IF SWAP THEN DROP ;
: MAX ( n n - n ) 2DUP < IF SWAP THEN DROP ;
: large? COLS 67 > ; : col- 67 COLS MIN -^ ;
: width large? IF 64 ELSE COLS THEN ;
: acc@ ACC @ 1 MAX ; : pos@ ( x y -- ) edpos@ 64 /MOD ;
: num ACC @ SWAP _pdacc IF ACC ! ELSE DROP THEN ;
: nspcs ( n -- , spit n space ) 0 DO SPC> LOOP ;
: aty 0 SWAP AT-XY ;
: clrscr COLS LINES * 0 DO SPC I CELL! LOOP ;
: gutter ( ln n ) OVER + SWAP DO 67 I AT-XY '|' EMIT LOOP ;
: status 0 aty ." BLK" SPC> BLK> ? SPC> ACC ?
    SPC> pos@ . ',' EMIT . xoff @ IF '>' EMIT THEN SPC>
    BLKDTY @ IF '*' EMIT THEN 4 nspcs ;
( ----- 112 )
: nums 17 1 DO 2 I + aty I . SPC> SPC> LOOP ;
: mode! ( c -- ) 4 col- CELL! ;
: @emit C@ SPC MAX 0x7f MIN EMIT ;
: rfshln ( ln -- )
        large? IF 3 ELSE 0 THEN OVER 3 + AT-XY ( ln )
        _lpos ( lineaddr ) xoff @ + DUP width + SWAP
        DO I @emit LOOP ;
: rfshln@ pos@ NIP rfshln ;
: contents 16 0 DO I rfshln LOOP large? IF 3 16 gutter THEN ;
: selblk BLK> @ PREVBLK ! BLK@ contents ;
: pos! ( newpos -- ) edpos@ PREVPOS !
    DUP 0< IF DROP 0 THEN 1023 MIN EDPOS ! ;
: xoff? pos@ DROP ( x )
    xoff @ ?DUP IF < IF 0 xoff ! contents THEN ELSE
        width >= IF 64 COLS - xoff ! contents THEN THEN ;
( ----- 113 )
: setpos ( -- ) pos@ 3 + ( header ) SWAP ( y x ) xoff @ -
    large? IF 3 + ( gutter ) THEN SWAP AT-XY ;
: cmv ( n -- , char movement ) acc@ * edpos@ + pos! ;
: buftype ( buf ln -- )
    3 OVER AT-XY KEY DUP SPC < IF 2DROP DROP
    ELSE ( buf ln c ) KEY> 64 nspcs 3 SWAP AT-XY
    IN( _zbuf RDLN IN( SWAP 64 MOVE THEN ;
: bufp ( buf -- )
    DUP 3 col- + SWAP DO I @emit LOOP ;
: bufs
    1 aty ." I: " IBUF bufp
    2 aty ." F: " FBUF bufp
    large? IF 0 3 gutter THEN ;
( ----- 114 )
: $G ACC @ selblk ;
: $[ BLK> @ acc@ - selblk ;
: $] BLK> @ acc@ + selblk ;
: $t PREVBLK @ selblk ;
: $I 'I' mode! IBUF 1 buftype _i bufs rfshln@ SPC mode! ;
: $F 'F' mode! FBUF 2 buftype _F bufs setpos SPC mode! ;
: $Y Y bufs ; : $E _E bufs rfshln@ ;
: $X acc@ _X bufs rfshln@ ;
: $h -1 cmv ; : $l 1 cmv ; : $k -64 cmv ; : $j 64 cmv ;
: $H edpos@ 0x3c0 AND pos! ;
: $L edpos@ DUP 0x3f OR 2DUP = IF 2DROP EXIT THEN SWAP BEGIN
    ( res p ) 1+ DUP 'pos C@ WS? NOT IF NIP DUP 1+ SWAP THEN
    DUP 0x3f AND 0x3f = UNTIL DROP pos! ;
: $g ACC @ 1 MAX 1- 64 * pos! ;
: $@ BLK> @ BLK@* 0 BLKDTY ! contents ;
: $! BLK> @ FLUSH BLK> ! ;
( ----- 115 )
: C@- ( a -- a-1 c ) DUP C@ SWAP 1- SWAP ;
0 :* C@+-
: go>> ['] C@+ ['] C@+- *! ;
: go<< ['] C@- ['] C@+- *! ;
: word>> BEGIN C@+- WS? UNTIL ;
: ws>> BEGIN C@+- WS? NOT UNTIL ;
: bpos! BLK( - pos! ;
: $w go>> 'edpos@ acc@ 0 DO word>> ws>> LOOP 1- bpos! ;
: $W go>> 'edpos@ acc@ 0 DO 1+ ws>> word>> LOOP 2 - bpos! ;
: $b go<< 'edpos@ acc@ 0 DO 1- ws>> word>> LOOP 2 + bpos! ;
: $B go<< 'edpos@ acc@ 0 DO word>> ws>> LOOP 1+ bpos! ;
( ----- 116 )
: $f edpos@ PREVPOS @ 2DUP = IF 2DROP EXIT THEN
    2DUP > IF DUP pos! SWAP THEN
    ( p1 p2, p1 < p2 ) OVER - 64 MIN ( pos len ) FBUF _zbuf
    SWAP 'pos FBUF ( len src dst ) ROT MOVE bufs ;
: $R ( replace mode )
    'R' mode!
    BEGIN setpos KEY DUP BS? IF -1 EDPOS +! DROP 0 THEN
        DUP SPC >= IF
        DUP EMIT 'edpos@ C! 1 EDPOS +! BLK!! 0
    THEN UNTIL SPC mode! ;
: $O _U edpos@ 0x3c0 AND DUP pos! 'pos _zbuf BLK!! contents ;
: $o edpos@ 0x3c0 < IF edpos@ 64 + EDPOS ! $O THEN ;
: $D $H 64 icpy
    acc@ 0 DO 16 edpos@ 64 / DO I _mvln- LOOP LOOP
    BLK!! bufs contents ;
( ----- 117 )
: handle ( c -- f )
    DUP '0' '9' =><= IF num 0 EXIT THEN
    DUP CMD 2 + C! CMD FIND IF EXECUTE ELSE DROP THEN
    0 ACC ! 'q' = ;
: VE
    BLK> @ 0< IF 0 BLK@ THEN
    1 XYMODE C! clrscr 0 ACC ! 0 PREVPOS ! nums bufs contents
    BEGIN xoff? status setpos KEY handle UNTIL
    0 XYMODE C! 19 aty IN$ ;
( ----- 150 )
( Remote Shell. load range B150-B151 )
: _<< ( print everything available from RX<? )
    BEGIN RX<? IF EMIT ELSE EXIT THEN AGAIN ;
: _<<r ( _<< with retries )
    BEGIN _<< 100 TICKS RX<? IF EMIT ELSE EXIT THEN AGAIN ;
: RX< BEGIN RX<? UNTIL ;
: _<<1r RX< EMIT _<<r ;
: rsh BEGIN
    KEY? IF DUP EOT? IF DROP EXIT ELSE TX> THEN THEN
    _<< AGAIN ;
: rstype ( s --, like STYPE, but remote )
    C@+ ( s len ) 0 DO C@+ TX> _<<r LOOP DROP _<<r CR TX>
    RX< DROP _<<r ;
: rstypep ( like rstype, but read ok prompt )
    rstype BEGIN RX< WS? NOT UNTIL _<<1r ;
( ----- 151 )
: unpack DUP 0xf0 OR SWAP 0x0f OR ;
: out unpack TX> TX> ; : out2 |M out out ;
: rupload ( loca rema u -- )
    LIT" : in KEY 0xf0 AND KEY 0x0f AND OR ;" rstypep
    LIT" : in2 in 8 LSHIFT in OR ;" rstypep
    ( sig: chk --, a and then u are KEYed in )
    LIT" : _ in2 in2 OVER + SWAP DO " rstypep
    LIT" in DUP ROT + SWAP I C! LOOP ;" rstypep
    DUP ROT ( loca u u rema ) LIT" 0 _" rstype out2 out2
    OVER + SWAP 0 ROT> ( 0 loca+u loca )
    DO '.' EMIT I C@ DUP ROT + SWAP out LOOP
    _<<1r LIT" .X FORGET in" rstypep .X ;
( ----- 152 )
( XMODEM routines )
: _<<s BEGIN RX<? IF DROP ELSE EXIT THEN AGAIN ;
: _rx>mem1 ( addr -- f, Receive single packet, f=eot )
  RX< 1 = NOT IF ( EOT ) 0x6 ( ACK ) TX> 1 EXIT THEN
  RX< DROP RX< DROP ( packet num )
  0 ( crc ) SWAP DUP 128 + SWAP DO ( crc ) '.' EMIT
    RX< DUP ( crc n n ) I C! ( crc n ) CRC16 LOOP
  RX< 8 LSHIFT RX< OR ( sender's CRC )
  = IF 0x6 ( ACK ) ELSE 0x15 ( NACK ) THEN TX> 0 ;
: RX>MEM ( addr --, Receive packets into addr until EOT )
  _<<s 'C' TX> BEGIN ( a )
  DUP _rx>mem1 SWAP 128 + SWAP UNTIL DROP ;
: RX>BLK ( -- )
  _<<s 'C' TX> BLK( BEGIN ( a )
  DUP BLK) = IF DROP BLK( BLK! 1 BLK> +! THEN
  DUP _rx>mem1 SWAP 128 + SWAP UNTIL 2DROP ;
( ----- 153 )
: _snd128 ( a -- a )
    0 ( a crc ) 128 0 DO ( a crc )
      OVER I + C@ DUP TX> ( a crc n ) CRC16 ( a crc ) LOOP
    |M TX> TX> ( a ) ;
: _ack? 0 BEGIN DROP RX< DUP 'C' = NOT UNTIL
	DUP 0x06 ( ACK ) = IF DROP 1
    ELSE 0x15 = NOT IF ABORT" out of sync" THEN 0 THEN ;
: _waitC
  ." Waiting for C..." BEGIN RX<? IF 'C' = ELSE 0 THEN UNTIL ;
: _mem>tx ( addr pktstart pktend -- ) SWAP DO ( a )
    'P' EMIT I . SPC> 0x01 ( SOH ) TX>
    I 1+ ( pkt start at 1 ) DUP TX> 0xff -^ TX>
    _snd128 _ack? IF 128 + ( a+128 ) ELSE R> 1- >R THEN
  LOOP DROP ;
( ----- 154 )
: MEM>TX ( a u -- Send u bytes to TX )
  _waitC 128 /MOD SWAP IF 1+ THEN ( pktcnt ) 0 SWAP _mem>tx
  0x4 ( EOT ) TX> RX< DROP ;
: BLK>TX ( b1 b2 -- )
  _waitC OVER - ( cnt ) 0 DO ( b1 )
    'B' EMIT DUP I + DUP . SPC> BLK@ BLK(
    I 8 * DUP 8 + ( a pktstart pktend ) _mem>tx
  LOOP DROP
  0x4 ( EOT ) TX> RX< DROP ;
( ----- 160 )
( AVR Programmer, load range 160-163. doc/avr.txt )
( page size in words, 64 is default on atmega328P )
CREATE aspfpgsz 64 ,
VARIABLE aspprevx
: _x ( a -- b ) DUP aspprevx ! (spix) ;
: _xc ( a -- b ) DUP (spix) ( a b )
    DUP aspprevx @ = NOT IF ABORT" AVR err" THEN ( a b )
    SWAP aspprevx ! ( b ) ;
: _cmd ( b4 b3 b2 b1 -- r4 ) _xc DROP _xc DROP _xc DROP _x ;
: asprdy ( -- ) BEGIN 0 0 0 0xf0 _cmd 1 AND NOT UNTIL ;
: asp$ ( spidevid -- )
    ( RESET pulse ) DUP (spie) 0 (spie) (spie)
    ( wait >20ms ) 220 TICKS
    ( enable prog ) 0xac (spix) DROP
    0x53 _x DROP 0 _xc DROP 0 _x DROP ;
: asperase 0 0 0x80 0xac _cmd asprdy ;
( ----- 161 )
( fuse access. read/write one byte at a time )
: aspfl@ ( -- lfuse ) 0 0 0 0x50 _cmd ;
: aspfh@ ( -- hfuse ) 0 0 0x08 0x58 _cmd ;
: aspfe@ ( -- efuse ) 0 0 0x00 0x58 _cmd ;
: aspfl! ( lfuse -- ) 0 0xa0 0xac _cmd ;
: aspfh! ( hfuse -- ) 0 0xa8 0xac _cmd ;
: aspfe! ( efuse -- ) 0 0xa4 0xac _cmd ;
( ----- 162 )
: aspfb! ( n a --, write word n to flash buffer addr a )
    SWAP |L ( a hi lo ) ROT ( hi lo a )
    DUP ROT ( hi a a lo ) SWAP ( hi a lo a )
    0 0x40 ( hi a lo a 0 0x40 ) _cmd DROP ( hi a )
    0 0x48 _cmd DROP ;
: aspfp! ( page --, write buffer to page )
    0 SWAP aspfpgsz @ * |M ( 0 lsb msb )
    0x4c _cmd DROP asprdy ;
: aspf@ ( page a -- n, read word from flash )
    SWAP aspfpgsz @ * OR ( addr ) |M ( lsb msb )
    2DUP 0 ROT> ( lsb msb 0 lsb msb )
    0x20 _cmd ( lsb msb low )
    ROT> 0 ROT> ( low 0 lsb msb ) 0x28 _cmd 8 LSHIFT OR ;
( ----- 163 )
: aspe@ ( addr -- byte, read from EEPROM )
    0 SWAP |L ( 0 msb lsb )
    0xa0 ( 0 msb lsb 0xa0 ) _cmd ;
: aspe! ( byte addr --, write to EEPROM )
    |L ( b msb lsb )
    0xc0 ( b msb lsb 0xc0 ) _cmd DROP asprdy ;
( ----- 165 )
( Sega ROM signer. See doc/sega.txt )
: C!+^ ( a c -- a+1 ) OVER C! 1+ ;
: segasig ( addr size -- )
    0x2000 OVER LSHIFT ( a sz bytesz )
    ROT TUCK + 0x10 - ( sz a end )
    TUCK SWAP 0 ROT> ( sz end sum end a ) DO ( sz end sum )
        I C@ + LOOP ( sz end sum ) SWAP ( sz sum end )
    'T' C!+^ 'M' C!+^ 'R' C!+^ SPC C!+^ 'S' C!+^
    'E' C!+^ 'G' C!+^ 'A' C!+^ 0 C!+^ 0 C!+^
    ( sum's LSB ) OVER C!+^ ( MSB ) SWAP 8 RSHIFT OVER C! 1+
    ( sz end ) 0 C!+^ 0 C!+^ 0 C!+^ SWAP 0x4a + SWAP C! ;
( ----- 200 )
( Cross compilation program. See doc/cross.txt.
  Load range: B200-B205 )
CREATE XCURRENT 0 ,
CREATE (n)* 0 , CREATE (b)* 0 , CREATE 2>R* 0 ,
CREATE (loop)* 0 , CREATE (br)* 0 , CREATE (?br)* 0 ,
CREATE (s)* 0 , CREATE !* 0 , CREATE EXIT* 0 ,
: (xentry) WORD C@+ TUCK MOVE, HERE XCURRENT @ - T,
    C, HERE XCURRENT ! ;
: XIMM XCURRENT @ 1- DUP C@ 0x80 OR SWAP C! ;
: XCREATE (xentry) 2 C, ;
: XCONSTANT (xentry) 6 C, T, ;
: _xapply ( a -- a-off )
    DUP ORG @ > IF ORG @ - BIN( @ + THEN ;
: X:* (xentry) 4 C, _xapply T, ; : X:** (xentry) 5 C, T, ;
( ----- 201 )
: W= ( s w -- f ) OVER C@ OVER 1- C@ 0x7f AND = IF ( same len )
    ( s w ) SWAP C@+ ( w s+1 len ) ROT OVER - 3 -
    ( s+1 len w-3-len ) ROT> []=
    ELSE 2DROP 0 THEN ;
: _xfind ( s -- w f ) XCURRENT @ BEGIN ( s w )
    2DUP W= IF NIP ( w ) 1 EXIT THEN
    3 - ( prev field ) DUP T@ ?DUP NOT IF DROP 0 EXIT THEN
    ( a - prev ) - AGAIN ( s w ) ;
: XFIND ( s -- w ) _xfind NOT IF (wnf) THEN _xapply ;
: X'? WORD _xfind _xapply ; : X' X'? NOT IF (wnf) THEN ;
( ----- 202 )
: _codecheck ( lbl str -- )
    XCURRENT @ W=
    IF XCURRENT @ _xapply SWAP ! ELSE DROP THEN ;
: CODE (xentry) 0 ( native ) C,
    EXIT* LIT" EXIT" _codecheck
    (b)* LIT" (b)" _codecheck
    (n)* LIT" (n)" _codecheck
    (s)* LIT" (s)" _codecheck
    !* LIT" !" _codecheck
    2>R* LIT" 2>R" _codecheck
    (loop)* LIT" (loop)" _codecheck
    (br)* LIT" (br)" _codecheck
    (?br)* LIT" (?br)" _codecheck ;
: XWRAP" W" _" (xentry) PC ORG @ 8 ( LATEST ) + T! ," EOT, ;
( ----- 203 )
: XLITN DUP 0xff > IF (n)* @ T, T, ELSE (b)* @ T, C, THEN ;
: X['] WORD XFIND XLITN ;
: XCOMPILE X['] LIT" ," XFIND T, ;
: X[COMPILE] WORD XFIND T, ; : XDO 2>R* @ T, HERE ;
: XLOOP (loop)* @ T, HERE - C, ;
: XIF (?br)* @ T, HERE 1 ALLOT ;
: XELSE (br)* @ T, 1 ALLOT [COMPILE] THEN HERE 1- ;
: XAGAIN (br)* @ T, HERE - C, ;
: XUNTIL (?br)* @ T, HERE - C, ;
: XLIT" (s)* @ T, HERE 0 C, ," DUP HERE -^ 1- SWAP C! ;
: XW" XLIT" SYSVARS 0x32 + XLITN !* @ T, ;
( ----- 204 )
: X:
  (xentry) 1 ( compiled ) C, BEGIN
    WORD DUP LIT" ;" S= IF DROP EXIT* @ T, EXIT THEN
    _xfind IF ( a )
      DUP 1- C@ 0x80 AND IF ABORT" immed!" THEN _xapply T,
    ELSE ( w ) FIND ( a f ) IF
      DUP 1- C@ 0x80 AND IF EXECUTE ELSE ABORT THEN
      ELSE (parse) XLITN THEN
  THEN AGAIN ;
( ----- 205 )
: '? X'? ;
: ['] X['] ; IMMEDIATE
: COMPILE XCOMPILE ; IMMEDIATE
: [COMPILE] X[COMPILE] ; IMMEDIATE
: DO XDO ; IMMEDIATE : LOOP XLOOP ; IMMEDIATE
: IF XIF ; IMMEDIATE : ELSE XELSE ; IMMEDIATE
: AGAIN XAGAIN ; IMMEDIATE : UNTIL XUNTIL ; IMMEDIATE
: LIT" XLIT" ; IMMEDIATE : W" XW" ; IMMEDIATE
: LITN XLITN ;
: IMMEDIATE XIMM ;
: (entry) (xentry) ; : CREATE XCREATE ;
: CONSTANT XCONSTANT ;
: :* X:* ; : :** X:** ;
: : [ ' X: , ] ;
CURRENT @ XCURRENT !
( ----- 210 )
( Core Forth words. See doc/cross.txt.
  Load range low: B210-B231 high: B236-B239 )
: RAM+ [ SYSVARS LITN ] + ; : BIN+ [ BIN( @ LITN ] + ;
SYSVARS 0x02 + CONSTANT CURRENT
SYSVARS 0x04 + CONSTANT H
SYSVARS 0x0c + CONSTANT C<*
SYSVARS 0x41 + CONSTANT IOERR
: HERE H @ ;
( ----- 211 )
: > SWAP < ; : 0< 0x7fff > ; : >= < NOT ; : <= > NOT ;
: =><= ( n l h -- f ) OVER - ROT> ( h n l ) - >= ;
: 2DUP OVER OVER ; : 2DROP DROP DROP ;
: NIP SWAP DROP ; : TUCK SWAP OVER ;
: -^ SWAP - ;
: C@+ ( a -- a+1 c ) DUP C@ SWAP 1+ SWAP ;
: C!+ ( c a -- a+1 ) TUCK C! 1+ ;
: LEAVE R> R> DROP I 1- >R >R ; : UNLOOP R> 2R> 2DROP >R ;
( ----- 212 )
: +! TUCK @ + SWAP ! ;
: *! ( addr alias -- ) 1+ ! ;
: **! ( addr ialias -- ) 1+ @ ! ;
: / /MOD NIP ;
: MOD /MOD DROP ;
: ALLOT H +! ;
: FILL ( a n b -- )
    ROT> OVER ( b a n a ) + SWAP ( b a+n a ) DO ( b )
        DUP I C! LOOP DROP ;
: ALLOT0 ( n -- ) HERE OVER 0 FILL ALLOT ;
( ----- 213 )
SYSVARS 0x53 + :** EMIT
: STYPE C@+ ( a len ) 0 DO C@+ EMIT LOOP DROP ;
: EOT 0x4 ; : BS 0x8 ; : LF 0xa ; : CR 0xd ; : SPC 0x20 ;
: SPC> SPC EMIT ;
: NL> 0x50 RAM+ C@ ?DUP IF EMIT ELSE CR EMIT LF EMIT THEN ;
: EOT? EOT = ;
: ERR STYPE ABORT ;
: (uflw) LIT" stack underflow" ERR ;
XCURRENT @ _xapply ORG @ 0x06 ( stable ABI uflw ) + T!
: (oflw) LIT" stack overflow" ERR ;
XCURRENT @ _xapply ORG @ 0x13 ( stable ABI oflw ) + T!
: (wnf) STYPE LIT"  word not found" ERR ;
( ----- 214 )
: . ( n -- )
    ?DUP NOT IF '0' EMIT EXIT THEN ( 0 is a special case )
    DUP 0< IF '-' EMIT -1 * THEN
    0xff SWAP ( stop indicator ) BEGIN
        10 /MOD ( r q ) SWAP '0' + SWAP ( d q ) ?DUP NOT UNTIL
    BEGIN EMIT DUP '9' > UNTIL DROP ;
: ? @ . ;
: _ DUP 9 > IF 10 - 'a' + ELSE '0' + THEN ;
( For hex display, there are no negatives )
: .x 0xff AND 16 /MOD ( l h ) _ EMIT _ EMIT ;
: .X |M .x .x ;
( ----- 215 )
( Parse digit c and accumulate into result r.
  Flag f is true when c was a valid digit )
: _pdacc ( r c -- r f )
    '0' - DUP 10 < IF ( good, add to running result )
        SWAP 10 * + 1 ( r*10+n f )
        ELSE ( bad ) DROP 0 THEN ;
: _pd ( s -- n f, parse decimal )
    C@+ OVER C@ 0 ( a len firstchar startat )
( if we have '-', we only advance. more processing later. )
    SWAP '-' = IF 1+ THEN ( a len startat )
    0 ROT> ( len ) ( startat ) DO ( a r )
        OVER I + C@ ( a r c ) _pdacc ( a r f )
        NOT IF DROP 1- 0 UNLOOP EXIT THEN LOOP ( a r )
( if we had '-', we need to invert result. )
    SWAP C@ '-' = IF 0 -^ THEN 1 ( r 1 ) ;
( ----- 216 )
: _pref ( s p -- s len-or-0 )
  1+ OVER 1+ 2 []= NOT IF 0 EXIT THEN ( s )
  DUP C@ DUP 3 < IF DROP 0 EXIT THEN ;
: _ph ( s -- n f, parse hex )
  LIT" 0x" _pref DUP IF ( s len )
    0 SWAP 1+ ( len+1 ) 3 DO ( s r )
      4 LSHIFT ( s r*16 ) OVER I + C@ ( s r c )
      '0' - DUP 9 > IF 0x31 ( 'a'-'0' ) - DUP 6 < IF
      10 + ELSE 2DROP 0 UNLOOP EXIT THEN THEN ( s r n )
      + ( s r+n ) LOOP NIP 1 THEN ;
( ----- 217 )
: _pb ( s -- n f, parse binary )
  LIT" 0b" _pref DUP IF ( s len )
    0 SWAP 1+ ( len+1 ) 3 DO ( s r )
      1 LSHIFT ( s r*2 ) OVER I + C@ ( s r c )
      '0' - DUP 1 > IF 2DROP 0 UNLOOP EXIT THEN ( s r n )
      + ( s r+n ) LOOP NIP 1 THEN ;
: _pc ( a -- n f, parse character )
	DUP C@+ 3 = IF ( a a+1 ) C@+ ''' = IF ( a a+2 )
        DUP 1+ C@ ''' = IF C@ NIP 1 EXIT THEN THEN THEN
	DROP 0 ;
: (parse) ( a -- n )
    _pc IF EXIT THEN _ph IF EXIT THEN
    _pb IF EXIT THEN _pd IF EXIT THEN (wnf) ;
( ----- 218 )
SYSVARS 0x55 + :** KEY?
: KEY> [ SYSVARS 0x51 + LITN ] C! ;
: KEY [ SYSVARS 0x51 + LITN ] C@ ?DUP IF 0 KEY>
    ELSE BEGIN KEY? UNTIL THEN ;
: BS? DUP 0x7f ( DEL ) = SWAP BS = OR ;
SYSVARS 0x30 + CONSTANT IN> ( current position in INBUF )
SYSVARS 0x60 + CONSTANT IN( ( points to INBUF )
: IN$ 0 IN( DUP IN> ! ! ; ( flush input buffer )
( ----- 219 )
: RDLN ( Read 1 line in input buff and make IN> point to it )
  IN$ BEGIN
  ( buffer overflow? same as if we typed a newline )
  IN> @ IN( - 0x3e = IF CR ELSE KEY THEN ( c )
  DUP BS? IF
    IN> @ IN( > IF -1 IN> +! BS EMIT THEN SPC> BS EMIT
  ELSE DUP LF = IF DROP CR THEN ( same as CR )
    DUP SPC >= IF DUP EMIT ( echo back ) THEN
    DUP IN> @ C!+ IN> ! THEN ( c )
  DUP CR = SWAP EOT? OR UNTIL 0 IN> @ C! IN( IN> ! ;
: RDLN<
  IN> @ C@ ( c )
  DUP IF ( not EOL? good, inc and return ) 1 IN> +!
  ELSE ( EOL ? readline. we still return null though )
    SPC> LIT" ok" STYPE NL> RDLN NL>
  THEN ( c ) ;
( ----- 220 )
: C< C<* @ ?DUP NOT IF RDLN< ELSE EXECUTE THEN ;
: , HERE ! 2 ALLOT ;
: C, HERE C! 1 ALLOT ;
: ,"
    BEGIN
        C< DUP 34 ( ASCII " ) = IF DROP EXIT THEN C,
    AGAIN ;
: EOT, EOT C, ;
: WS? SPC <= ;

: TOWORD ( -- c, c being the first letter of the word )
    0 ( dummy ) BEGIN
        DROP C< DUP WS? NOT OVER EOT? OR UNTIL ;
( ----- 221 )
( Read word from C<, copy to WORDBUF, null-terminate, and
  return WORDBUF. )
SYSVARS 0x0e + CONSTANT _wb
: _eot EOT 1 _wb C!+ C! _wb ;
: WORD ( -- a )
    [ SYSVARS 0x32 + ( WORD LIT ) LITN ] @ ?DUP IF
        0 [ SYSVARS 0x32 + LITN ] ! EXIT THEN
    _wb 1+ TOWORD ( a c )
    DUP EOT? IF 2DROP _eot EXIT THEN
    BEGIN
        OVER C! 1+ C< ( a c )
        OVER 0x2e RAM+ = OVER WS? OR UNTIL ( a c )
    SWAP _wb - 1- ( ws len ) _wb C!
    EOT? IF _eot ELSE _wb THEN ;
: IMMEDIATE CURRENT @ 1- DUP C@ 128 OR SWAP C! ;
( ----- 222 )
: MOVE ( a1 a2 u -- )
    ?DUP IF ( u ) 0 DO ( a1 a2 )
        OVER I + C@ ( src dst x )
        OVER I + ( src dst x dst )
        C! ( src dst )
    LOOP THEN 2DROP ;
: MOVE- ( a1 a2 u -- )
    ?DUP IF ( u ) 0 DO ( a1 a2 )
        OVER I' + I - 1- C@ ( src dst x )
        OVER I' + I - 1- ( src dst x dst )
        C! ( src dst )
    LOOP THEN 2DROP ;
: MOVE, ( a u -- ) HERE OVER ALLOT SWAP MOVE ;
( ----- 223 )
: (entry) WORD
    C@+ ( w+1 len ) TUCK MOVE, ( len )
    ( write prev value )
    HERE CURRENT @ - ,
    C, ( write size )
    HERE CURRENT ! ;
: CREATE (entry) 2 ( cellWord ) C, ;
: VARIABLE CREATE 2 ALLOT ;
: :* ( addr -- ) (entry) 4 ( alias ) C, , ;
: :** ( addr -- ) (entry) 5 ( ialias ) C, , ;
( ----- 224 )
: '? WORD FIND ;
: ' '? NOT IF (wnf) THEN ;
: FORGET
    ' DUP ( w w )
    ( HERE must be at the end of prev's word, that is, at the
      beginning of w. )
    DUP 1- C@ ( name len field )
    0x7f AND  ( remove IMMEDIATE flag )
    3 +       ( fixed header len )
    - H !     ( w )
    ( get prev addr ) 3 - DUP @ - CURRENT ! ;
: EMPTY LIT" _sys" FIND IF DUP H ! CURRENT ! THEN ;
( ----- 225 )
: DOES> CURRENT @ ( cur )
    3 ( does ) OVER C! ( make CURRENT into a DOES )
    1+ DUP ( pfa pfa )
    ( move PFA by 2 ) HERE OVER - ( pfa pfa u )
    OVER 2 + SWAP MOVE- 2 ALLOT
    ( Write DOES> pointer ) R> SWAP ( does-addr pfa ) !
    ( Because we've popped RS, we'll exit parent definition ) ;
: CONSTANT (entry) 6 ( constant ) C, , ;
: S= ( s1 s2 -- f ) C@+ ( s1 s2 l2 ) ROT C@+ ( s2 l2 s1 l1 )
    ROT OVER = IF ( same len, s2 s1 l ) []=
    ELSE DROP 2DROP 0 THEN ;
: [IF] IF EXIT THEN LIT" [THEN]" BEGIN DUP WORD S= UNTIL DROP ;
: [THEN] ;
( ----- 226 )
( n -- Fetches block n and write it to BLK( )
SYSVARS 0x34 + :** BLK@*
( n -- Write back BLK( to storage at block n )
SYSVARS 0x36 + :** BLK!*
( Current blk pointer -1 means "invalid" )
SYSVARS 0x38 + CONSTANT BLK>
( Whether buffer is dirty )
SYSVARS 0x3a + CONSTANT BLKDTY
: BLK( 0x3c RAM+ @ ;
: BLK) BLK( 1024 + ;
: BLK$
    HERE 0x3c ( BLK(* ) RAM+ !
    1024 ALLOT
    ( LOAD detects end of block with ASCII EOT. This is why
      we write it there. )
    EOT, 0 BLKDTY ! -1 BLK> ! ;
( ----- 227 )
: BLK! ( -- ) BLK> @ BLK!* 0 BLKDTY ! ;
: FLUSH BLKDTY @ IF BLK! THEN -1 BLK> ! ;
: BLK@ ( n -- )
    DUP BLK> @ = IF DROP EXIT THEN
    FLUSH DUP BLK> ! BLK@* ;
: BLK!! 1 BLKDTY ! ;
: WIPE BLK( 1024 0 FILL BLK!! ;
: COPY ( src dst -- )
    FLUSH SWAP BLK@ BLK> ! BLK! ;
( ----- 228 )
: _ ( a -- a+8 )
    DUP ( a a )
    ':' EMIT DUP .x SPC>
    4 0 DO DUP @ |L .x .x SPC> 2 + LOOP
    DROP ( a )
    8 0 DO
        C@+ DUP SPC 0x7e =><= NOT IF DROP '.' THEN EMIT
    LOOP NL> ;
: DUMP ( n a -- )
    SWAP 8 /MOD SWAP IF 1+ THEN
    0 DO _ LOOP DROP ;
( ----- 229 )
: LIST
    BLK@
    16 0 DO
        I 1+ DUP 10 < IF SPC> THEN . SPC>
        64 I * BLK( + DUP 64 + SWAP DO
            I C@ DUP 0x1f > IF EMIT ELSE DROP LEAVE THEN
        LOOP
        NL>
    LOOP ;
( ----- 230 )
: INTERPRET BEGIN
    WORD DUP 1+ C@ EOT? IF DROP EXIT THEN
    FIND NOT IF (parse) ELSE EXECUTE THEN AGAIN ;
SYSVARS 0x2e + CONSTANT MEM<*
( Read char from MEM<* and inc it. )
: MEM<
    MEM<* @ C@+ ( a+1 c )
    SWAP MEM<* ! ( c ) ;
( ----- 231 )
: LOAD
( save restorable variables to RSP. to allow for nested LOADs,
  we save/restore BLKs, but only when C<* is 0, that is, then
  RDLN< is active. )
    C<* @ IF BLK> @ >R THEN
    C<* @ >R MEM<* @ >R
    BLK@ BLK( MEM<* ! ( Point to beginning of BLK )
    ['] MEM< C<* !
    INTERPRET
    R> MEM<* ! R> C<* !
    C<* @ IF R> BLK@ THEN ;
: LOAD+ BLK> @ + LOAD ;
( b1 b2 -- )
: LOADR 1+ SWAP DO I DUP . SPC> LOAD LOOP ;
: LOADR+ BLK> @ + SWAP BLK> @ + SWAP LOADR ;
( ----- 236 )
( Forth core high )
: (main) 0 C<* ! IN$ INTERPRET BYE ;
XCURRENT @ _xapply ORG @ 0x0a ( stable ABI (main) ) + T!
: BOOT
    CURRENT @ MEM<* !
    0 IOERR C!
    0 [ SYSVARS 0x50 + LITN ] ! ( NL> + KEY> )
    0 [ SYSVARS 0x32 + LITN ] ! ( WORD LIT )
    ['] (emit) ['] EMIT **! ['] (key?) ['] KEY? **!
    ['] MEM< C<* !
    INTERPRET
    W" _sys" (entry)
    LIT" Collapse OS" STYPE (main) ;
XCURRENT @ _xapply ORG @ 0x04 ( stable ABI BOOT ) + T!
( ----- 237 )
( Now we have "as late as possible" stuff. See bootstrap doc. )
: _bchk DUP 0x7f + 0xff > IF LIT" br ovfl" STYPE ABORT THEN ;
: DO COMPILE 2>R HERE ; IMMEDIATE
: LOOP COMPILE (loop) HERE - _bchk C, ; IMMEDIATE
( LEAVE is implemented in low xcomp )
: LITN DUP 0xff > IF COMPILE (n) , ELSE COMPILE (b) C, THEN ;
: :
  (entry) 1 ( compiled ) C, BEGIN
      WORD DUP LIT" ;" S= IF DROP COMPILE EXIT EXIT THEN
      FIND IF ( is word )
      DUP 1- C@ 0x80 AND ( imm? ) IF EXECUTE ELSE , THEN
      ELSE ( maybe number ) (parse) LITN THEN
  AGAIN ;
( ----- 238 )
: IF ( -- a | a: br cell addr )
    COMPILE (?br) HERE 1 ALLOT ( br cell allot ) ; IMMEDIATE
: THEN ( a -- | a: br cell addr )
    DUP HERE -^ _bchk SWAP ( a-H a ) C! ; IMMEDIATE
: ELSE ( a1 -- a2 | a1: IF cell a2: ELSE cell )
    COMPILE (br) 1 ALLOT [COMPILE] THEN
    HERE 1- ( push a. 1- for allot offset ) ; IMMEDIATE
: ( BEGIN LIT" )" WORD S= UNTIL ;
    ( no more comment from here ) IMMEDIATE
: LIT"
    COMPILE (s) HERE 0 C, ,"
    DUP HERE -^ 1- SWAP C! ; IMMEDIATE
: W"
    [COMPILE] LIT" [ SYSVARS 0x32 + LITN ] LITN
    COMPILE ! ; IMMEDIATE
( ----- 239 )
: ." [COMPILE] LIT" COMPILE STYPE ; IMMEDIATE
: ABORT" [COMPILE] ." COMPILE ABORT ; IMMEDIATE
: BEGIN HERE ; IMMEDIATE
: AGAIN COMPILE (br) HERE - _bchk C, ; IMMEDIATE
: UNTIL COMPILE (?br) HERE - _bchk C, ; IMMEDIATE
: [ INTERPRET ; IMMEDIATE
: ] R> DROP ;
: COMPILE ' LITN ['] , , ; IMMEDIATE
: [COMPILE] ' , ; IMMEDIATE
: ['] ' LITN ; IMMEDIATE
( ----- 240 )
( Grid subsystem. See doc/grid.txt. Load range: B240-B241 )
: XYPOS [ GRID_MEM LITN ] ; : XYMODE [ GRID_MEM LITN ] 2 + ;
'? CURSOR! NIP NOT [IF] : CURSOR! 2DROP ; [THEN]
: XYPOS! COLS LINES * MOD DUP XYPOS @ CURSOR! XYPOS ! ;
: AT-XY ( x y -- ) COLS * + XYPOS! ;
'? NEWLN NIP NOT [IF]
: NEWLN ( ln -- ) COLS * DUP COLS + SWAP DO SPC I CELL! LOOP ;
[THEN]
: _lf XYMODE C@ IF EXIT THEN
    XYPOS @ COLS / 1+ LINES MOD DUP NEWLN
    COLS * XYPOS! ;
: _bs SPC XYPOS @ TUCK CELL! ( pos ) 1- XYPOS! ;
( ----- 241 )
: (emit)
    DUP BS? IF DROP _bs EXIT THEN
    DUP CR = IF DROP _lf EXIT THEN
    DUP SPC < IF DROP EXIT THEN
    XYPOS @ CELL!
    XYPOS @ 1+ DUP COLS MOD IF XYPOS! ELSE DROP _lf THEN ;
: GRID$ 0 XYPOS ! 0 XYMODE C! ;
( ----- 245 )
PS/2 keyboard subsystem

Provides (key?) from a driver providing the PS/2 protocol. That
is, for a driver taking care of providing all key codes emanat-
ing from a PS/2 keyboard, this subsystem takes care of mapping
those keystrokes to ASCII characters. This code is designed to
be cross-compiled and loaded with drivers.

Requires PS2_MEM to be defined.

Load range: 246-249
( ----- 246 )
: PS2_SHIFT [ PS2_MEM LITN ] ;
: PS2$ 0 PS2_SHIFT C! ;

( A list of the values associated with the 0x80 possible scan
codes of the set 2 of the PS/2 keyboard specs. 0 means no
value. That value is a character that can be read in (key?)
No make code in the PS/2 set 2 reaches 0x80. )
CREATE PS2_CODES
( 00 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C,
( 08 ) 0 C, 0 C, 0 C, 0 C, 0 C, 9 C, '`' C, 0 C,
( 10 ) 0 C, 0 C, 0 C, 0 C, 0 C, 'q' C, '1' C, 0 C,
( I don't know why, but the key 2 is sent as 0x1f by 2 of my
  keyboards. Is it a timing problem on the ATtiny? TODO )
( 18 ) 0 C, 0 C, 'z' C, 's' C, 'a' C, 'w' C, '2' C, '2' C,
( 20 ) 0 C, 'c' C, 'x' C, 'd' C, 'e' C, '4' C, '3' C, 0 C,
( 28 ) 0 C, 32 C, 'v' C, 'f' C, 't' C, 'r' C, '5' C, 0 C,
( ----- 247 )
( 30 ) 0 C, 'n' C, 'b' C, 'h' C, 'g' C, 'y' C, '6' C, 0 C,
( 38 ) 0 C, 0 C, 'm' C, 'j' C, 'u' C, '7' C, '8' C, 0 C,
( 40 ) 0 C, ',' C, 'k' C, 'i' C, 'o' C, '0' C, '9' C, 0 C,
( 48 ) 0 C, '.' C, '/' C, 'l' C, ';' C, 'p' C, '-' C, 0 C,
( 50 ) 0 C, 0 C, ''' C, 0 C, '[' C, '=' C, 0 C, 0 C,
( 58 ) 0 C, 0 C, 13 C, ']' C, 0 C, '\' C, 0 C, 0 C,
( 60 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 8 C, 0 C,
( 68 ) 0 C, '1' C, 0 C, '4' C, '7' C, 0 C, 0 C, 0 C,
( 70 ) '0' C, '.' C, '2' C, '5' C, '6' C, '8' C, 27 C, 0 C,
( 78 ) 0 C, 0 C, '3' C, 0 C, 0 C, '9' C, 0 C, 0 C,
( Same values, but shifted )
( 00 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C,
( 08 ) 0 C, 0 C, 0 C, 0 C, 0 C, 9 C, '~' C, 0 C,
( 10 ) 0 C, 0 C, 0 C, 0 C, 0 C, 'Q' C, '!' C, 0 C,
( 18 ) 0 C, 0 C, 'Z' C, 'S' C, 'A' C, 'W' C, '@' C, '@' C,
( 20 ) 0 C, 'C' C, 'X' C, 'D' C, 'E' C, '$' C, '#' C, 0 C,
( ----- 248 )
( 28 ) 0 C, 32 C, 'V' C, 'F' C, 'T' C, 'R' C, '%' C, 0 C,
( 30 ) 0 C, 'N' C, 'B' C, 'H' C, 'G' C, 'Y' C, '^' C, 0 C,
( 38 ) 0 C, 0 C, 'M' C, 'J' C, 'U' C, '&' C, '*' C, 0 C,
( 40 ) 0 C, '<' C, 'K' C, 'I' C, 'O' C, ')' C, '(' C, 0 C,
( 48 ) 0 C, '>' C, '?' C, 'L' C, ':' C, 'P' C, '_' C, 0 C,
( 50 ) 0 C, 0 C, '"' C, 0 C, '{' C, '+' C, 0 C, 0 C,
( 58 ) 0 C, 0 C, 13 C, '}' C, 0 C, '|' C, 0 C, 0 C,
( 60 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 8 C, 0 C,
( 68 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C,
( 70 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 27 C, 0 C,
( 78 ) 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C,
( ----- 249 )
: _shift? ( kc -- f ) DUP 0x12 = SWAP 0x59 = OR ;
: (key?) ( -- c? f )
    (ps2kc) DUP NOT IF EXIT THEN ( kc )
    DUP 0xe0 ( extended ) = IF ( ignore ) DROP 0 EXIT THEN
    DUP 0xf0 ( break ) = IF DROP ( )
        ( get next kc and see if it's a shift )
        BEGIN (ps2kc) ?DUP UNTIL ( kc )
        _shift? IF ( drop shift ) 0 PS2_SHIFT C! THEN
        ( whether we had a shift or not, we return the next )
        0 EXIT THEN
    DUP 0x7f > IF DROP 0 EXIT THEN
    DUP _shift? IF DROP 1 PS2_SHIFT C! 0 EXIT THEN
    ( ah, finally, we have a gentle run-of-the-mill KC )
    PS2_CODES PS2_SHIFT C@ IF 0x80 + THEN + C@ ( c, maybe 0 )
    ?DUP ( c? f ) ;
( ----- 250 )
( SD Card subsystem Load range: B250-B258 )
: _idle ( -- n ) 0xff (spix) ;

( spix 0xff until the response is something else than 0xff
  for a maximum of 20 times. Returns 0xff if no response. )
: _wait ( -- n )
    0 ( dummy ) 20 0 DO
        DROP _idle DUP 0xff = NOT IF LEAVE THEN LOOP ;
( ----- 251 )
( The opposite of sdcWaitResp: we wait until response is 0xff.
  After a successful read or write operation, the card will be
  busy for a while. We need to give it time before interacting
  with it again. Technically, we could continue processing on
  our side while the card it busy, and maybe we will one day,
  but at the moment, I'm having random write errors if I don't
  do this right after a write, so I prefer to stay cautious
  for now. )
: _ready ( -- ) BEGIN _idle 0xff = UNTIL ;
( ----- 252 )
( Computes n into crc c with polynomial 0x09
  Note that the result is "left aligned", that is, that 8th
  bit to the "right" is insignificant (will be stop bit). )
: _crc7 ( c n -- c )
    XOR           ( c )
    8 0 DO
        2 *       ( <<1 )
        DUP 255 > IF
            ( MSB was set, apply polynomial )
            0xff AND
            0x12 XOR  ( 0x09 << 1, we apply CRC on high bits )
        THEN
    LOOP ;
( send-and-crc7 )
: _s+crc ( n c -- c ) SWAP DUP (spix) DROP _crc7 ;
( ----- 253 )
( cmd arg1 arg2 -- resp )
( Sends a command to the SD card, along with arguments and
  specified CRC fields. (CRC is only needed in initial commands
  though). This does *not* handle CS. You have to
  select/deselect the card outside this routine. )
: _cmd
    _wait DROP ROT    ( a1 a2 cmd )
    0 _s+crc          ( a1 a2 crc )
    ROT |M ROT        ( a2 h l crc )
    _s+crc _s+crc     ( a2 crc )
    SWAP |M ROT       ( h l crc )
    _s+crc _s+crc     ( crc )
    1 OR              ( ensure stop bit )
    (spix) DROP       ( send CRC )
    _wait  ( wait for a valid response... ) ;
( ----- 254 )
( cmd arg1 arg2 -- r )
( Send a command that expects a R1 response, handling CS. )
: SDCMDR1 [ SDC_DEVID LITN ] (spie) _cmd 0 (spie) ;

( cmd arg1 arg2 -- r arg1 arg2 )
( Send a command that expects a R7 response, handling CS. A R7
  is a R1 followed by 4 bytes. arg1 contains bytes 0:1, arg2
  has 2:3 )
: SDCMDR7
    [ SDC_DEVID LITN ] (spie)
    _cmd                 ( r )
    _idle 8 LSHIFT _idle +  ( r arg1 )
    _idle 8 LSHIFT _idle +  ( r arg1 arg2 )
    0 (spie)
;
( ----- 255 )
: _err 0 (spie) LIT" SDerr" ERR ;

( Tight definition ahead, pre-comment.

  Initialize a SD card. This should be called at least 1ms
  after the powering up of the card. We begin by waking up the
  SD card. After power up, a SD card has to receive at least
  74 dummy clocks with CS and DI high. We send 80.
  Then send cmd0 for a maximum of 10 times, success is when
  we get 0x01. Then comes the CMD8. We send it with a 0x01aa
  argument and expect a 0x01aa argument back, along with a
  0x01 R1 response. After that, we need to repeatedly run
  CMD55+CMD41 (0x40000000) until the card goes out of idle
  mode, that is, when it stops sending us 0x01 response and
  send us 0x00 instead. Any other response means that
  initialization failed. )
( ----- 256 )
: SDC$
    10 0 DO _idle DROP LOOP
    0 ( dummy ) 10 0 DO  ( r )
        DROP 0x40 0 0 SDCMDR1  ( CMD0 )
        1 = DUP IF LEAVE THEN
    LOOP NOT IF _err THEN
    0x48 0 0x1aa ( CMD8 ) SDCMDR7 ( r arg1 arg2 )
    ( expected 1 0 0x1aa )
    0x1aa = ROT ( arg1 f r ) 1 = AND SWAP ( f&f arg1 )
    NOT ( 0 expected ) AND ( f&f&f ) NOT IF _err THEN
    BEGIN
        0x77 0 0 SDCMDR1  ( CMD55 )
        1 = NOT IF _err THEN
        0x69 0x4000 0 SDCMDR1  ( CMD41 )
        DUP 1 > IF _err THEN
    NOT UNTIL ; ( out of idle mode, success! )
( ----- 257 )
: _ ( dstaddr blkno -- )
    [ SDC_DEVID LITN ] (spie)
    0x51 ( CMD17 ) 0 ROT ( a cmd 0 blkno ) _cmd
    IF _err THEN
    _wait 0xfe = NOT IF _err THEN
    0 SWAP ( crc a ) 512 0 DO ( crc a )
        _idle ( crc a n ) DUP ROT C!+ ( crc n a+1 )
        ROT> CRC16 ( a+1 crc ) SWAP LOOP ( crc a+1 )
    DROP ( crc1 )
    _idle 8 LSHIFT _idle + ( crc2 )
    _wait DROP 0 (spie) = NOT IF _err THEN ;
: SDC@ ( blkno -- )
    2 * DUP BLK( SWAP ( b a b ) _
    1+ BLK( 512 + SWAP _ ;
( ----- 258 )
: _ ( srcaddr blkno -- )
    [ SDC_DEVID LITN ] (spie)
    0x58 ( CMD24 ) 0 ROT ( a cmd 0 blkno ) _cmd
    IF _err THEN
    _idle DROP 0xfe (spix) DROP 0 SWAP ( crc a )
    512 0 DO ( crc a )
        C@+ ( crc a+1 n ) ROT OVER ( a n crc n )
        CRC16 ( a n crc ) SWAP ( a crc n )
        (spix) DROP ( a crc ) SWAP LOOP ( crc a )
    DROP ( crc ) |M ( lsb msb )
    (spix) DROP (spix) DROP
    _wait DROP _ready 0 (spie) ;
: SDC! ( blkno -- )
    2 * DUP BLK( SWAP ( b a b ) _
    1+ BLK( 512 + SWAP _ ;
( ----- 260 )
Fonts

Fonts are kept in "source" form in the following blocks and
then compiled to binary bitmasks by the following code. In
source form, fonts are a simple sequence of '.' and 'X'. '.'
means empty, 'X' means filled. Glyphs are entered one after the
other, starting at 0x21 and ending at 0x7e. To be space
efficient in blocks, we align glyphs horizontally in the blocks
to fit as many character as we can. For example, a 5x7 font
would mean that we would have 12x2 glyphs per block.

261 Font compiler              265 3x5 font
267 5x7 font                   271 7x7 font
( ----- 261 )
( Converts "dot-X" fonts to binary "glyph rows". One byte for
  each row. In a 5x7 font, each glyph thus use 7 bytes.
  Resulting bytes are aligned to the left of the byte.
  Therefore, for a 5-bit wide char, "X.X.X" translates to
  0b10101000. Left-aligned bytes are easier to work with when
  compositing glyphs. )
( ----- 262 )
VARIABLE _w VARIABLE _h
: _g ( given a top-left of dot-X in BLK(, spit H bin lines )
    _h @ 0 DO
    0 _w @ 0 DO ( a r )
        1 LSHIFT
        OVER J 64 * I + + C@ 'X' = IF 1+ THEN
    LOOP 8 _w @ - LSHIFT C, LOOP DROP ;
: _l ( a u -- a, spit a line of u glyphs )
    ( u ) 0 DO ( a )
        DUP I _w @ * + _g
    LOOP ;
( ----- 263 )
: CPFNT3x5 3 _w ! 5 _h !
    _h @ ALLOT0 ( space char )
    265 BLK@ BLK( 21 _l 320 + 21 _l 320 + 21 _l DROP ( 63 )
    266 BLK@ BLK( 21 _l 320 + 10 _l DROP ( 94! ) ;
: CPFNT5x7 5 _w ! 7 _h !
    _h @ ALLOT0 ( space char )
    270 267 DO I BLK@ BLK( 12 _l 448 + 12 _l DROP LOOP ( 72 )
    270 BLK@ BLK( 12 _l 448 + 10 _l DROP ( 94! ) ;
: CPFNT7x7 7 _w ! 7 _h !
    _h @ ALLOT0 ( space char )
    276 271 DO I BLK@ BLK( 9 _l 448 + 9 _l DROP LOOP ( 90 )
    276 BLK@ BLK( 4 _l DROP ( 94! ) ;
( ----- 265 )
.X.X.XX.X.XXX...X..X...XX...X...............X.X..X.XX.XX.X.XXXX
.X.X.XXXXXX...XX.X.X..X..X.XXX.X............XX.XXX...X..XX.XX..
.X........XX.X..X.....X..X..X.XXX...XXX....X.X.X.X..X.XX.XXXXX.
......XXXXX.X..X.X....X..X.X.X.X..X.......X..X.X.X.X....X..X..X
.X....X.X.X...X.XX.....XX........X......X.X...X.XXXXXXXX...XXX.
.XXXXXXXXXXX........X...X..XX..X..X.XX..XXXX.XXXXXX.XXX.XXXXXXX
X....XX.XX.X.X..X..X.XXX.X...XXXXX.XX.XX..X.XX..X..X..X.X.X...X
XXX.X.XXXXXX......X.......X.X.XXXXXXXX.X..X.XXX.XX.X.XXXX.X...X
X.XX..X.X..X.X..X..X.XXX.X....X..X.XX.XX..X.XX..X..X.XX.X.X...X
XXXX..XXXXX....X....X...X...X..XXX.XXX..XXXX.XXXX...XXX.XXXXXX.
X.XX..X.XXX.XXXXX.XXXXX..XXXXXX.XX.XX.XX.XX.XXXXXXXX..XXX.X....
XX.X..XXXX.XX.XX.XX.XX.XX...X.X.XX.XX.XX.XX.X..XX..X....XX.X...
X..X..XXXX.XX.XXX.X.XXX..X..X.X.XX.XXXX.X..X..X.X...X...X......
XX.X..X.XX.XX.XX..XXXX.X..X.X.X.XX.XXXXX.X.X.X..X....X..X......
X.XXXXX.XX.XXXXX...XXX.XXX..X.XXX.X.X.XX.X.X.XXXXXX..XXXX...XXX
!"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_
( ----- 266 )
X.....X.......X....XX...X...X...XX..XX.......................X.
.X.XX.X...XX..X.X.X...X.X........X.X.X.X.XXX..X.XX..XX.XX.XXXXX
.....XXX.X...XXX.XXX.X.XXX..X...XXX..X.XXXX.XX.XX.XX.XX..XX..X.
...XXXX.XX..X.XXX.X...XXX.X.X...XX.X.X.X.XX.XX.XXX..XXX....X.X.
...XXXXX..XX.XX.XXX..XX.X.X.X.XX.X.X.XXX.XX.X.X.X....XX..XX..XX
...................XX.X.XX.....................................
X.XX.XX.XX.XX.XXXX.X..X..X..XX
X.XX.XX.X.X..X..XXX...X...XXX.
X.XX.XXXX.X..X.XX..X..X..X....
XXX.X.X.XX.X.X.XXX.XX.X.XX....
`abcdefghijklmnopqrstuvwxyz{|}~
( ----- 267 )
..X...X.X........X..............X....X....X.................
..X...X.X..X.X..XXXXX...X.XX....X...X......X.X.X.X..X.......
..X.......XXXXXX.......X.X..X......X........X.XXX...X.......
..X........X.X..XXX...X...XX.......X........XXXXXXXXXXX.....
..........XXXXX....X.X....XX.X.....X........X.XXX...X.......
..X........X.X.XXXX.X...XX..X.......X......X.X.X.X..X.....X.
..X..............X.......XXX.X.......X....X..............X..
................XXX...XX..XXX..XXX...XX.XXXXX.XXX.XXXXX.XXX.
..............XX...X.X.X.X...XX...X.X.X.X....X........XX...X
.............X.X..XX...X.....X....XX..X.XXXX.X........XX...X
XXXXX.......X..X.X.X...X....X...XX.XXXXX....XXXXX....X..XXX.
...........X...XX..X...X...X......X...X.....XX...X..X..X...X
......XX..X....X...X...X..X...X...X...X.X...XX...X.X...X...X
......XX........XXX..XXXXXXXXX.XXX....X..XXX..XXX.X.....XXX.
!"#$%&'()*+,-./012345678
( ----- 268 )
.XXX...............X.....X.....XXX..XXX..XXX.XXXX..XXX.XXXX.
X...X..X....X....XX.......XX..X...XX...XX...XX...XX...XX...X
X...X..X....X...XX..XXXXX..XX.....XX..XXX...XX...XX....X...X
.XXX...........X.............X...X.X..XXXXXXXXXXX.X....X...X
....X..X....X...XX..XXXXX..XX...X..X....X...XX...XX....X...X
....X..X...X.....XX.......XX.......X...XX...XX...XX...XX...X
.XXX...............X.....X......X...XXX.X...XXXXX..XXX.XXXX.
XXXXXXXXXX.XXX.X...X.XXX....XXX..X.X....X...XX...X.XXX.XXXX.
X....X....X...XX...X..X......XX.X..X....XX.XXXX..XX...XX...X
X....X....X....X...X..X......XXX...X....X.X.XXX..XX...XX...X
XXXX.XXXX.X..XXXXXXX..X......XX....X....X...XX.X.XX...XXXXX.
X....X....X...XX...X..X......XXX...X....X...XX..XXX...XX....
X....X....X...XX...X..X..X...XX.X..X....X...XX..XXX...XX....
XXXXXX.....XXX.X...X.XXX..XXX.X..X.XXXXXX...XX...X.XXX.X....
9:;<=>?@ABCDEFGHIJKLMNOP
( ----- 269 )
.XXX.XXXX..XXX.XXXXXX...XX...XX...XX...XX...XXXXXXXXX.......
X...XX...XX...X..X..X...XX...XX...XX...XX...XX...XX....X....
X...XX...XX......X..X...XX...XX...X.X.X..X.X....X.X.....X...
X...XXXXX..XXX...X..X...XX...XX...X..X....X....X..X......X..
X.X.XX.X......X..X..X...XX...XX.X.X.X.X...X...X...X.......X.
X..XXX..X.X...X..X..X...X.X.X.X.X.XX...X..X..X...XX........X
.XXXXX...X.XXX...X...XXX...X...X.X.X...X..X..XXXXXXXX.......
..XXX..X.........X..........................................
....X.X.X.........X.........................................
....XX...X...........XXX.X.....XXX.....X.XXX..XX....XXXX....
....X...................XX....X...X....XX...XX..X..X..XX....
....X................XXXXXXX..X......XXXXXXXXX......XXXXXX..
....X...............X...XX..X.X...X.X..XX....XXX......XX..X.
..XXX.....XXXXX......XXXXXXX...XXX...XXX.XXXXX......XX.X..X.
QRSTUVWXYZ[\]^_`abcdefgh
( ----- 270 )
............................................................
............................................................
..X......XX..X..XX...X.X.XXX...XXX.XXX....XXXX.XX..XXX..X...
..........X.X....X..X.X.XX..X.X...XX..X..X..XXX...X....XXX..
..X......XXX.....X..X...XX...XX...XXXX....XXXX.....XXX..X...
..X...X..XX.X....X..X...XX...XX...XX........XX........X.X...
..X....XX.X..X...XX.X...XX...X.XXX.X........XX.....XXX...XX.
................................XX...X...XX.......
...............................X.....X.....X......
X...XX...XX...XX...XX...XXXXXX.X.....X.....X..X.X.
X...XX...XX...X.X.X..X.X....X.X......X......XX.X..
X...XX...XX...X..X....X....X...X.....X.....X......
X...X.X.X.X.X.X.X.X..X....X....X.....X.....X......
.XXX...X...X.X.X...XX....XXXXX..XX...X...XX.......
ijklmnopqrstuvwxyz{|}~
( ----- 271 )
..XX....XX.XX..XX.XX....XX..XX......XXX......XX.....XX...XX....
..XX....XX.XX..XX.XX..XXXXXXXX..XX.XX.XX....XX.....XX.....XX...
..XX....XX.XX.XXXXXXXXX.X......XX..XX.XX...XX.....XX.......XX..
..XX...........XX.XX..XXXXX...XX....XXX...........XX.......XX..
..XX..........XXXXXXX...X.XX.XX....XX.XX.X........XX.......XX..
...............XX.XX.XXXXXX.XX..XX.XX..XX..........XX.....XX...
..XX...........XX.XX...XX.......XX..XXX.XX..........XX...XX....
...........................................XXXX....XX....XXXX..
..XX.....XX............................XX.XX..XX..XXX...XX..XX.
XXXXXX...XX...........................XX..XX.XXX...XX.......XX.
.XXXX..XXXXXX........XXXXXX..........XX...XXXXXX...XX......XX..
XXXXXX...XX.........................XX....XXX.XX...XX.....XX...
..XX.....XX.....XX............XX...XX.....XX..XX...XX....XX....
...............XX.............XX...........XXXX..XXXXXX.XXXXXX.
!"#$%&'()*+,-./012
( ----- 272 )
.XXXX.....XX..XXXXXX...XXX..XXXXXX..XXXX...XXXX................
XX..XX...XXX..XX......XX........XX.XX..XX.XX..XX...............
....XX..XXXX..XXXXX..XX........XX..XX..XX.XX..XX...XX.....XX...
..XXX..XX.XX......XX.XXXXX....XX....XXXX...XXXXX...XX.....XX...
....XX.XXXXXX.....XX.XX..XX..XX....XX..XX.....XX...............
XX..XX....XX..XX..XX.XX..XX..XX....XX..XX....XX....XX.....XX...
.XXXX.....XX...XXXX...XXXX...XX.....XXXX...XXX.....XX....XX....
...XX.........XX......XXXX...XXXX...XXXX..XXXXX...XXXX..XXXX...
..XX...........XX....XX..XX.XX..XX.XX..XX.XX..XX.XX..XX.XX.XX..
.XX....XXXXXX...XX......XX..XX.XXX.XX..XX.XX..XX.XX.....XX..XX.
XX...............XX....XX...XX.X.X.XXXXXX.XXXXX..XX.....XX..XX.
.XX....XXXXXX...XX.....XX...XX.XXX.XX..XX.XX..XX.XX.....XX..XX.
..XX...........XX...........XX.....XX..XX.XX..XX.XX..XX.XX.XX..
...XX.........XX.......XX....XXXX..XX..XX.XXXXX...XXXX..XXXX...
3456789:;<=>?@ABCD
( ----- 273 )
XXXXXX.XXXXXX..XXXX..XX..XX.XXXXXX..XXXXX.XX..XX.XX.....XX...XX
XX.....XX.....XX..XX.XX..XX...XX......XX..XX.XX..XX.....XXX.XXX
XX.....XX.....XX.....XX..XX...XX......XX..XXXX...XX.....XXXXXXX
XXXXX..XXXXX..XX.XXX.XXXXXX...XX......XX..XXX....XX.....XX.X.XX
XX.....XX.....XX..XX.XX..XX...XX......XX..XXXX...XX.....XX.X.XX
XX.....XX.....XX..XX.XX..XX...XX...XX.XX..XX.XX..XX.....XX...XX
XXXXXX.XX......XXXX..XX..XX.XXXXXX..XXX...XX..XX.XXXXXX.XX...XX
XX..XX..XXXX..XXXXX...XXXX..XXXXX...XXXX..XXXXXX.XX..XX.XX..XX.
XX..XX.XX..XX.XX..XX.XX..XX.XX..XX.XX..XX...XX...XX..XX.XX..XX.
XXX.XX.XX..XX.XX..XX.XX..XX.XX..XX.XX.......XX...XX..XX.XX..XX.
XXXXXX.XX..XX.XXXXX..XX..XX.XXXXX...XXXX....XX...XX..XX.XX..XX.
XX.XXX.XX..XX.XX.....XX.X.X.XX.XX......XX...XX...XX..XX.XX..XX.
XX..XX.XX..XX.XX.....XX.XX..XX..XX.XX..XX...XX...XX..XX..XXXX..
XX..XX..XXXX..XX......XX.XX.XX..XX..XXXX....XX....XXXX....XX...
EFGHIJKLMNOPQRSTUVWXYZ[\]^_
( ----- 274 )
XX...XXXX..XX.XX..XX.XXXXXX.XXXXX.........XXXXX....XX..........
XX...XXXX..XX.XX..XX.....XX.XX.....XX........XX...XXXX.........
XX.X.XX.XXXX..XX..XX....XX..XX......XX.......XX..XX..XX........
XX.X.XX..XX....XXXX....XX...XX.......XX......XX..X....X........
XXXXXXX.XXXX....XX....XX....XX........XX.....XX................
XXX.XXXXX..XX...XX...XX.....XX.........XX....XX................
XX...XXXX..XX...XX...XXXXXX.XXXXX.........XXXXX.........XXXXXXX
.XX...........XX................XX..........XXX.........XX.....
..XX..........XX................XX.........XX.....XXXX..XX.....
...XX...XXXX..XXXXX...XXXX...XXXXX..XXXX...XX....XX..XX.XXXXX..
...........XX.XX..XX.XX..XX.XX..XX.XX..XX.XXXXX..XX..XX.XX..XX.
........XXXXX.XX..XX.XX.....XX..XX.XXXXXX..XX.....XXXXX.XX..XX.
.......XX..XX.XX..XX.XX..XX.XX..XX.XX......XX........XX.XX..XX.
........XXXXX.XXXXX...XXXX...XXXXX..XXXX...XX.....XXX...XX..XX.
WXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~
( ----- 275 )
..XX.....XX...XX......XXX......................................
..............XX.......XX......................................
.XXX....XXX...XX..XX...XX....XX.XX.XXXXX...XXXX..XXXXX...XXXXX.
..XX.....XX...XX.XX....XX...XXXXXXXXX..XX.XX..XX.XX..XX.XX..XX.
..XX.....XX...XXXX.....XX...XX.X.XXXX..XX.XX..XX.XX..XX.XX..XX.
..XX.....XX...XX.XX....XX...XX.X.XXXX..XX.XX..XX.XXXXX...XXXXX.
.XXXX..XX.....XX..XX..XXXX..XX...XXXX..XX..XXXX..XX.........XX.
...............XX..............................................
...............XX..............................................
XX.XX...XXXXX.XXXXX..XX..XX.XX..XX.XX...XXXX..XX.XX..XX.XXXXXX.
XXX.XX.XX......XX....XX..XX.XX..XX.XX.X.XX.XXXX..XX..XX....XX..
XX......XXXX...XX....XX..XX.XX..XX.XX.X.XX..XX...XX..XX...XX...
XX.........XX..XX....XX..XX..XXXX..XXXXXXX.XXXX...XXXXX..XX....
XX.....XXXXX....XXX...XXXXX...XX....XX.XX.XX..XX.....XX.XXXXXX.
ijklmnopqrstuvwxyz{|}~
( ----- 276 )
...XX....XX...XX......XX...X
..XX.....XX....XX....XX.X.XX
..XX.....XX....XX....X...XX.
XXX......XX.....XXX.........
..XX.....XX....XX...........
..XX.....XX....XX...........
...XX....XX...XX............
{|}~
( ----- 280 )
( Z80 boot code. See doc/code/z80.txt Load range: B281-B300 )
VARIABLE lblexec VARIABLE lbluflw VARIABLE lbloflw?
( see comment at TICKS' definition )
( 7.373MHz target: 737t. outer: 37t inner: 16t )
( tickfactor = (737 - 37) / 16 )
CREATE tickfactor 44 ,
: chkPS, ( sz -- ) 2 * PS_ADDR -^ HL SWAP LDdi, SP SUBHLd,
  CC lbluflw @ JPc, ;
: OFLW? 0x52 ( oflw cnt ) IY+ DEC(IXY+), CZ lbloflw? @ CALLc, ;
( skip first EXDEHL, when IP is already in HL )
: ;CODEHL lblnext@ 1+ JP, ;
: CARRY! EXAFAF', SCF, EXAFAF', ;
( ----- 281 )
HERE ORG ! ( STABLE ABI )
JR, L1 FWR ( B282 ) NOP, NOP, ( unused ) NOP, NOP, ( 04, BOOT )
NOP, NOP, ( 06, uflw ) NOP, NOP, ( 08, LATEST )
NOP, NOP, ( 0a (main) ) 0 JP, ( 0c QUIT ) NOP,
0 JP, ( RST 10 )  NOP, NOP, ( 13, oflw ) NOP, NOP, NOP,
0 JP, ( RST 18 ) 5 ALLOT0
0 JP, ( RST 20 ) 5 ALLOT0
0 JP, ( RST 28 ) 5 ALLOT0
0 JP, ( RST 30 ) 5 ALLOT0
0 JP, ( RST 38 )
( ----- 282 )
L1 FSET ( B281 )
  SP PS_ADDR LDdi, IX RS_ADDR LDdi, IY SYSVARS LDdi,
  BIN( @ 0x08 ( LATEST ) + LDHL(i),
  SYSVARS 0x02 ( CURRENT ) + LD(i)HL,
HERESTART [IF] HL HERESTART LDdi, [THEN]
  SYSVARS 0x04 + LD(i)HL, ( +04 == HERE )
  BIN( @ 0x04 ( BOOT ) + LDHL(i),
  JR, L1 FWR ( execute, B283 )
lbloflw? BSET IX PUSH, EX(SP)HL, SP SUBHLd, IFC, ( no oflw )
  A XORr, L SUBr, ( neg ) A SRL, ( /2 ) A INCr,
  0x52 IY+ A LDIXYr, HL POP, RET, THEN,
  ( overflow! ) SP PS_ADDR LDdi, IX RS_ADDR LDdi,
  BIN( @ 0x13 ( oflw ) + LDHL(i), JR, L2 FWR ( execute, B283 )
lblnext BSET PC ORG @ 0xf + ! ( Stable ABI )
  EXDEHL, LDDE(HL), HL INCd, EXDEHL, ( continue to execute )
( ----- 283 )
lblexec BSET L1 FSET L2 FSET ( B282 ) ( HL -> wordref )
  A XORr, (HL) ORr, IFZ, ( native ) JP(HL), THEN,
  HL INCd, ( HL points to PFA )
  A DECr, IFNZ, ( not compiled )
  A DECr, IFZ, ( cell )
    HL PUSH, ( PFA ) JR, lblnext BWR THEN,
  A DECr, IFNZ, ( not does: alias, ialias or const )
  2 CPi, LDHL(HL), ( read PFA )
  JRC, ( alias ) lblexec BWR
  IFZ, ( ialias ) LDHL(HL), JR, lblexec BWR THEN,
  ( const ) HL PUSH, JR, lblnext BWR
  THEN, ( does )
  LDBC(HL), ( does addr ) HL INCd, HL PUSH, ( PFA )
  H B LDrr, L C LDrr, THEN, ( continue to compiledWord )
( ----- 284 )
( compiled word. HL --> wordref )
  IX INCd, IX INCd,
  0x52 ( oflw cnt ) IY+ DEC(IXY+), CZ lbloflw? @ CALLc,
  0 IX+ E LDIXYr, 1 IX+ D LDIXYr,
  LDDE(HL), HL INCd, ( DE -> wordref HL -> IP )
  EXDEHL, ( DE -> IP HL -> wordref )
  JR, lblexec BWR
lbluflw BSET BIN( @ 0x06 ( uflw ) + LDHL(i), JR, lblexec BWR
( ----- 285 )
( Native words )
HERE 4 + XCURRENT ! ( make next CODE have 0 prev field )
CODE QUIT
L1 BSET ( used in ABORT ) PC ORG @ 0xd + ! ( Stable ABI )
  IX RS_ADDR LDdi, BIN( @ 0x0a ( main ) + LDHL(i),
  JR, lblexec BWR
CODE ABORT SP PS_ADDR LDdi, JR, L1 BWR
CODE EXECUTE 1 chkPS, HL POP, JR, lblexec BWR
CODE BYE HALT,
CODE EXIT ( put new IP in HL instead of DE for speed )
    L 0 IX+ LDrIXY, H 1 IX+ LDrIXY, IX DECd, IX DECd, ;CODEHL
( ----- 286 )
CODE FIND ( w -- a f ) 1 chkPS, EXX, ( protect DE )
  HL POP, ( w ) HL PUSH, ( --> lvl 1 )
  A (HL) LDrr, ( wlen ) A ORr,
  ( special case. zero len? we never find anything. )
  IFZ, PUSH0, EXX, ;CODE THEN,
  DE SYSVARS 0x02 ( CURRENT ) + LDd(i),
  ( We hold HL by the *tail*. )
  C A LDrr, B 0 LDri, ( C holds our length )
  BC ADDHLd, HL INCd, ( HL points to after-last-char )
( ----- 287 )
  BEGIN, HL PUSH, ( --> lvl 2 ) DE PUSH, ( --> lvl 3 )
    DE DECd, LDA(DE), 0x7f ANDi, ( IMMEDIATE ) C CPr, IFZ,
      DE DECd, ( Skip prev field. One less because we pre-dec )
      DE DECd,
      B C LDrr, ( loop C times ) BEGIN,
        ( pre-decrement for easier Z matching )
        DE DECd, HL DECd,
        LDA(DE), (HL) CPr,
        JRNZ, L1 FWR ( break! )
      DJNZ, AGAIN, THEN, L1 FSET
( At this point, Z is set if we have a match. )
    DE POP, ( <-- lvl 3 ) IFZ, ( match, we're done! )
      HL POP, HL POP, ( <-- lvl 1-2 ) DE PUSH,
      PUSH1, EXX, OFLW? ;CODE THEN,
( ----- 288 )
    ( no match, go to prev and continue )
    DE DECd, DE DECd, DE DECd, ( prev field )
    DE PUSH, ( --> lvl 3 ) EXDEHL, LDDE(HL),
    ( DE contains prev offset )
    HL POP, ( <-- lvl 3, prev field )
    DEZ, IFNZ, ( offset not zero )
      ( carry cleared from "or e" in DEZ, )
      DE SBCHLd, EXDEHL, ( result in DE ) THEN,
    HL POP, ( <-- lvl 2 ) JRNZ, AGAIN, ( loop-B288 )
  ( Z set? end of dict, not found. "w" already on PSP TOS )
  PUSH0, EXX, OFLW? ;CODE
( ----- 289 )
CODE (br) L1 BSET ( used in ?br and loop )
  LDA(DE), ( sign extend A into HL )
  L A LDrr, A ADDr, ( sign in carry ) A SBCr, ( FF if neg )
  H A LDrr, DE ADDHLd, ( HL --> new IP ) ;CODEHL
CODE (?br) 1 chkPS,
  HL POP, HLZ, JRZ, L1 BWR ( br + 1. False, branch )
  ( True, skip next byte and don't branch ) DE INCd, ;CODE
CODE (loop)
  0 IX+ INC(IXY+), IFZ, 1 IX+ INC(IXY+), THEN, ( I++ )
  ( Jump if I <> I' )
  A 0 IX+ LDrIXY, 2 IX- CP(IXY+), JRNZ, L1 BWR ( branch )
  A 1 IX+ LDrIXY, 1 IX- CP(IXY+), JRNZ, L1 BWR ( branch )
  ( don't branch )
  IX DECd, IX DECd, IX DECd, IX DECd, DE INCd, ;CODE
( ----- 290 )
CODE (n)
  EXDEHL, LDDE(HL), HL INCd, DE PUSH, OFLW? ;CODEHL
CODE (b) LDA(DE), PUSHA, DE INCd, OFLW? ;CODE
CODE (s)
  DE PUSH, LDA(DE), E ADDr, IFC, D INCr, THEN,
  E A LDrr, DE INCd, OFLW? ;CODE
( ----- 291 )
CODE ROT ( a b c -- b c a ) 3 chkPS,
  BC POP, ( C ) HL POP, ( B ) EX(SP)HL, ( A <> B )
  BC PUSH, ( C ) HL PUSH, ( A ) ;CODE
CODE ROT> ( a b c -- c a b ) 3 chkPS,
  HL POP, ( C ) BC POP, ( B ) EX(SP)HL, ( A <> C )
  HL PUSH, ( A ) BC PUSH, ( B ) ;CODE
CODE DUP ( a -- a a ) 1 chkPS,
  HL POP, HL PUSH, HL PUSH, OFLW? ;CODE
CODE ?DUP 1 chkPS,
  HL POP, HL PUSH, HLZ, IFNZ, HL PUSH, THEN, OFLW? ;CODE
CODE DROP ( a -- ) 1 chkPS, HL POP, ;CODE
CODE SWAP ( a b -- b a ) 2 chkPS,
  HL POP, ( B ) EX(SP)HL, ( A <> B ) HL PUSH, ( A ) ;CODE
CODE OVER ( a b -- a b a ) 2 chkPS,
  HL POP, ( B ) BC POP, ( A )
  BC PUSH, ( A ) HL PUSH, ( B ) BC PUSH, ( A ) OFLW? ;CODE
( ----- 292 )
CODE AND 2 chkPS, HL POP, BC POP,
  A C LDrr, L ANDr, L A LDrr,
  A B LDrr, H ANDr, H A LDrr,
  HL PUSH, ;CODE
CODE OR 2 chkPS, HL POP, BC POP,
  A C LDrr, L ORr, L A LDrr,
  A B LDrr, H ORr, H A LDrr,
  HL PUSH, ;CODE
CODE XOR 2 chkPS, HL POP, BC POP,
  A C LDrr, L XORr, L A LDrr,
  A B LDrr, H XORr, H A LDrr,
  HL PUSH, ;CODE
CODE NOT 1 chkPS, HL POP, HLZ, PUSHZ, ;CODE
( ----- 293 )
CODE CARRY? EXAFAF', HL 0 LDdi, HL ADCHLd, HL PUSH, ;CODE
CODE + 2 chkPS, HL POP, BC POP,
  BC ADDHLd, EXAFAF', HL PUSH, ;CODE
CODE - 2 chkPS, BC POP, HL POP,
  BC SUBHLd, EXAFAF', HL PUSH, ;CODE
CODE * 2 chkPS, EXX, ( protect DE ) ( DE * BC -> HL )
  DE POP, BC POP,
  A XORr, ( unset CARRY? ) EXAFAF',
  HL 0 LDdi, A 0x10 LDri, BEGIN,
    HL ADDHLd, IFC, CARRY! THEN, E RL, D RL,
    IFC, BC ADDHLd, IFC, CARRY! THEN, THEN,
    A DECr, JRNZ, AGAIN,
  HL PUSH, EXX, ( unprotect DE ) ;CODE
( ----- 294 )
( Divides AC by DE. quotient in AC remainder in HL )
CODE /MOD 2 chkPS, EXX, ( protect DE )
  DE POP, BC POP,
  A B LDrr, B 16 LDri, HL 0 LDdi, BEGIN,
    SCF, C RL, RLA,
    HL ADCHLd, DE SBCHLd,
    IFC, DE ADDHLd, C DECr, THEN,
  DJNZ, AGAIN,
  B A LDrr,
  HL PUSH, BC PUSH, EXX, ( unprotect DE ) ;CODE
( ----- 295 )
( The word below is designed to wait the proper 100us per tick
  at 500kHz when tickfactor is 1. If the CPU runs faster,
  tickfactor has to be adjusted accordingly. "t" in comments
  below means "T-cycle", which at 500kHz is worth 2us. )
CODE TICKS 1 chkPS,
  HL POP,
  ( we pre-dec to compensate for initialization )
  BEGIN,
    HL DECd, ( 6t )
    IFZ, ( 12t ) ;CODE THEN,
    A tickfactor @ LDri, ( 7t )
    BEGIN, A DECr, ( 4t ) JRNZ, ( 12t ) AGAIN,
  JR, ( 12t ) AGAIN, ( outer: 37t inner: 16t )
( ----- 296 )
CODE ! 2 chkPS, HL POP, BC POP,
  (HL) C LDrr, HL INCd, (HL) B LDrr, ;CODE
CODE @ 1 chkPS, HL POP, LDBC(HL), BC PUSH, ;CODE
CODE C! 2 chkPS, HL POP, BC POP, (HL) C LDrr, ;CODE
CODE C@ 1 chkPS, HL POP, L (HL) LDrr, H 0 LDri, HL PUSH, ;CODE
CODE PC! 2 chkPS, BC POP, HL POP, L OUT(C)r, ;CODE
CODE PC@ 1 chkPS, BC POP, H 0 LDri, L INr(C), HL PUSH, ;CODE
CODE I L 0 IX+ LDrIXY, H 1 IX+ LDrIXY, HL PUSH, OFLW? ;CODE
CODE I' L 2 IX- LDrIXY, H 1 IX- LDrIXY, HL PUSH, OFLW? ;CODE
CODE J L 4 IX- LDrIXY, H 3 IX- LDrIXY, HL PUSH, OFLW? ;CODE
CODE >R 1 chkPS, HL POP,
    IX INCd, IX INCd, 0 IX+ L LDIXYr, 1 IX+ H LDIXYr, ;CODE
( ----- 297 )
CODE R>
  L 0 IX+ LDrIXY, H 1 IX+ LDrIXY, IX DECd, IX DECd,
  HL PUSH, ;CODE
CODE 2>R 2 chkPS,
  BC POP, HL POP,
  IX INCd, IX INCd, 0 IX+ L LDIXYr, 1 IX+ H LDIXYr,
  IX INCd, IX INCd, 0 IX+ C LDIXYr, 1 IX+ B LDIXYr, ;CODE
CODE 2R>
  L 0 IX+ LDrIXY, H 1 IX+ LDrIXY, IX DECd, IX DECd,
  C 0 IX+ LDrIXY, B 1 IX+ LDrIXY, IX DECd, IX DECd,
  BC PUSH, HL PUSH, ;CODE
( ----- 298 )
CODE []= 3 chkPS, EXX, ( protect DE ) BC POP, DE POP, HL POP,
  L1 BSET ( loop )
    LDA(DE), DE INCd, CPI,
    IFNZ, PUSH0, EXX, ;CODE THEN,
    CPE L1 @ JPc, ( BC not zero? loop )
  PUSH1, EXX, ;CODE
CODE = 2 chkPS, BC POP, HL POP, BC SUBHLd, PUSHZ, ;CODE
CODE < 2 chkPS, BC POP, HL POP,
  BC SUBHLd, IFC, PUSH1, ELSE, PUSH0, THEN, ;CODE
CODE (im1) IM1, EI, ;CODE
( ----- 299 )
CODE 1+ 1 chkPS, HL POP, HL INCd, HL PUSH, ;CODE
CODE 1- 1 chkPS, HL POP, HL DECd, HL PUSH, ;CODE
CODE CRC16  ( c n -- c ) 2 chkPS, EXX, ( protect DE )
  HL POP, ( n ) DE POP, ( c )
  A L LDrr, D XORr, D A LDrr,
  B 8 LDri, BEGIN,
    E SLA, D RL,
    IFC, ( msb is set, apply polynomial )
      A D LDrr, 0x10 XORi, D A LDrr,
      A E LDrr, 0x21 XORi, E A LDrr,
    THEN,
  DJNZ, AGAIN,
  DE PUSH, EXX, ( unprotect DE ) ;CODE
( ----- 300 )
CODE RSHIFT ( n u -- n ) 2 chkPS, BC POP, ( u ) HL POP, ( n )
  B C LDrr, B INCr, JR, L1 FWR BEGIN,
    H SRL, L RR, L1 FSET DJNZ, AGAIN,
  HL PUSH, ;CODE
CODE LSHIFT ( n u -- n ) 2 chkPS, BC POP, ( u ) HL POP, ( n )
  B C LDrr, B INCr, JR, L1 FWR BEGIN,
    L SLA, H RL, L1 FSET DJNZ, AGAIN,
  HL PUSH, ;CODE
CODE |L ( n -- msb lsb ) 1 chkPS, HL POP,
  B 0 LDri, C H LDrr, BC PUSH,
  C L LDrr, BC PUSH, OFLW? ;CODE
CODE |M ( n -- lsb msb ) 1 chkPS, HL POP,
  B 0 LDri, C L LDrr, BC PUSH,
  C H LDrr, BC PUSH, OFLW? ;CODE
( ----- 310 )
Z80 drivers

311 AT28 EEPROM                312 SPI relay
315 TMS9918
320 MC6850 driver              325 Zilog SIO driver
330 Sega Master System VDP     335 SMS PAD
340 SMS KBD                    347 SMS SPI relay
348 SMS Ports
350 TI-84+ LCD                 355 TI-84+ Keyboard
360 TRS-80 4P drivers
370-399 unused
( ----- 311 )
CODE AT28C! ( c a -- ) 2 chkPS,
    HL POP, BC POP,
    (HL) C LDrr, A C LDrr, ( orig ) B C LDrr, ( save )
    C (HL) LDrr, ( poll ) BEGIN,
        A (HL) LDrr, ( poll ) C CPr, ( same as old? )
        C A LDrr, ( save old poll, Z preserved )
    JRNZ, AGAIN,
( equal to written? SUB instead of CP to ensure IOERR is NZ )
    B SUBr, IFNZ, SYSVARS 0x41 + ( IOERR ) LD(i)A, THEN,
;CODE
: AT28! ( n a -- ) 2DUP AT28C! 1+ SWAP 8 RSHIFT SWAP AT28C! ;
: AT28$ ['] AT28C! W" C!" :* ['] AT28! W" !" :* ;
( ----- 312 )
( SPI relay driver. See doc/hw/z80/spi.txt )
CODE (spix) ( n -- n ) 1 chkPS,
    HL POP, A L LDrr,
    SPI_DATA OUTiA,
    ( wait until xchg is done )
    BEGIN, SPI_CTL INAi, 1 ANDi, JRNZ, AGAIN,
    SPI_DATA INAi,
    L A LDrr,
    HL PUSH, ;CODE
CODE (spie) ( n -- ) 1 chkPS,
    HL POP, A L LDrr,
    SPI_CTL OUTiA, ;CODE
( ----- 315 )
( Z80 driver for TMS9918. Implements grid protocol. Requires
TMS_CTLPORT, TMS_DATAPORT and ~FNT from the Font compiler at
B520. Patterns are at addr 0x0000, Names are at 0x3800.
Load range B315-317 )
CODE _ctl ( a -- sends LSB then MSB ) 1 chkPS,
    HL POP,
    A L LDrr, TMS_CTLPORT OUTiA,
    A H LDrr, TMS_CTLPORT OUTiA,
;CODE
CODE _data 1 chkPS,
    HL POP, A L LDrr, TMS_DATAPORT OUTiA, ;CODE
( ----- 316 )
: _zero ( x -- send 0 _data x times )
    ( x ) 0 DO 0 _data LOOP ;
( Each row in ~FNT is a row of the glyph and there is 7 of
them.  We insert a blank one at the end of those 7. )
: _sfont ( a -- Send font to TMS )
    7 0 DO C@+ _data LOOP DROP
    ( blank row ) 0 _data ;
: _sfont^ ( a -- Send inverted font to TMS )
    7 0 DO C@+ 0xff XOR _data LOOP DROP
    ( blank row ) 0xff _data ;
: CELL! ( c pos )
    0x7800 OR _ctl ( tilenum )
    SPC - ( glyph ) 0x5f MOD _data ;
( ----- 317 )
: CURSOR! ( new old -- )
    DUP 0x3800 OR _ctl [ TMS_DATAPORT LITN ] PC@
    0x7f AND ( new old glyph ) SWAP 0x7800 OR _ctl _data
    DUP 0x3800 OR _ctl [ TMS_DATAPORT LITN ] PC@
    0x80 OR ( new glyph ) SWAP 0x7800 OR _ctl _data ;
: COLS 40 ; : LINES 24 ;
: TMS$
    0x8100 _ctl ( blank screen )
    0x7800 _ctl COLS LINES * _zero
    0x4000 _ctl 0x5f 0 DO ~FNT I 7 * + _sfont LOOP
    0x4400 _ctl 0x5f 0 DO ~FNT I 7 * + _sfont^ LOOP
    0x820e _ctl ( name table 0x3800 )
    0x8400 _ctl ( pattern table 0x0000 )
    0x87f0 _ctl ( colors 0 and 1 )
    0x8000 _ctl 0x81d0 _ctl ( text mode, display on ) ;
( ----- 320 )
( MC6850 Driver. Load range B320-B322. Requires:
  6850_CTL for control register
  6850_IO for data register.
  CTL numbers used: 0x16 = no interrupt, 8bit words, 1 stop bit
  64x divide. 0x56 = RTS high )
CODE 6850> 1 chkPS,
    HL POP,
    BEGIN,
        6850_CTL INAi, 0x02 ANDi, ( are we transmitting? )
    JRZ, ( yes, loop ) AGAIN,
    A L LDrr, 6850_IO OUTiA,
;CODE
( ----- 321 )
CODE 6850<?
    A XORr, ( 256x ) A 0x16 ( RTS lo ) LDri, 6850_CTL OUTiA,
    PUSH0, ( pre-push a failure )
    BEGIN, EXAFAF', ( preserve cnt )
        6850_CTL INAi, 0x1 ANDi, ( rcv buff full? )
        IFNZ, ( full )
            HL POP, ( pop failure )
            6850_IO INAi, PUSHA, PUSH1, A XORr, ( end loop )
        ELSE, EXAFAF', ( recall cnt ) A DECr, THEN,
    JRNZ, AGAIN,
    A 0x56 ( RTS hi ) LDri, 6850_CTL OUTiA, OFLW? ;CODE
( ----- 322 )
X' 6850<? :* RX<? X' 6850<? :* (key?)
X' 6850> :* TX> X' 6850> :* (emit)
: 6850$ 0x56 ( RTS high ) [ 6850_CTL LITN ] PC! ;
( ----- 325 )
( Zilog SIO driver. Load range B325-328. Requires:
  SIOA_CTL for ch A control register SIOA_DATA for data
  SIOB_CTL for ch B control register SIOB_DATA for data )
CODE SIOA<?
    A XORr, ( 256x ) PUSH0, ( pre-push a failure )
    BEGIN, EXAFAF', ( preserve cnt )
        SIOA_CTL INAi, 0x1 ANDi, ( rcv buff full? )
        IFNZ, ( full )
            HL POP, ( pop failure )
            SIOA_DATA INAi, PUSHA, PUSH1, A XORr, ( end loop )
        ELSE, EXAFAF', ( recall cnt ) A DECr, THEN,
    JRNZ, AGAIN, OFLW? ;CODE
( ----- 326 )
CODE SIOA> 1 chkPS,
    HL POP,
    BEGIN,
        SIOA_CTL INAi, 0x04 ANDi, ( are we transmitting? )
    JRZ, ( yes, loop ) AGAIN,
    A L LDrr, SIOA_DATA OUTiA,
;CODE
CREATE _ ( init data ) 0x18 C, ( CMD3 )
    0x04 C, ( PTR4 ) 0b00000110 C, ( WR4/1x/1stop/oddpar )
    0x03 C, ( PTR3 ) 0b11000001 C, ( WR3/RXon/8char )
    0x05 C, ( PTR5 ) 0b11100000 C, ( WR5/TXoff/8char/DTR )
    0x11 C, ( CMD2/PTR1 ) 0 C, ( WR1/Rx no INT )
: SIOA$ 9 0 DO _ I + C@ [ SIOA_CTL LITN ] PC! LOOP ;
( ----- 327 )
CODE SIOB<? ( copy/paste of SIOA<? )
    A XORr, ( 256x ) PUSH0, ( pre-push a failure )
    A 5 ( PTR5 ) LDri, SIOB_CTL OUTiA,
    A 0b01101000 ( RTS low ) LDri, SIOB_CTL OUTiA,
    BEGIN, EXAFAF', ( preserve cnt )
        SIOB_CTL INAi, 0x1 ANDi, ( rcv buff full? )
        IFNZ, ( full )
            HL POP, ( pop failure )
            SIOB_DATA INAi, PUSHA, PUSH1, A XORr, ( end loop )
        ELSE, EXAFAF', ( recall cnt ) A DECr, THEN,
    JRNZ, AGAIN,
    A 5 ( PTR5 ) LDri, SIOB_CTL OUTiA,
    A 0b01101010 ( RTS low ) LDri, SIOB_CTL OUTiA, OFLW? ;CODE
( ----- 328 )
CODE SIOB> 1 chkPS,
    HL POP,
    BEGIN,
        SIOB_CTL INAi, 0x04 ANDi, ( are we transmitting? )
    JRZ, ( yes, loop ) AGAIN,
    A L LDrr, SIOB_DATA OUTiA,
;CODE
: SIOB$ 9 0 DO _ I + C@ [ SIOB_CTL LITN ] PC! LOOP ;
( ----- 330 )
( VDP Driver. see doc/hw/sms/vdp.txt. Load range B330-B332. )
CREATE _idat
0b00000100 C, 0x80 C, ( Bit 2: Select mode 4 )
0b00000000 C, 0x81 C,
0b00001111 C, 0x82 C, ( Name table: 0x3800, *B0 must be 1* )
0b11111111 C, 0x85 C, ( Sprite table: 0x3f00 )
0b11111111 C, 0x86 C, ( sprite use tiles from 0x2000 )
0b11111111 C, 0x87 C, ( Border uses palette 0xf )
0b00000000 C, 0x88 C, ( BG X scroll )
0b00000000 C, 0x89 C, ( BG Y scroll )
0b11111111 C, 0x8a C, ( Line counter (why have this?) )
( ----- 331 )
: _sfont ( a -- Send font to VDP )
  7 0 DO C@+ _data 3 _zero LOOP DROP
  ( blank row ) 4 _zero ;
: CELL! ( c pos )
  2 * 0x7800 OR _ctl ( c )
  0x20 - ( glyph ) 0x5f MOD _data ;
( ----- 332 )
: CURSOR! ( new old -- )
  ( unset palette bit in old tile )
  2 * 1+ 0x7800 OR _ctl 0 _data
  ( set palette bit for at specified pos )
  2 * 1+ 0x7800 OR _ctl 0x8 _data ;
: VDP$
  9 0 DO _idat I 2 * + @ _ctl LOOP
  ( blank screen ) 0x7800 _ctl COLS LINES * 2 * _zero
  ( palettes )
  0xc000 _ctl
  ( BG ) 1 _zero 0x3f _data 14 _zero
  ( sprite, inverted colors ) 0x3f _data 15 _zero
  0x4000 _ctl 0x5f 0 DO ~FNT I 7 * + _sfont LOOP
  ( bit 6, enable display, bit 7, ?? ) 0x81c0 _ctl ;
: COLS 32 ; : LINES 24 ;
( ----- 335 )
( SMS pad driver. See doc/hw/z80/sms/pad.txt.
  Load range: 335-338 )
: _prevstat [ PAD_MEM LITN ] ;
: _sel [ PAD_MEM 1+ LITN ] ;
: _next [ PAD_MEM 2 + LITN ] ;
: _status ( -- n, see doc )
  1 _THA! ( output, high/unselected )
  _D1@ 0x3f AND ( low 6 bits are good )
( Start and A are returned when TH is selected, in bits 5 and
  4. Well get them, left-shift them and integrate them to B. )
  0 _THA! ( output, low/selected )
  _D1@ 0x30 AND 2 LSHIFT OR ;
( ----- 336 )
: _chk ( c --, check _sel range )
  _sel C@ DUP 0x7f > IF 0x20 _sel C! THEN
  0x20 < IF 0x7f _sel C! THEN ;
CREATE _ '0' C, ':' C, 'A' C, '[' C, 'a' C, 0xff C,
: _nxtcls
  _sel @ >R _ BEGIN ( a R:c ) C@+ I > UNTIL ( a R:c ) R> DROP
  1- C@ _sel ! ;
( ----- 337 )
: _updsel ( -- f, has an action button been pressed? )
  _status _prevstat C@ OVER = IF DROP 0 EXIT THEN
  DUP _prevstat C! ( changed, update ) ( s )
  0x01 ( UP ) OVER AND NOT IF 1 _sel +! THEN
  0x02 ( DOWN ) OVER AND NOT IF -1 _sel +! THEN
  0x04 ( LEFT ) OVER AND NOT IF -5 _sel +! THEN
  0x08 ( RIGHT ) OVER AND NOT IF 5 _sel +! THEN
  0x10 ( BUTB ) OVER AND NOT IF _nxtcls THEN
  ( update sel in VDP )
  _chk _sel C@ XYPOS @ CELL!
  ( return whether any of the high 3 bits is low )
  0xe0 AND 0xe0 < ;
( ----- 338 )
: (key?) ( -- c? f )
  _next C@ IF _next C@ 0 _next C! 1 EXIT THEN
  _updsel IF
    _prevstat C@
    0x20 ( BUTC ) OVER AND NOT IF DROP _sel C@ 1 EXIT THEN
    0x40 ( BUTA ) AND NOT IF 0x8 ( BS ) 1 EXIT THEN
    ( If not BUTC or BUTA, it has to be START )
    0xd _next C! _sel C@ 1
    ELSE 0 ( f ) THEN ;
: PAD$ 0xff _prevstat C! 'a' _sel C! 0 _next C! ;
( ----- 340 )
( kbd - implement (ps2kc) for SMS PS/2 adapter )
: (ps2kcA) ( for port A )
( Before reading a character, we must first verify that there
is something to read. When the adapter is finished filling its
'164 up, it resets the latch, which output's is connected to
TL. When the '164 is full, TL is low. Port A TL is bit 4 )
  _D1@ 0x10 AND IF 0 EXIT ( nothing ) THEN
  0 _THA! ( Port A TH output, low )
  _D1@ ( bit 3:0 go in 3:0 ) 0x0f AND ( n )
  1 _THA! ( Port A TH output, high )
  _D1@ ( bit 3:0 go in 7:4 ) 0x0f AND 4 LSHIFT OR ( n )
  2 _THA! ( TH input ) ;
( ----- 341 )
: (ps2kcB) ( for port B )
  ( Port B TL is bit 2 )
  _D2@ 0x04 AND IF 0 EXIT ( nothing ) THEN
  0 _THB! ( Port B TH output, low )
  _D1@ ( bit 7:6 go in 1:0 ) 6 RSHIFT ( n )
  _D2@ ( bit 1:0 go in 3:2 ) 0x03 AND 2 LSHIFT OR ( n )
  1 _THB! ( Port B TH output, high )
  _D1@ ( bit 7:6 go in 5:4 ) 0xc0 AND 2 RSHIFT OR ( n )
  _D2@ ( bit 1:0 go in 7:6 ) 0x03 AND 6 LSHIFT OR ( n )
  2 _THB! ( TH input ) ;
( ----- 347 )
: (spie) DROP ; ( always enabled )
CODE (spix) ( x -- x, for port B ) 1 chkPS, HL POP,
    ( TR = DATA TH = CLK )
    CPORT_MEM LDA(i), 0xf3 ANDi, ( TR/TH output )
    H 8 LDri, BEGIN,
        0xbf ANDi, ( TR lo ) L RL, ( --> C )
        IFC, 0x40 ORi, ( TR hi ) THEN,
        CPORT_CTL OUTiA, ( clic! ) 0x80 ORi, ( TH hi )
        CPORT_CTL OUTiA, ( clac! )
        EXAFAF', CPORT_D1 INAi, ( Up Btn is B6 ) RLA, RLA,
            C RL, EXAFAF',
        0x7f ANDi, ( TH lo ) CPORT_CTL OUTiA, ( cloc! )
    H DECr, JRNZ, AGAIN, CPORT_MEM LD(i)A,
    L C LDrr, HL PUSH,
;CODE
( ----- 348 )
( Routines for interacting with SMS controller ports.
  Requires CPORT_MEM, CPORT_CTL, CPORT_D1 and CPORT_D2 to be
  defined. CPORT_MEM is a 1 byte buffer for CPORT_CTL. The last
  3 consts will usually be 0x3f, 0xdc, 0xdd. )
( mode -- set TR pin on mode a on:
0= output low 1=output high 2=input )
CODE _TRA! 1 chkPS, HL POP, ( B0 -> B4, B1 -> B0 )
    L RR, RLA, RLA, RLA, RLA, L RR, RLA,
    0x11 ANDi, L A LDrr, CPORT_MEM LDA(i),
    0xee ANDi, L ORr, CPORT_CTL OUTiA, CPORT_MEM LD(i)A,
;CODE
CODE _THA! 1 chkPS, HL POP, ( B0 -> B5, B1 -> B1 )
    L RR, RLA, RLA, RLA, RLA, L RR, RLA, RLA,
    0x22 ANDi, L A LDrr, CPORT_MEM LDA(i),
    0xdd ANDi, L ORr, CPORT_CTL OUTiA, CPORT_MEM LD(i)A,
;CODE
( ----- 349 )
CODE _TRB! 1 chkPS, HL POP, ( B0 -> B6, B1 -> B2 )
    L RR, RLA, RLA, RLA, RLA, L RR, RLA, RLA, RLA,
    0x44 ANDi, L A LDrr, CPORT_MEM LDA(i),
    0xbb ANDi, L ORr, CPORT_CTL OUTiA, CPORT_MEM LD(i)A,
;CODE
CODE _THB! 1 chkPS, HL POP, ( B0 -> B7, B1 -> B3 )
    L RR, RLA, RLA, RLA, RLA, L RR, RLA, RLA, RLA, RLA,
    0x88 ANDi, L A LDrr, CPORT_MEM LDA(i),
    0x77 ANDi, L ORr, CPORT_CTL OUTiA, CPORT_MEM LD(i)A,
;CODE
CODE _D1@ CPORT_D1 INAi, PUSHA, ;CODE
CODE _D2@ CPORT_D2 INAi, PUSHA, ;CODE
( ----- 350 )
( TI-84+ LCD driver. See doc/hw/z80/ti84/lcd.txt
  Load range: 350-353 )
: _mem+ [ LCD_MEM LITN ] @ + ;
: FNTW 3 ; : FNTH 5 ;
: COLS 96 FNTW 1+ / ; : LINES 64 FNTH 1+ / ;
( Wait until the lcd is ready to receive a command. It's a bit
  weird to implement a waiting routine in asm, but the forth
  version is a bit heavy and we don't want to wait longer than
  we have to. )
CODE _wait
  BEGIN,
    0x10 ( CMD ) INAi,
    RLA, ( When 7th bit is clr, we can send a new cmd )
  JRC, AGAIN, ;CODE
( ----- 351 )
: LCD_BUF 0 _mem+ ;
: _cmd 0x10 ( CMD ) PC! _wait ;
: _data! 0x11 ( DATA ) PC! _wait ;
: _data@ 0x11 ( DATA ) PC@ _wait ;
: LCDOFF 0x02 ( CMD_DISABLE ) _cmd ;
: LCDON 0x03 ( CMD_ENABLE ) _cmd ;
: _yinc 0x07 _cmd ; : _xinc 0x05 _cmd ;
: _zoff! ( off -- ) 0x40 + _cmd ;
: _col! ( col -- ) 0x20 + _cmd ;
: _row! ( row -- ) 0x80 + _cmd ;
: LCD$
  HERE [ LCD_MEM LITN ] ! FNTH 2 * ALLOT
  LCDON 0x01 ( 8-bit mode ) _cmd FNTH 1+ _zoff!  ;
( ----- 352 )
: _clrrows ( n u -- Clears u rows starting at n )
  SWAP _row! ( u ) 0 DO
    _yinc 0 _col!
    11 0 DO 0 _data! LOOP
    _xinc 0 _data! LOOP ;
: NEWLN ( ln -- )
  DUP 1+ FNTH 1+ * _zoff!
  FNTH 1+ * FNTH 1+ _clrrows ;
: LCDCLR 0 64 _clrrows ;
( ----- 353 )
: _atrow! ( pos -- ) COLS / FNTH 1+ * _row! ;
: _tocol ( pos -- col off ) COLS MOD FNTW 1+ * 8 /MOD ;
: CELL! ( c pos -- )
  DUP _atrow! DUP _tocol _col! ROT ( pos coff c )
  0x20 - FNTH * ~FNT + ( pos coff a )
  _xinc _data@ DROP
  FNTH 0 DO ( pos coff a )
    OVER 8 -^ SWAP C@+ ( pos coff 8-coff a+1 c ) ROT LSHIFT
    _data@ 8 LSHIFT OR
    LCD_BUF I + 2DUP FNTH + C!
    SWAP 8 RSHIFT SWAP C!
  LOOP 2DROP
  DUP _atrow!
  FNTH 0 DO LCD_BUF I + C@ _data! LOOP
  DUP _atrow! _tocol NIP 1+ _col!
  FNTH 0 DO LCD_BUF FNTH + I + C@ _data! LOOP ;
( ----- 355 )
( Requires KBD_MEM, KBD_PORT. Load range: 355-359 )
( gm -- pm, get pressed keys mask for group mask gm )
CODE _get 1 chkPS,
    HL POP,
    DI,
        A 0xff LDri,
        KBD_PORT OUTiA,
        A L LDrr,
        KBD_PORT OUTiA,
        KBD_PORT INAi,
    EI,
    L A LDrr, HL PUSH,
;CODE
( ----- 356 )
( wait until all keys are de-pressed. To avoid repeat keys, we
  require 64 subsequent polls to indicate all depressed keys.
  all keys are considered depressed when the 0 group returns
  0xff. )
: _wait 64 BEGIN 0 _get 0xff = NOT IF DROP 64 THEN
    1- DUP NOT UNTIL DROP ;
( digits table. each row represents a group. 0 means
  unsupported. no group 7 because it has no key. )
CREATE _dtbl
    0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C,
    0xd C, '+' C, '-' C, '*' C, '/' C, '^' C, 0 C, 0 C,
    0 C, '3' C, '6' C, '9' C, ')' C, 0 C, 0 C, 0 C,
    '.' C, '2' C, '5' C, '8' C, '(' C, 0 C, 0 C, 0 C,
    '0' C, '1' C, '4' C, '7' C, ',' C, 0 C, 0 C, 0 C,
    0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0x80 ( alpha ) C,
    0 C, 0 C, 0 C, 0 C, 0 C, 0x81 ( 2nd ) C, 0 C, 0x7f C,
( ----- 357 )
( alpha table. same as _dtbl, for when we're in alpha mode. )
CREATE _atbl
    0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C, 0 C,
    0xd C, '"' C, 'W' C, 'R' C, 'M' C, 'H' C, 0 C, 0 C,
    '?' C, 0 C, 'V' C, 'Q' C, 'L' C, 'G' C, 0 C, 0 C,
    ':' C, 'Z' C, 'U' C, 'P' C, 'K' C, 'F' C, 'C' C, 0 C,
    0x20 C, 'Y' C, 'T' C, 'O' C, 'J' C, 'E' C, 'B' C, 0 C,
    0 C, 'X' C, 'S' C, 'N' C, 'I' C, 'D' C, 'A' C, 0x80 C,
    0 C, 0 C, 0 C, 0 C, 0 C, 0x81 ( 2nd ) C, 0 C, 0x7f C,
: _@ [ KBD_MEM LITN ] C@ ; : _! [ KBD_MEM LITN ] C! ;
: _2nd@ _@ 1 AND ; : _2nd! _@ 0xfe AND + _! ;
: _alpha@ _@ 2 AND ; : _alpha! 2 * _@ 0xfd AND + _! ;
: _alock@ _@ 4 AND ; : _alock^ _@ 4 XOR _! ;
( ----- 358 )
: _gti ( -- tindex, that it, index in _dtbl or _atbl )
    7 0 DO
        1 I LSHIFT 0xff -^ ( group dmask ) _get
        DUP 0xff = IF DROP ELSE I ( dmask gid ) LEAVE THEN
    LOOP _wait
    SWAP ( gid dmask )
    0xff XOR ( dpos ) 0 ( dindex )
    BEGIN 1+ 2DUP RSHIFT NOT UNTIL 1-
    ( gid dpos dindex ) NIP
    ( gid dindex ) SWAP 8 * + ;
( ----- 359 )
: (key?) ( -- c? f )
    0 _get 0xff = IF ( no key pressed ) 0 EXIT THEN
    _alpha@ _alock@ IF NOT THEN IF _atbl ELSE _dtbl THEN
    _gti + C@ ( c )
    DUP 0x80 = IF _2nd@ IF _alock^ ELSE 1 _alpha! THEN THEN
    DUP 0x81 = _2nd!
    DUP 1 0x7f =><= IF ( we have something )
    ( lower? ) _2nd@ IF DUP 'A' 'Z' =><= IF 0x20 OR THEN THEN
        0 _2nd! 0 _alpha! 1 ( c f )
    ELSE ( nothing ) DROP 0 THEN ;
: KBD$ 0 [ KBD_MEM LITN ] C! ;
( ----- 360 )
( TRS-80 4P drivers. Load range: 360-367 )
L1 BSET ( brkchk ) A 0x6a ( @CKBRKC ) LDri, 0x28 RST, CZ RETc,
  ( brk pressed, QUIT ) HL POP, 0x0c BJP, ( stable ABI QUIT )
CODE (key?) EXX, ( protect DE )
  L1 @ CALL, ( brkchk )
  A 0x08 LDri, ( @KBD ) 0x28 RST,
  IFZ, 0xb1 CPi, IFZ, A '|' LDri, THEN,
  0xad CPi, IFZ, A '~' LDri, THEN,
  PUSHA, PUSH1, ELSE, PUSH0, THEN, OFLW? EXX, ;CODE
CODE (emit) 1 chkPS, EXX, ( protect DE )
  BC POP, ( c == @DSP arg )
  A 0x02 LDri, ( @DSP ) 0x28 RST, EXX, ;CODE
( ----- 361 )
CODE AT-XY 2 chkPS, EXX, ( protect DE )
  DE POP, H E LDrr, ( Y )
  DE POP, L E LDrr, ( X )
  A 0x0f LDri, ( @VDCTL ) B 3 LDri, ( setcur )
  0x28 RST,
EXX, ( unprotect DE ) ;CODE
24 CONSTANT LINES 80 CONSTANT COLS
DRVMEM CONSTANT XYMODE
: CELL! COLS /MOD AT-XY (emit) ;
CODE BYE HL 0 LDdi, A 0x16 LDri, ( @EXIT ) 0x28 RST,
( ----- 362 )
CODE @RDSEC ( drv cylsec addr -- f ) 3 chkPS,
  EXX, ( protect DE ) HL POP, DE POP, BC POP,
  A 0x31 LDri, ( @RDSEC ) 0x28 RST, PUSHZ,
EXX, ( unprotect DE ) ;CODE
CODE @WRSEC ( drv cylsec addr -- f ) 3 chkPS,
  EXX, ( protect DE ) HL POP, DE POP, BC POP,
  A 0x35 LDri, ( @WRSEC ) 0x28 RST, PUSHZ,
EXX, ( unprotect DE ) ;CODE
( ----- 363 )
CODE @DCSTAT ( drv -- f ) 1 chkPS,
  BC POP,
  A 0x28 LDri, ( @DCSTAT ) 0x28 RST, PUSHZ, ;CODE
: FD0 FLUSH 0 [ DRVMEM 1+ LITN ] C! ;
: FD1 FLUSH 1 [ DRVMEM 1+ LITN ] C! ;
: FDDRV [ DRVMEM 1+ LITN ] C@ ;
: _err LIT" FDerr" ERR ;
( ----- 364 )
: _cylsec ( sec -- cs, return sector/cylinder for given secid )
  ( 4 256b sectors per block, 10 sec per cyl, 40 cyl max )
  10 /MOD ( sec cyl ) DUP 39 > IF _err THEN
  8 LSHIFT + ( cylsec ) ;
: FD@! ( wref blk -- )
  1 @DCSTAT NOT IF _err THEN
  SWAP >R 2 LSHIFT ( sec=blk*4 -- sec R:wr )
  4 0 DO ( sec R:wr )
    DUP I + _cylsec ( sec cs )
    I 8 LSHIFT BLK( + ( sec cs addr )
    FDDRV ROT> ( sec drv cs addr )
    J ( wr ) EXECUTE NOT IF _err THEN
  LOOP R> 2DROP ;
: FD@ ['] @RDSEC SWAP FD@! ;
: FD! ['] @WRSEC SWAP FD@! ;
: FD$ ['] FD@ ['] BLK@* **! ['] FD! ['] BLK!* **! FD1 ;
( ----- 365 )
: CL$ ( baudcode -- )
0x02 0xe8 PC! ( UART RST ) DUP 4 LSHIFT OR 0xe9 PC! ( bauds )
  0b01101101 0xea PC! ( word8 no parity no-RTS ) ;
CODE TX> 1 chkPS, HL POP,
  BEGIN, L1 ( brkchk ) @ CALL,
    0xea INAi, 0x40 ANDi, IFNZ, ( TX reg empty )
      0xe8 INAi, 0x80 ANDi, IFZ, ( CTS low )
        A L LDrr, 0xeb OUTiA, ( send byte ) ;CODE
  THEN, THEN, JR, AGAIN,
( ----- 366 )
CODE RX<?
  L1 ( brkchk ) @ CALL,
  A XORr, ( 256x ) PUSH0, ( pre-push a failure )
  A 0b01101100 ( RTS low ) LDri, 0xea OUTiA,
  BEGIN, EXAFAF', ( preserve cnt )
    0xea INAi, 0x80 ANDi, ( rcv buff full? )
    IFNZ, ( full )
      HL POP, ( pop failure )
      0xeb INAi, PUSHA, PUSH1, A XORr, ( end loop )
    ELSE, EXAFAF', ( recall cnt ) A DECr, THEN,
  JRNZ, AGAIN,
  A 0b01101101 ( RTS high ) LDri, 0xea OUTiA, OFLW? ;CODE
( ----- 367 )
( Native KBD driver. doesnt work well with TRSDOS in mem )
L1 BSET A (HL) LDrr, L SLA, A ORr, RET,
L2 BSET BEGIN, C INCr, RRA, JRNC, AGAIN, A C LDrr, RET,
L3 BSET A 4 LDri, 0x84 OUTiA, ( mmap 1 )
  HL 0x3801 LDdi, L1 @ CALL, IFNZ, C '@' 1- LDri, L2 @ CALL,
  ELSE, ( 02 ) L1 @ CALL, IFNZ, C 'G' LDri, L2 @ CALL,
  ELSE, ( 04 ) L1 @ CALL, IFNZ, C 'O' LDri, L2 @ CALL,
  ELSE, ( 08 ) L1 @ CALL, 7 ANDi, IFNZ, C 'W' LDri, L2 @ CALL,
  ELSE, ( 10 ) L1 @ CALL, IFNZ, C '/' LDri, L2 @ CALL,
  ELSE, ( 20 ) L1 @ CALL, IFNZ, C '7' LDri, L2 @ CALL,
    '<' CPi, IFNC, 0x10 SUBi, THEN,
  ELSE, ( 40 ) A (HL) LDrr, 0xa5 ANDi, IFNZ,
    RLA, IFC, A SPC LDri, ELSE, RLA, RLA, IFC, A BS LDri,
    ELSE, RLA, RLA, RLA, IFC, A 0x80 LDri,
    ELSE, A CR LDri, THEN, THEN, THEN,
  THEN, THEN, THEN, THEN, THEN, THEN, THEN, ( A = key or 0 )
( ----- 368 )
  A ORr, IFNZ, ( keypress )
  L 0x80 LDri, C (HL) LDrr,
  C RR, IFC, ( L shift )
    0x30 CPi, IFC, 0x10 ORi, ELSE, 0x20 ORi,
    0x60 CPi, IFC, 0xef ANDi, THEN, THEN,
  ELSE, C RR, IFC, ( R shift ) '@' CPi, IFZ, 0x1f ADDi, ELSE,
     0x2f ADDi, 0x61 CPi, IFNC, 0x14 ADDi, THEN, THEN, THEN,
  THEN, THEN, A ORr, ( ensure correct Z )
  EXAFAF', A 7 LDri, 0x84 OUTiA, ( mmap 4 ) EXAFAF', RET,
( kbd memory is flaky. it sometimes returns garbage. To ensure
  reliable results, we poll twice and compare. )
CODE (key?)
  L3 @ CALL, IFZ, PUSH0, ELSE, B A LDrr, L3 @ CALL, B CPr,
    IFZ, PUSHA, PUSH1, BEGIN, L3 @ CALL, JRNZ, AGAIN,
    ELSE, PUSH0, THEN, THEN, OFLW? ;CODE
( ----- 400 )
( 8086 boot code. PS=SP, RS=BP, IP=DX
  Load range. decl: B400 code: B402-B417 )
VARIABLE lblexec
: chkPS, ( sz -- ) 2 * PS_ADDR -^ 1+ SP SWAP CMPxI, IFNC,
  ( underflow ) DI 0x06 MOVxm, JMPn, lblexec @ RPCn, THEN, ;
( replace ;CODE with ;CODEOFLW? for words that need it. )
: ;CODEOFLW?
  BP SP CMPxx, IFNC, ( BP >= SP )
    SP PS_ADDR MOVxI, BP RS_ADDR MOVxI,
    DI 0x13 ( oflw ) MOVxm, JMPn, lblexec @ RPCn, THEN,
  ;CODE ;
( ----- 402 )
HERE ORG !
JMPn, 0 , ( 00, main ) 0 C, ( 03, boot driveno )
8 ALLOT0 JMPn, 0 , ( 0c QUIT ) 6 ALLOT0
( End of Stable ABI )
lblnext BSET PC ORG @ 0xf + ! ( Stable ABI )
    DI DX MOVxx, ( <-- IP ) DX INCx, DX INCx,
    DI [DI] x[] MOV[], ( wordref )
    ( continue to execute )
( ----- 403 )
lblexec BSET ( DI -> wordref )
AL [DI] r[] MOV[], DI INCx, ( PFA )
AL AL ORrr, IFZ, DI JMPr, THEN, ( native )
AL DECr, IFNZ, ( not compiled )
AL DECr, IFZ, ( cell ) DI PUSHx, JMPs, lblnext @ RPCs, THEN,
AL DECr, IFNZ, ( NOT does ) DI [DI] x[] MOV[], ( rd PFA )
  AL DECr, IFZ, ( alias ) lblexec @ RPCs, THEN,
  AL DECr, IFZ, ( ialias )
    DI [DI] x[] MOV[], JMPs, lblexec @ RPCs, THEN,
  AL DECr, IFZ, ( const ) DI PUSHx, JMPs, lblnext @ RPCs, THEN,
THEN, ( does )
DI INCx, DI INCx, DI PUSHx, DI [DI] -2 x[]+ MOV[],
THEN, ( continue to compiled )
( ----- 404 )
( compiled ) BP INCx, BP INCx, [BP] 0 DX []+x MOV[], ( pushRS )
( ovfl check ) BP SP CMPxx, IFNC, ( BP >= SP )
  SP PS_ADDR MOVxI, BP RS_ADDR MOVxI,
  DI 0x13 ( oflw ) MOVxm, JMPs, lblexec @ RPCs, THEN,
DX DI MOVxx, DX INCx, DX INCx, ( --> IP )
DI [DI] x[] MOV[], JMPs, lblexec @ RPCs,
PC 3 - ORG @ 1+ ! ( main )
    DX POPx, ( boot drive no ) 0x03 DL MOVmr,
    SP PS_ADDR MOVxI, BP RS_ADDR MOVxI,
    DI 0x08 MOVxm, ( LATEST )
( HERE begins at CURRENT )
    SYSVARS 0x4 ( HERE ) + DI MOVmx,
    SYSVARS 0x2 ( CURRENT ) + DI MOVmx,
    DI 0x04 ( BOOT ) MOVxm,
    JMPn, lblexec @ RPCn,
( ----- 405 )
( native words )
HERE 4 + XCURRENT ! ( make next CODE have 0 prev field )
CODE (br) L1 BSET ( used in ?br )
    DI DX MOVxx, AL [DI] r[] MOV[], AH AH XORrr, CBW,
    DX AX ADDxx,
;CODE
CODE (?br) 1 chkPS,
    AX POPx, AX AX ORxx, JZ, L1 @ RPCs, ( False, branch )
    ( True, skip next byte and don't branch )
    DX INCx,
;CODE
( ----- 406 )
CODE (loop)
    [BP] 0 [w]+ INC[], ( I++ )
    ( Jump if I <> I' )
    AX [BP] 0 x[]+ MOV[], AX [BP] -2 x[]+ CMP[],
    JNZ, L1 @ RPCs, ( branch )
    ( don't branch )
    BP 4 SUBxi, DX INCx,
;CODE
( ----- 407 )
CODE EXECUTE 1 chkPS,
    DI POPx, JMPn, lblexec @ RPCn,
CODE QUIT
PC 0xf - ORG @ 0xd + ! ( Stable ABI )
L1 BSET ( used in ABORT )
    BP RS_ADDR MOVxI,
    DI 0x0a ( main ) MOVxm,
    JMPn, lblexec @ RPCn,
CODE ABORT SP PS_ADDR MOVxI, JMPs, L1 @ RPCs,
CODE EXIT
    DX [BP] 0 x[]+ MOV[], BP DECx, BP DECx, ( popRS )
;CODE
( ----- 408 )
CODE (n) ( number literal )
    DI DX MOVxx, DI [DI] x[] MOV[], DI PUSHx,
    DX INCx, DX INCx, ;CODEOFLW?
CODE (b) ( byte literal )
    DI DX MOVxx, AH AH XORrr, AL [DI] r[] MOV[], AX PUSHx,
    DX INCx, ;CODEOFLW?
CODE (s) ( string literal, see B287 )
    DI DX MOVxx, ( IP )
    AH AH XORrr, AL [DI] r[] MOV[], ( slen )
    DX PUSHx, DX INCx, DX AX ADDxx, ;CODEOFLW?
( ----- 409 )
CODE >R 1 chkPS,
    BP INCx, BP INCx, [BP] 0 [w]+ POP[],
;CODE NOP, NOP, NOP,
CODE R>
    [BP] 0 [w]+ PUSH[], BP DECx, BP DECx,
;CODE
CODE 2>R
    [BP] 4 [w]+ POP[], [BP] 2 [w]+ POP[], BP 4 ADDxi,
;CODE
CODE 2R> 2 chkPS,
    [BP] -2 [w]+ PUSH[], [BP] 0 [w]+ PUSH[], BP 4 SUBxi,
;CODE
( ----- 410 )
CODE ROT ( a b c -- b c a ) 3 chkPS,
    CX POPx, BX POPx, AX POPx,
    BX PUSHx, CX PUSHx, AX PUSHx, ;CODE
CODE ROT> ( a b c -- c a b ) 3 chkPS,
    CX POPx, BX POPx, AX POPx,
    CX PUSHx, AX PUSHx, BX PUSHx, ;CODE
CODE DUP 1 chkPS, AX POPx, AX PUSHx, AX PUSHx, ;CODEOFLW?
CODE ?DUP 1 chkPS, AX POPx, AX AX ORxx, AX PUSHx,
    IFNZ, AX PUSHx, THEN, ;CODEOFLW?
CODE OVER ( a b -- a b a ) 2 chkPS,
    DI SP MOVxx, AX [DI] 2 x[]+ MOV[], AX PUSHx, ;CODEOFLW?
( ----- 411 )
CODE SWAP AX POPx, BX POPx, AX PUSHx, BX PUSHx, ;CODE
CODE DROP 1 chkPS, AX POPx, ;CODE
CODE AND 2 chkPS,
    AX POPx, BX POPx, AX BX ANDxx, AX PUSHx, ;CODE
( ----- 412 )
CODE OR 2 chkPS,
    AX POPx, BX POPx, AX BX ORxx, AX PUSHx, ;CODE
CODE XOR 2 chkPS,
    AX POPx, BX POPx, AX BX XORxx, AX PUSHx, ;CODE
CODE NOT 1 chkPS,
    AX POPx, AX AX ORxx,
    IFNZ, AX -1 MOVxI, THEN, AX INCx, AX PUSHx, ;CODE
CODE + 2 chkPS,
    AX POPx, BX POPx, AX BX ADDxx, AX PUSHx, ;CODE
CODE - 2 chkPS,
    BX POPx, AX POPx, AX BX SUBxx, AX PUSHx, ;CODE
CODE * 2 chkPS,
    AX POPx, BX POPx,
    DX PUSHx, ( protect from MUL ) BX MULx, DX POPx,
    AX PUSHx, ;CODE
( ----- 413 )
CODE /MOD 2 chkPS,
    BX POPx, AX POPx, DX PUSHx, ( protect )
    DX DX XORxx, BX DIVx,
    BX DX MOVxx, DX POPx, ( unprotect )
    BX PUSHx, ( modulo ) AX PUSHx, ( division )
;CODE
CODE ! 2 chkPS, DI POPx, AX POPx, [DI] AX []x MOV[], ;CODE
CODE @ 1 chkPS, DI POPx, AX [DI] x[] MOV[], AX PUSHx, ;CODE
CODE C! 2 chkPS, DI POPx, AX POPx, [DI] AX []r MOV[], ;CODE
CODE C@ 1 chkPS,
    DI POPx, AH AH XORrr, AL [DI] r[] MOV[], AX PUSHx, ;CODE
CODE I [BP] 0 [w]+ PUSH[], ;CODEOFLW?
CODE I' [BP] -2 [w]+ PUSH[], ;CODEOFLW?
CODE J [BP] -4 [w]+ PUSH[], ;CODEOFLW?
( ----- 414 )
CODE BYE HLT, BEGIN, JMPs, AGAIN,
CODE []= ( a1 a2 u -- f ) 3 chkPS,
    CX POPx, SI POPx, DI POPx, CLD, REPZ, CMPSB,
    PUSHZ, ;CODE
CODE = 2 chkPS, BX POPx, AX POPx, AX BX CMPxx, PUSHZ, ;CODE
CODE < 2 chkPS, BX POPx, AX POPx, CX CX XORxx,
    AX BX CMPxx, IFC, CX INCx, THEN, CX PUSHx, ;CODE
( ----- 415 )
CODE FIND ( w -- a f ) 1 chkPS,
  SI POPx, ( w ) DI SYSVARS 0x2 ( CURRENT ) + MOVxm,
  CH CH XORrr, CL [SI] r[] MOV[], ( CX -> strlen )
  SI INCx, ( first char ) AX AX XORxx, ( initial prev )
  BEGIN, ( loop )
    DI AX SUBxx, ( jump to prev wordref )
    AL [DI] -1 r[]+ MOV[], 0x7f ANDALi, ( strlen )
    CL AL CMPrr, IFZ, ( same len )
      SI PUSHx, DI PUSHx, CX PUSHx, ( --> )
        3 ADDALi, ( header ) AH AH XORrr, DI AX SUBxx,
        CLD, REPZ, CMPSB,
      CX POPx, DI POPx, SI POPx, ( <-- )
      IFZ, DI PUSHx, AX 1 MOVxI, AX PUSHx, ;CODEOFLW? THEN,
    THEN,
  DI 3 SUBxi, AX [DI] x[] MOV[], ( prev ) AX AX ORxx,
  JNZ, AGAIN, ( loop ) ( cont. )
( ----- 416 )
( cont. FIND )
  SI DECx, SI PUSHx, AX AX XORrr, AX PUSHx, ;CODEOFLW?
CODE 1+ 1 chkPS, DI SP MOVxx, [DI] [w] INC[], ;CODE
CODE 1- 1 chkPS, DI SP MOVxx, [DI] [w] DEC[], ;CODE
CODE RSHIFT ( n u -- n ) 2 chkPS,
    CX POPx, AX POPx, AX SHRxCL, AX PUSHx, ;CODE
CODE LSHIFT ( n u -- n ) 2 chkPS,
    CX POPx, AX POPx, AX SHLxCL, AX PUSHx, ;CODE
( ----- 417 )
( See comment in B300. TODO: test on real hardware. in qemu,
  the resulting delay is more than 10x too long. )
CODE TICKS 1 chkPS, ( n=100us )
    SI DX MOVxx, ( protect IP )
    AX POPx, BX 100 MOVxI, BX MULx,
    CX DX MOVxx, ( high ) DX AX MOVxx, ( low )
    AX 0x8600 MOVxI, ( 86h, WAIT ) 0x15 INT,
    DX SI MOVxx, ( restore IP )
;CODE
CODE |M ( n -- lsb msb ) 1 chkPS,
    CX POPx, AH 0 MOVri,
    AL CL MOVrr, AX PUSHx, AL CH MOVrr, AX PUSHx, ;CODEOFLW?
CODE |L ( n -- msb lsb ) 1 chkPS,
    CX POPx, AH 0 MOVri,
    AL CH MOVrr, AX PUSHx, AL CL MOVrr, AX PUSHx, ;CODEOFLW?
( ----- 420 )
( PC/AT drivers. Load range: 420-426 )
CODE (emit) 1 chkPS,
    AX POPx, AH 0x0e MOVri, ( print char ) 0x10 INT,
;CODE
CODE (key?)
    AH AH XORrr, 0x16 INT, AH AH XORrr, AX PUSHx, AX PUSHx,
;CODEOFLW?
( ----- 421 )
CODE 13H08H ( driveno -- cx dx )
    DI POPx, DX PUSHx, ( protect ) DX DI MOVxx, AX 0x800 MOVxI,
    ES PUSHs, DI DI XORxx, ES DI MOVsx,
    0x13 INT, DI DX MOVxx, ES POPs, DX POPx, ( unprotect )
    CX PUSHx, DI PUSHx,
;CODEOFLW?
CODE 13H ( ax bx cx dx -- ax bx cx dx )
    SI POPx, ( DX ) CX POPx, BX POPx, AX POPx,
    DX PUSHx, ( protect ) DX SI MOVxx, DI DI XORxx,
    0x13 INT, SI DX MOVxx, DX POPx, ( unprotect )
    AX PUSHx, BX PUSHx, CX PUSHx, SI PUSHx,
;CODE
( ----- 422 )
: FDSPT 0x70 RAM+ ;
: FDHEADS 0x71 RAM+ ;
: _ ( AX BX sec )
    ( AH=read sectors, AL=1 sector, BX=dest,
      CH=trackno CL=secno DH=head DL=drive )
    FDSPT C@ /MOD ( AX BX sec trk )
    FDHEADS C@ /MOD ( AX BX sec head trk )
    8 LSHIFT ROT OR 1+ ( AX BX head CX )
    SWAP 8 LSHIFT 0x03 C@ ( boot drive ) OR ( AX BX CX DX )
    13H 2DROP 2DROP
;
( ----- 423 )
: FD@
    2 * 16 + ( blkfs starts at sector 16 )
    DUP 0x0201 BLK( ROT _
    0x0201 BLK( 0x200 + ROT 1+ _ ;
: FD!
    2 * 16 + ( blkfs starts at sector 16 )
    DUP 0x0301 BLK( ROT _
    0x0301 BLK( 0x200 + ROT 1+ _ ;
: FD$
    ( get number of sectors per track with command 08H. )
    0x03 ( boot drive ) C@ 13H08H
    8 RSHIFT 1+ FDHEADS C!
    0x3f AND FDSPT C!
;
( ----- 424 )
: COLS 80 ; : LINES 25 ;
CODE AT-XY ( x y )
    ( DH=row DL=col BH=page )
    AX POPx, BX POPx, DX PUSHx, ( protect )
    DH AL MOVrr, DL BL MOVrr, BX BX XORxx, AH 2 MOVri,
    0x10 INT, DX POPx, ( unprotect )
;CODE
( ----- 450 )
( 6809 declarations )
VARIABLE lblexec VARIABLE lbluflw VARIABLE lbloflw
: chkPS, ( n ) 2 * PS_ADDR -^ 1+ # CMPS, LBHS, lbluflw BBR, ;
: ;CODEOFLW?
  0 <> STS, 0 <> CMPU, LBLO, lblnext BBR, LBRA, lbloflw BBR, ;
( ----- 451 )
( 6809 Boot code. IP=Y, PS=S, RS=U  ) HERE ORG !
BRA, FBR, L1 ! ( main ) 0x0a ALLOT0 BRA, FBR, L2 ! ( QUIT )
7 ALLOT0 ( end of stable ABI )
lblnext BSET Y++ LDX,
lblexec BSET ( X=wordref )
  X+0 TST, IFZ, 1 X+N JMP, THEN, ( fast path for native )
  X+ LDA, DECA, IFNZ, ( not compiled )
    DECA, IFZ, ( cell ) PSHS, X ( PFA ) BRA, lblnext BBR, THEN,
    DECA, IFNZ, ( not does: alias, ialias or const )
      X+0 LDX, DECA, BEQ, lblexec BBR, ( alias )
      DECA, IFZ, ( ialias ) X+0 LDX, BRA, lblexec BBR, THEN,
      ( const ) PSHS, X BRA, lblnext BBR, THEN, ( does )
    X++ LDD, PSHS, X ( PFA ) D X TFR, ( X=DOES> addr )
  THEN, ( compiled )
  U++ STY, 0 <> STS, 0 <> CMPU, BHS, FBR, L3 ! ( oflw )
  X Y TFR, Y++ TST, X+0 LDX, BRA, lblexec BBR,
( ----- 452 )
lbluflw BSET BIN( @ 0x06 + () LDX, BRA, lblexec BBR,
lbloflw BSET L3 FSET RS_ADDR # LDU, PS_ADDR # LDS,
  BIN( @ 0x13 + () LDX, BRA, lblexec BBR,
L1 FSET ( main ) PS_ADDR # LDS, RS_ADDR # LDU,
BIN( @ 8 + () LDX, SYSVARS 0x02 ( CURRENT ) + () STX,
HERESTART # LDX, SYSVARS 0x04 ( HERE ) + () STX,
BIN( @ 4 + ( BOOT ) () LDX, BRA, lblexec BBR,
HERE 4 + XCURRENT ! ( make next prev 0 )
CODE QUIT L1 BSET ( for ABORT ) L2 FSET RS_ADDR # LDU,
  BIN( @ 0x0a + ( main ) () LDX, BRA, lblexec BBR,
CODE EXECUTE 1 chkPS, PULS, X LBRA, lblexec BBR,
CODE ABORT PS_ADDR # LDS, BRA, L1 ( QUIT ) BBR,
CODE BYE BEGIN, BRA, AGAIN,
CODE EXIT --U LDY, ;CODE
( ----- 453 )
CODE (b) Y+ LDB, CLRA, PSHS, D ;CODEOFLW?
CODE (n) Y++ LDD, PSHS, D ;CODEOFLW?
CODE (s) PSHS, Y Y+ LDB, Y+B LEAY, ;CODEOFLW?
CODE (br) Y+0 LDA, Y+A LEAY, ;CODE
CODE (?br) 1 chkPS, S+ LDA, S+ ORA,
  IFZ, Y+0 LDA, Y+A LEAY, ELSE, Y+ TST, THEN, ;CODE
CODE (loop) -2 U+N LDD, INCB, IFZ, INCA, THEN, -4 U+N CMPD,
  IFZ, ( exit loop ) --U TST, --U TST, Y+ TST,
  ELSE, ( loop ) -2 U+N STD, Y+0 LDA, Y+A LEAY, THEN, ;CODE
( ----- 454 )
CODE DROP 1 chkPS, 2 S+N LEAS, ;CODE
CODE DUP ( a -- a a ) 1 chkPS, S+0 LDD, PSHS, D ;CODEOFLW?
CODE ?DUP ( a -- a? a ) 1 chkPS,
  S+0 LDD, IFNZ, PSHS, D THEN, ;CODEOFLW?
CODE SWAP ( a b -- b a ) 2 chkPS,
  S+0 LDD, 2 S+N LDX, S+0 STX, 2 S+N STD, ;CODE
CODE OVER ( a b -- a b a ) 2 chkPS,
  2 S+N LDD, PSHS, D ;CODEOFLW?
CODE ROT ( a b c -- b c a ) 3 chkPS,
  4 S+N LDX, ( a ) 2 S+N LDD, ( b ) 4 S+N STD, S+0 LDD, ( c )
  2 S+N STD, S+0 STX, ;CODE
( ----- 455 )
CODE ROT> ( a b c -- c a b ) 3 chkPS,
  S+0 LDX, ( c ) 2 S+N LDD, ( b ) S+0 STD, 4 S+N LDD, ( a )
  2 S+N STD, 4 S+N STX, ;CODE
CODE R> --U LDD, PSHS, D ;CODE
CODE >R 1 chkPS, PULS, D U++ STD, ;CODE
CODE 2R> --U LDD, --U LDX, PSHS, XD ;CODE
CODE 2>R 2 chkPS, PULS, XD U++ STX, U++ STD, ;CODE
CODE I -2 U+N LDD, PSHS, D ;CODEOFLW?
CODE I' -4 U+N LDD, PSHS, D ;CODEOFLW?
CODE J -6 U+N LDD, PSHS, D ;CODEOFLW?
CODE @ 1 chkPS, [S+0] LDD, S+0 STD, ;CODE
CODE C@ 1 chkPS, [S+0] LDB, CLRA, S+0 STD, ;CODE
CODE ! 2 chkPS, PULS, X PULS, D X+0 STD, ;CODE
CODE C! 2 chkPS, PULS, X PULS, D X+0 STB, ;CODE
( ----- 456 )
CODE AND 2 chkPS, PULS, D S+0 ANDA, 1 S+N ANDB, S+0 STD, ;CODE
CODE OR 2 chkPS, PULS, D S+0 ORA, 1 S+N ORB, S+0 STD, ;CODE
CODE XOR 2 chkPS, PULS, D S+0 EORA, 1 S+N EORB, S+0 STD, ;CODE
CODE + 2 chkPS, PULS, D S+0 ADDD, S+0 STD, ;CODE
CODE - 2 chkPS, 2 S+N LDD, S++ SUBD, S+0 STD, ;CODE
CODE 1+ 1 chkPS, 1 S+N INC, LBNE, lblnext BBR, S+0 INC, ;CODE
CODE 1- 1 chkPS,
  1 S+N TST, IFZ, S+0 DEC, THEN, 1 S+N DEC, ;CODE
CODE LSHIFT ( n u -- n ) 2 chkPS,
  PULS, D TSTB, IFNZ, BEGIN,
    1 S+N LSL, S+0 ROL, DECB, BNE, AGAIN, THEN, ;CODE
CODE RSHIFT ( n u -- n ) 2 chkPS,
  PULS, D TSTB, IFNZ, BEGIN,
    S+0 LSR, 1 S+N ROR, DECB, BNE, AGAIN, THEN, ;CODE
( ----- 457 )
CODE /MOD ( a b -- a/b a%b ) 2 chkPS,
  16 # LDA, 0 <> STA, CLRA, CLRB, ( D=running rem ) BEGIN,
    1 # ORCC, 3 S+N ROL, ( a lsb ) 2 S+N ROL, ( a msb )
    ROLB, ROLA, S+0 SUBD,
    IF<, S+0 ADDD, 3 S+N DEC, ( a lsb ) THEN,
  0 <> DEC, BNE, AGAIN,
  2 S+N LDX, 2 S+N STD, ( rem ) S+0 STX, ( quotient ) ;CODE
CODE * ( a b -- a*b ) 2 chkPS,
  S+0 ( bm ) LDA, 3 S+N ( al ) LDB, MUL, S+0 ( bm ) STB,
  2 S+N ( am ) LDA, 1 S+N ( bl ) LDB, MUL,
    S+0 ( bm ) ADDB, S+0 STB,
  1 S+N ( al ) LDA, 3 S+N ( bl ) LDB, MUL,
  S++ ADDA, S+0 STD, ;CODE
( ----- 458 )
L4 BSET ( PUSH Z ) CCR B TFR, LSRB, LSRB,
  1 # ANDB, CLRA, S+0 STD, ;CODE
CODE = 2 chkPS, PULS, D S+0 CMPD, BRA, L4 ( PUSH Z ) BBR,
CODE NOT 1 chkPS, S+0 LDB, 1 S+N ORB, BRA, L4 ( PUSH Z ) BBR,
CODE < ( inv args ) 2 chkPS,
  2 S+N LDD, S++ CMPD, CCR B TFR, 1 # ANDB, CLRA, S+0 STD,
  ;CODE
CODE |L ( n -- msb lsb ) 1 chkPS,
  S+0 LDD, 1 S+N STA, S+0 CLR, CLRA, PSHS, D ;CODEOFLW?
CODE |M ( n -- lsb msb ) 1 chkPS,
  CLRA, S+0 LDB, S+0 CLR, PSHS, D ;CODEOFLW?
( ----- 459 )
L1 BSET ( X=s1 Y=s2 B=cnt ) BEGIN,
  X+ LDA, Y+ CMPA, IFNZ, RTS, THEN, DECB, BNE, AGAIN, RTS,
CODE []= ( a1 a2 u -- f TODO: allow u>0xff ) 3 chkPS,
  0 <> STY, PULS, DXY ( B=u, X=a2, Y=a1 ) L1 LPC () JSR,
  IFZ, 1 # LDD, ELSE, CLRA, CLRB, THEN, PSHS, D 0 <> LDY, ;CODE
CODE FIND ( w -- a f ) 1 chkPS,
  SYSVARS 0x02 + ( CURRENT ) () LDX, 0 <> STY, BEGIN,
    -X LDB, 0x7f # ANDB, --X TST, [S+0] CMPB, IF=,
      2 <> STX, S+0 LDY, Y+ LDA, NEGA, X+A LEAX, L1 LPC () JSR,
      IFZ, ( match ) 0 <> LDY, 2 <> LDD, 3 # ADDD, S+0 STD,
        1 # LDD, PSHS, D ;CODEOFLW? THEN,
      2 <> LDX, THEN, ( nomatch, X=prev )
    X+0 LDD, IFZ, ( stop ) 0 <> LDY, PSHS, D ;CODE THEN,
    X D TFR, X+0 SUBD, D X TFR, BRA, AGAIN,
( ----- 460 )
6809 drivers

461 TRS-80 Color Computer 2
( ----- 461 )
( CoCo2 drivers. Load range: 461-463 )
PC ," @HPX08" CR C, ," AIQY19" 0 C,
   ," BJRZ2:" 0 C,  ," CKS_3;" 0 C,
   ," DLT_4," 0 C,  ," EMU" BS C, ," 5-" 0 C,
   ," FNV_6." 0 C,  ," GOW 7/" 0 C,
   ," @hpx0(" CR C, ," aiqy!)" 0 C,
   ," bjrz" '"' C, '*' C, 0 C, ," cks_#+" 0 C,
   ," dlt_$<" 0 C,  ," emu" BS C, ," %=" 0 C,
   ," fnv_&>" 0 C,  ," gow '?" 0 C,
L1 BSET ( PC ) # LDX, 0xfe # LDA, BEGIN, ( 8 times )
  0xff02 () STA, ( set col ) 0xff00 () LDB, ( read row )
  ( ignore 8th row ) 0x80 # ORB, 0x7f # CMPA, IF=,
    ( ignore shift row ) 0x40 # ORB, THEN,
  INCB, IFNZ, ( key pressed ) DECB, RTS, THEN,
  ( inc col ) 7 X+N LEAX, 1 # ORCC, ROLA, BCS, AGAIN,
  ( no key ) CLRB, RTS,
( ----- 462 )
CODE (key?) ( -- c? f ) CLRA, CLRB, PSHS, D L1 LPC () JSR,
  IFNZ, ( key! row mask in B col ptr in X )
    ( is shift pressed? ) 0x7f # LDA, 0xff02 () STA,
    0xff00 () LDA, 0x40 # ANDA, IFZ, ( shift! )
      56 X+N LEAX, THEN,
    BEGIN, X+ LDA, LSRB, BCS, AGAIN,
    ( A = our char ) 1 S+N STA, TSTA, IFNZ, ( valid key )
      1 # LDD, ( f ) PSHS, D ( wait for keyup )
      BEGIN, L1 LPC () JSR, BNE, AGAIN, THEN,
  THEN, ;CODEOFLW?
( ----- 463 )
32 CONSTANT COLS 16 CONSTANT LINES
: CELL! ( c pos -- )
  SWAP 0x20 - DUP 0x5f < IF
    DUP 0x20 < IF 0x60 + ELSE DUP 0x40 < IF 0x20 + ELSE 0x40 -
      THEN THEN ( pos glyph )
    SWAP 0x400 + C! ELSE 2DROP THEN ;
: CURSOR! ( new old -- )
  DROP 0x400 + DUP C@ 0x40 XOR SWAP C! ;
( ----- 500 )
( loop microcomputer )
0xff00 CONSTANT RS_ADDR        0xfffa CONSTANT PS_ADDR
RS_ADDR  0xb0 - CONSTANT SYSVARS
SYSVARS  0xa0 + CONSTANT GRID_MEM
GRID_MEM 0x03 + CONSTANT PS2_MEM
0xa0 CONSTANT VSYNC  0xb3 CONSTANT VADDRL 0xb4 CONSTANT VADDRH
0xb0 CONSTANT VSCRXL 0xb1 CONSTANT VSCRYL 0xb2 CONSTANT VSCRH
0xb8 CONSTANT VNAME  0xbc CONSTANT VNAME+
0xb9 CONSTANT VATTR  0xbd CONSTANT VATTR+
0xba CONSTANT VPATT  0xbe CONSTANT VPATT+
0xbb CONSTANT VPALE  0xbf CONSTANT VPALE+
0xc0 CONSTANT SIOA_DATA   0xc1 CONSTANT SIOA_CTL
0xc2 CONSTANT SIOB_DATA   0xc3 CONSTANT SIOB_CTL
0xd0 CONSTANT SDC_DATA    0xd1 CONSTANT SDC_CTL
0x10 CONSTANT SDC_DEVID   0x04 CONSTANT SDC_SPEED
0x8000 CONSTANT HERESTART
( ----- 501 )
5 LOAD        ( z80 assembler )
262 263 LOADR ( font compiler )
280 LOAD      ( boot.z80.decl )
200 205 LOADR ( xcomp )
281 300 LOADR ( boot.z80 )
210 231 LOADR ( forth low )








( at end of block because it overwrites BLK )
CREATE ~FNT CPFNT7x7
( ----- 502 )
503 505 LOADR ( loopmicro drivers )
240 241 LOADR ( grid subsystem )
325 328 LOADR ( SIO )
: (ps2kc) SIOA<? IF EXIT ELSE 0 THEN ;
246 249 LOADR ( PS/2 keyboard )
250 258 LOADR ( SD card )
236 239 LOADR ( forth high )
(entry) _ PC ORG @ 8 + ! ( Update LATEST )
," VIDEO$ GRID$ SIOA$ PS2$ BLK$ "
," ' SDC@ ' BLK@* **! ' SDC! ' BLK!* **! " EOT,
( ----- 503 )
: VADDR! |L [ VADDRL LITN ] PC! [ VADDRH LITN ] PC! ;
: VNAME! [ VNAME LITN ] PC! ; : VNAME!+ [ VNAME+ LITN ] PC! ;
: VATTR! [ VATTR LITN ] PC! ; : VATTR!+ [ VATTR+ LITN ] PC! ;
: VPATT! [ VPATT LITN ] PC! ; : VPATT!+ [ VPATT+ LITN ] PC! ;
: VPALE! [ VPALE LITN ] PC! ; : VPALE!+ [ VPALE+ LITN ] PC! ;
: VNAME@ [ VNAME LITN ] PC@ ; : VNAME@+ [ VNAME+ LITN ] PC@ ;
: VATTR@ [ VATTR LITN ] PC@ ; : VATTR@+ [ VATTR+ LITN ] PC@ ;
: VPATT@ [ VPATT LITN ] PC@ ; : VPATT@+ [ VPATT+ LITN ] PC@ ;
: VPALE@ [ VPALE LITN ] PC@ ; : VPALE@+ [ VPALE+ LITN ] PC@ ;
0x02 CONSTANT TEXT_ATTR  0xa2 CONSTANT CURSOR_ATTR
  80 CONSTANT COLS         30 CONSTANT LINES
( ----- 504 )
CREATE _ ( sync timings ) 0xd9 C, 0x39 C, 0xd4 C, 0x74 C,
  0xf6 C, 0x7e C, 0xe4 C, 0xe2 C, 0xe1 C, 0xf4 C, 0x90 C,
: VSYNC$ 11 0 DO _ I + C@ [ VSYNC LITN ] I + PC! LOOP ;
: _ 8 0 DO DUP 0x8080 AND |M 3 RSHIFT SWAP 7 RSHIFT OR
  VPATT!+ 1 LSHIFT LOOP DROP ;
: FNT$ SPC 32 * VADDR! ~FNT 95 0 DO
  3 0 DO DUP @ _ 2 + LOOP C@+ _ LOOP DROP ;
CREATE COLORS 0x00 C, 0x0c C, 0x20 C, 0x38 C,
              0xc0 C, 0x8c C, 0xe0 C, 0xfc C,
              0x03 C, 0x0f C, 0x33 C, 0x3b C,
              0xc3 C, 0x8f C, 0xe3 C, 0xff C,
: _ ( addr -- addr+4k ) 16 0 DO 16 0 DO DUP
    VADDR! COLORS J + C@ VPALE!+ COLORS I + C@ VPALE!+
  16 + LOOP LOOP ;
: VPALE$ 0 _ _ DROP ;
( ----- 505 )
: VSCR$ -3 [ VSCRXL LITN ] PC! -2 [ VSCRYL LITN ] PC!
  0b01110011 [ VSCRH LITN ] PC! ;
: VIDEO$ VSYNC$ FNT$ VPALE$ VSCR$
  0 VADDR! 8192 0 DO SPC VNAME! TEXT_ATTR VATTR!+ LOOP ;
: VPOS! ( pos ) COLS /MOD 128 * + VADDR! ;
: CELL! ( c pos ) VPOS! VNAME! ;
: CURSOR! ( new old ) VPOS! TEXT_ATTR   VATTR!
                      VPOS! CURSOR_ATTR VATTR! ;
: (spix) [ SDC_DATA LITN ] PC! [ SDC_CTL LITN ] PC@ ;
: (spie) [ SDC_SPEED LITN ] OR [ SDC_CTL LITN ] PC! ;
