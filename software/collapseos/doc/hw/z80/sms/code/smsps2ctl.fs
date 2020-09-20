( Receives keystrokes from PS/2 keyboard and send them to the
'164. On the PS/2 side, it works the same way as the controller
in the rc2014/ps2 recipe.  However, in this case, what we have
on the other side isn't a z80 bus, it's the one of the two
controller ports of the SMS through a DB9 connector.

The PS/2 related code is copied from rc2014/ps2 without much
change. The only differences are that it pushes its data to a
'164 instead of a '595 and that it synchronizes with the SMS
with a SR latch, so we don't need PCINT. We can also afford to
run at 1MHz instead of 8.

*** Register Usage ***

GPIOR0 flags:
0 - when set, indicates that the DATA pin was high when we
    received a bit through INT0. When we receive a bit, we set
    flag T to indicate it.

R16: tmp stuff
R17: recv buffer. Whenever we receive a bit, we push it in
     there.
R18: recv step:
     - 0: idle
     - 1: receiving data
     - 2: awaiting parity bit
     - 3: awaiting stop bit
R19: Register used for parity computations and tmp value in
     some other places
R20: data being sent to the '164
Y: pointer to the memory location where the next scan code from
   ps/2 will be written.
Z: pointer to the next scan code to push to the 595 )

0x0060 CONSTANT SRAM_START
0x015f CONSTANT RAMEND
0x3d CONSTANT SPL
0x3e CONSTANT SPH
0x11 CONSTANT GPIOR0
0x35 CONSTANT MCUCR
0x33 CONSTANT TCCR0B
0x3b CONSTANT GIMSK
0x38 CONSTANT TIFR
0x32 CONSTANT TCNT0
0x16 CONSTANT PINB
0x17 CONSTANT DDRB
0x18 CONSTANT PORTB
2 CONSTANT CLK
1 CONSTANT DATA
3 CONSTANT CP
0 CONSTANT LQ
4 CONSTANT LR
0x100 100 - CONSTANT TIMER_INITVAL
( We need a lot of labels in this program... )
VARIABLE L5 VARIABLE L6 VARIABLE L7 VARIABLE L8

H@ ORG !
L1 FLBL, ( main )
L2 FLBL, ( hdlINT0 )

( Read DATA and set GPIOR0/0 if high. Then, set flag T.
  no SREG fiddling because no SREG-modifying instruction )
L2 ' RJMP FLBL! ( hdlINT0 )
PINB DATA SBIC,
GPIOR0 0 SBI,
SET,
RETI,

L1 ' RJMP FLBL! ( main )
R16 RAMEND 0xff AND LDI,
SPL R16 OUT,
R16 RAMEND 8 RSHIFT LDI,
SPH R16 OUT,
( init variables )
R18 CLR,
GPIOR0 R18 OUT,
( Setup int0
  INT0, falling edge )
R16 0x02 ( ISC01 ) LDI,
MCUCR R16 OUT,
( Enable INT0 )
R16 0x40 ( INT0 ) LDI,
GIMSK R16 OUT,
( Setup buffer )
YH CLR,
YL SRAM_START 0xff AND LDI,
ZH CLR,
ZL SRAM_START 0xff AND LDI,
( Setup timer. We use the timer to clear up "processbit"
registers after 100us without a clock. This allows us to start
the next frame in a fresh state. at 1MHZ, no prescaling is
necessary. Each TCNT0 tick is already 1us long. )
R16 0x01 ( CS00 ) LDI, ( no prescaler )
TCCR0B R16 OUT,
( init DDRB )
DDRB CP SBI,
PORTB LR CBI,
DDRB LR SBI,
SEI,

L1 LBL! ( loop )
L2 FLBL, ( BRTS processbit. flag T set? we have a bit to
           process )
YL ZL CP, ( if YL == ZL, buf is empty )
L3 FLBL, ( BRNE sendTo164. YL != ZL? buf has data )
( nothing to do. Before looping, let's check if our
  communication timer overflowed. )
R16 TIFR IN,
R16 1 ( TOV0 ) SBRC,
L4 FLBL, ( RJMP processbitReset, timer0 overflow? reset )
( Nothing to do for real. )
L1 ' RJMP LBL, ( loop )

( Process the data bit received in INT0 handler. )
L2 ' BRTS FLBL! ( processbit )
R19 GPIOR0 IN, ( backup GPIOR0 before we reset T )
R19 0x1 ANDI, ( only keep the first flag )
GPIOR0 0 CBI,
CLT, ( ready to receive another bit )

( We've received a bit. reset timer )
L2 FLBL, ( RCALL resetTimer )

( Which step are we at? )
R18 TST,
L5 FLBL, ( BREQ processbits0 )
R18 1 CPI,
L6 FLBL, ( BREQ processbits1 )
R18 2 CPI,
L7 FLBL, ( BREQ processbits2 )
( step 3: stop bit )
R18 CLR, ( happens in all cases )
( DATA has to be set )
R19 TST, ( was DATA set? )
L1 ' BREQ LBL, ( loop, not set? error, don't push to buf )
( push r17 to the buffer )
Y+ R17 ST,
L8 FLBL, ( RCALL checkBoundsY )
L1 ' RJMP LBL,

L5 ' BREQ FLBL! ( processbits0 )
( step 0 - start bit )
( DATA has to be cleared )
R19 TST, ( was DATA set? )
L1 ' BRNE LBL, ( loop. set? error. no need to do anything. keep
                 r18 as-is. )
( DATA is cleared. prepare r17 and r18 for step 1 )
R18 INC,
R17 0x80 LDI,
L1 ' RJMP LBL, ( loop )

L6 ' BREQ FLBL! ( processbits1 )
( step 1 - receive bit
  We're about to rotate the carry flag into r17. Let's set it
  first depending on whether DATA is set. )
CLC,
R19 0 SBRC, ( skip if DATA is cleared )
SEC,
( Carry flag is set )
R17 ROR,
( Good. now, are we finished rotating? If carry flag is set,
  it means that we've rotated in 8 bits. )
L1 ' BRCC LBL, ( loop )
( We're finished, go to step 2 )
R18 INC,
L1 ' RJMP LBL, ( loop )

L7 ' BREQ FLBL! ( processbits2 )
( step 2 - parity bit )
R1 R19 MOV,
R19 R17 MOV,
L5 FLBL, ( RCALL checkParity )
R1 R16 CP,
L6 FLBL, ( BRNE processBitError, r1 != r16? wrong parity )
R18 INC,
L1 ' RJMP LBL, ( loop )

L6 ' BRNE FLBL! ( processBitError )
R18 CLR,
R19 0xfe LDI,
L6 FLBL, ( RCALL sendToPS2 )
L1 ' RJMP LBL, ( loop )

L4 ' RJMP FLBL! ( processbitReset )
R18 CLR,
L4 FLBL, ( RCALL resetTimer )
L1 ' RJMP LBL, ( loop )

L3 ' BRNE FLBL! ( sendTo164 )
( Send the value of r20 to the '164 )
PINB LQ SBIS, ( LQ is set? we can send the next byte )
L1 ' RJMP LBL, ( loop, even if we have something in the
                 buffer, we can't: the SMS hasn't read our
                 previous buffer yet. )
( We disable any interrupt handling during this routine.
  Whatever it is, it has no meaning to us at this point in time
  and processing it might mess things up. )
CLI,
DDRB DATA SBI,
R20 Z+ LD,
L3 FLBL, ( RCALL checkBoundsZ )
R16 R8 LDI,

BEGIN,
    PORTB DATA CBI,
    R20 7 SBRC, ( if leftmost bit isn't cleared, set DATA high )
    PORTB DATA SBI,
    ( toggle CP )
    PORTB CP CBI,
    R20 LSL,
    PORTB CP SBI,
    R16 DEC,
' BRNE AGAIN?, ( not zero yet? loop )
( release PS/2 )
DDRB DATA CBI,
SEI,
( Reset the latch to indicate that the next number is ready )
PORTB LR SBI,
PORTB LR CBI,
L1 ' RJMP LBL, ( loop )

L2 ' RCALL FLBL! L4 ' RCALL FLBL! L2 LBL! ( resetTimer )
R16 TIMER_INITVAL LDI,
TCNT0 R16 OUT,
R16 0x02 ( TOV0 ) LDI,
TIFR R16 OUT,
RET,

L6 ' RCALL FLBL! ( sendToPS2 )
( Send the value of r19 to the PS/2 keyboard )
CLI,
( First, indicate our request to send by holding both Clock low
  for 100us, then pull Data low lines low for 100us. )
PORTB CLK CBI,
DDRB CLK SBI,
L2 ' RCALL LBL, ( resetTimer )

( Wait until the timer overflows )
BEGIN,
    R16 TIFR IN,
    R16 1 ( TOV0 ) SBRS,
AGAIN,
( Good, 100us passed. )
( Pull Data low, that's our start bit. )
PORTB DATA CBI,
DDRB DATA SBI,

( Now, let's release the clock. At the next raising edge, we'll
  be expected to have set up our first bit (LSB). We set up
  when CLK is low. )
DDRB CLK CBI, ( Should be starting high now. )

( We will do the next loop 8 times )
R16 8 LDI,
( Let's remember initial r19 for parity )
R1 R19 MOV,

BEGIN,
    ( Wait for CLK to go low )
    BEGIN, PINB CLK SBIC, AGAIN,
    ( set up DATA )
    PORTB DATA CBI,
    R19 0 SBRC, ( skip if LSB is clear )
    PORTB DATA SBI,
    R19 LSR,
	( Wait for CLK to go high )
    BEGIN, PINB CLK SBIS, AGAIN,
    16 DEC,
' BRNE AGAIN?, ( not zero? loop )

( Data was sent, CLK is high. Let's send parity )
R19 R1 MOV, ( recall saved value )
L6 FLBL, ( RCALL checkParity )
( Wait for CLK to go low )
BEGIN, PINB CLK SBIC, AGAIN,
( set parity bit )
PORTB DATA CBI,
R16 0 SBRC, ( parity bit in r16 )
PORTB DATA SBI,
( Wait for CLK to go high )
BEGIN, PINB CLK SBIS, AGAIN,
( Wait for CLK to go low )
BEGIN, PINB CLK SBIC, AGAIN,
( We can now release the DATA line )
DDRB DATA CBI,
( Wait for DATA to go low, that's our ACK )
BEGIN, PINB DATA SBIC, AGAIN,
( Wait for CLK to go low )
BEGIN, PINB CLK SBIC, AGAIN,
( We're finished! Enable INT0, reset timer, everything back to
  normal! )
L2 ' RCALL LBL, ( resetTimer )
CLT, ( also, make sure T isn't mistakely set. )
SEI,
RET,

L8 ' RCALL FLBL! ( checkBoundsY )
( Check that Y is within bounds, reset to SRAM_START if not. )
YL TST,
IF, RET, ( not zero, nothing to do ) THEN,
( YL is zero. Reset Z )
YH CLR,
YL SRAM_START 0xff AND LDI,
RET,

L3 ' RCALL FLBL! ( checkBoundsZ )
( Check that Z is within bounds, reset to SRAM_START if not. )
ZL TST,
IF, RET, ( not zero, nothing to do ) THEN,
( ZL is zero. Reset Z )
ZH CLR,
ZL SRAM_START 0xff AND LDI,
RET,

L5 ' RCALL FLBL! L6 ' RCALL FLBL! ( checkParity )
( Counts the number of 1s in r19 and set r16 to 1 if there's an
  even number of 1s, 0 if they're odd. )
R16 1 LDI,
BEGIN,
    R19 LSR,
    ' BRCC SKIP, R16 INC, ( carry set? we had a 1 ) TO,
    R19 TST, ( is r19 zero yet? )
' BRNE AGAIN?, ( no? loop )
R16 0x1 ANDI,
RET,
