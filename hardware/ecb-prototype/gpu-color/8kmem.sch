EESchema Schematic File Version 4
LIBS:Color-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 7 10
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L idt7005:IDT7005J U21
U 1 1 5D0163D4
P 5700 3800
AR Path="/5D0163BD/5D0163D4" Ref="U21"  Part="1" 
AR Path="/5D01881D/5D0163D4" Ref="U23"  Part="1" 
AR Path="/5D068D93/5D0163D4" Ref="U24"  Part="1" 
AR Path="/5D03F4FF/5D0163D4" Ref="U22"  Part="1" 
F 0 "U23" H 6050 5400 50  0000 C CNN
F 1 "IDT7005J" H 5700 3800 50  0000 C CNN
F 2 "Package_LCC:PLCC-68_THT-Socket" H 5700 3850 50  0001 C CNN
F 3 "" H 5700 3850 50  0001 C CNN
	1    5700 3800
	1    0    0    -1  
$EndComp
Text HLabel 6400 3900 2    50   Input ~ 0
A0
Text HLabel 6400 4000 2    50   Input ~ 0
A1
Text HLabel 6400 4100 2    50   Input ~ 0
A2
Text HLabel 6400 4200 2    50   Input ~ 0
A3
Text HLabel 6400 4300 2    50   Input ~ 0
A4
Text HLabel 6400 4400 2    50   Input ~ 0
A5
Text HLabel 6400 4500 2    50   Input ~ 0
A6
Text HLabel 6400 4600 2    50   Input ~ 0
A7
Text HLabel 6400 4700 2    50   Input ~ 0
A8
Text HLabel 6400 4800 2    50   Input ~ 0
A9
Text HLabel 6400 4900 2    50   Input ~ 0
A10
Text HLabel 6400 5000 2    50   Input ~ 0
A11
Text HLabel 6400 5100 2    50   Input ~ 0
A12
Text HLabel 6400 2800 2    50   Input ~ 0
Q0
Text HLabel 6400 2900 2    50   Input ~ 0
Q1
Text HLabel 6400 3000 2    50   Input ~ 0
Q2
Text HLabel 6400 3100 2    50   Input ~ 0
Q3
Text HLabel 6400 3200 2    50   Input ~ 0
Q4
Text HLabel 6400 3300 2    50   Input ~ 0
Q5
Text HLabel 6400 3400 2    50   Input ~ 0
Q6
Text HLabel 6400 3500 2    50   Input ~ 0
Q7
$Comp
L power:VCC #PWR0161
U 1 1 5DFCDEEE
P 5700 1700
AR Path="/5D0163BD/5DFCDEEE" Ref="#PWR0161"  Part="1" 
AR Path="/5D01881D/5DFCDEEE" Ref="#PWR0168"  Part="1" 
AR Path="/5D03F4FF/5DFCDEEE" Ref="#PWR0175"  Part="1" 
AR Path="/5D068D93/5DFCDEEE" Ref="#PWR0182"  Part="1" 
F 0 "#PWR0168" H 5700 1550 50  0001 C CNN
F 1 "VCC" H 5717 1873 50  0000 C CNN
F 2 "" H 5700 1700 50  0001 C CNN
F 3 "" H 5700 1700 50  0001 C CNN
	1    5700 1700
	1    0    0    -1  
$EndComp
Wire Wire Line
	5600 1900 5600 1800
Wire Wire Line
	5800 1800 5800 1900
Wire Wire Line
	5700 1900 5700 1800
Wire Wire Line
	5600 1800 5700 1800
Connection ~ 5700 1800
Wire Wire Line
	5700 1800 5700 1700
Wire Wire Line
	5700 1800 5800 1800
Wire Wire Line
	5550 5700 5550 5800
Wire Wire Line
	5550 5800 5650 5800
Wire Wire Line
	5850 5800 5850 5700
Wire Wire Line
	5750 5700 5750 5800
Connection ~ 5750 5800
Wire Wire Line
	5750 5800 5850 5800
Wire Wire Line
	5650 5700 5650 5800
Connection ~ 5650 5800
Wire Wire Line
	5650 5800 5750 5800
Wire Wire Line
	5650 5800 5650 5900
$Comp
L power:GND #PWR0162
U 1 1 5DFCE249
P 5650 5900
AR Path="/5D0163BD/5DFCE249" Ref="#PWR0162"  Part="1" 
AR Path="/5D01881D/5DFCE249" Ref="#PWR0169"  Part="1" 
AR Path="/5D03F4FF/5DFCE249" Ref="#PWR0176"  Part="1" 
AR Path="/5D068D93/5DFCE249" Ref="#PWR0183"  Part="1" 
F 0 "#PWR0169" H 5650 5650 50  0001 C CNN
F 1 "GND" H 5655 5727 50  0000 C CNN
F 2 "" H 5650 5900 50  0001 C CNN
F 3 "" H 5650 5900 50  0001 C CNN
	1    5650 5900
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0163
U 1 1 5DFCE3EC
P 4900 2100
AR Path="/5D0163BD/5DFCE3EC" Ref="#PWR0163"  Part="1" 
AR Path="/5D01881D/5DFCE3EC" Ref="#PWR0170"  Part="1" 
AR Path="/5D03F4FF/5DFCE3EC" Ref="#PWR0177"  Part="1" 
AR Path="/5D068D93/5DFCE3EC" Ref="#PWR0184"  Part="1" 
F 0 "#PWR0170" H 4900 1950 50  0001 C CNN
F 1 "VCC" H 4917 2273 50  0000 C CNN
F 2 "" H 4900 2100 50  0001 C CNN
F 3 "" H 4900 2100 50  0001 C CNN
	1    4900 2100
	1    0    0    -1  
$EndComp
Wire Wire Line
	4900 2100 4900 2200
Wire Wire Line
	4900 2200 5000 2200
NoConn ~ 6400 3700
Wire Wire Line
	6400 2400 6500 2400
Wire Wire Line
	6500 2400 6500 2300
$Comp
L power:VCC #PWR0164
U 1 1 5DFCF598
P 6500 2300
AR Path="/5D0163BD/5DFCF598" Ref="#PWR0164"  Part="1" 
AR Path="/5D01881D/5DFCF598" Ref="#PWR0171"  Part="1" 
AR Path="/5D03F4FF/5DFCF598" Ref="#PWR0178"  Part="1" 
AR Path="/5D068D93/5DFCF598" Ref="#PWR0185"  Part="1" 
F 0 "#PWR0171" H 6500 2150 50  0001 C CNN
F 1 "VCC" H 6517 2473 50  0000 C CNN
F 2 "" H 6500 2300 50  0001 C CNN
F 3 "" H 6500 2300 50  0001 C CNN
	1    6500 2300
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0165
U 1 1 5DFCF731
P 6700 2700
AR Path="/5D0163BD/5DFCF731" Ref="#PWR0165"  Part="1" 
AR Path="/5D01881D/5DFCF731" Ref="#PWR0172"  Part="1" 
AR Path="/5D03F4FF/5DFCF731" Ref="#PWR0179"  Part="1" 
AR Path="/5D068D93/5DFCF731" Ref="#PWR0186"  Part="1" 
F 0 "#PWR0172" H 6700 2450 50  0001 C CNN
F 1 "GND" H 6705 2527 50  0000 C CNN
F 2 "" H 6700 2700 50  0001 C CNN
F 3 "" H 6700 2700 50  0001 C CNN
	1    6700 2700
	1    0    0    -1  
$EndComp
Wire Wire Line
	6700 2700 6700 2500
Wire Wire Line
	6700 2500 6500 2500
Wire Wire Line
	6400 2600 6500 2600
Wire Wire Line
	6500 2600 6500 2500
Connection ~ 6500 2500
Wire Wire Line
	6500 2500 6400 2500
$Comp
L Device:D_Small_ALT D1
U 1 1 5DFCFD05
P 4800 3700
AR Path="/5D0163BD/5DFCFD05" Ref="D1"  Part="1" 
AR Path="/5D01881D/5DFCFD05" Ref="D3"  Part="1" 
AR Path="/5D03F4FF/5DFCFD05" Ref="D2"  Part="1" 
AR Path="/5D068D93/5DFCFD05" Ref="D4"  Part="1" 
F 0 "D3" H 4700 3650 50  0000 C CNN
F 1 "BAT46" H 5000 3650 50  0000 C CNN
F 2 "Diode_THT:D_DO-35_SOD27_P7.62mm_Horizontal" V 4800 3700 50  0001 C CNN
F 3 "~" V 4800 3700 50  0001 C CNN
	1    4800 3700
	-1   0    0    1   
$EndComp
Wire Wire Line
	4900 3700 5000 3700
Text GLabel 4450 3700 0    50   Input ~ 0
~WAIT
Wire Wire Line
	4450 3700 4700 3700
Text GLabel 5000 2800 0    50   Input ~ 0
D0
Text GLabel 5000 2900 0    50   Input ~ 0
D1
Text GLabel 5000 3000 0    50   Input ~ 0
D2
Text GLabel 5000 3100 0    50   Input ~ 0
D3
Text GLabel 5000 3200 0    50   Input ~ 0
D4
Text GLabel 5000 3300 0    50   Input ~ 0
D5
Text GLabel 5000 3400 0    50   Input ~ 0
D6
Text GLabel 5000 3500 0    50   Input ~ 0
D7
Text GLabel 5000 2400 0    50   Input ~ 0
~WR
Text GLabel 4800 2500 0    50   Input ~ 0
~RD
Wire Wire Line
	5000 2500 4800 2500
Text HLabel 5000 2600 0    50   Input ~ 0
~CE
Text GLabel 5000 3900 0    50   Input ~ 0
AC0
Text GLabel 5000 4000 0    50   Input ~ 0
AC1
Text GLabel 5000 4100 0    50   Input ~ 0
AC2
Text GLabel 5000 4200 0    50   Input ~ 0
AC3
Text GLabel 5000 4300 0    50   Input ~ 0
AC4
Text GLabel 5000 4400 0    50   Input ~ 0
AC5
Text GLabel 5000 4500 0    50   Input ~ 0
AC6
Text GLabel 5000 4600 0    50   Input ~ 0
AC7
Text GLabel 5000 4700 0    50   Input ~ 0
AC8
Text GLabel 5000 4800 0    50   Input ~ 0
AC9
Text GLabel 5000 4900 0    50   Input ~ 0
AC10
Text GLabel 5000 5000 0    50   Input ~ 0
AC11
Text GLabel 5000 5100 0    50   Input ~ 0
AC12
NoConn ~ 6400 5400
NoConn ~ 5000 5400
$Comp
L power:VCC #PWR0166
U 1 1 5EE0B03B
P 4600 5200
AR Path="/5D0163BD/5EE0B03B" Ref="#PWR0166"  Part="1" 
AR Path="/5D01881D/5EE0B03B" Ref="#PWR0173"  Part="1" 
AR Path="/5D03F4FF/5EE0B03B" Ref="#PWR0180"  Part="1" 
AR Path="/5D068D93/5EE0B03B" Ref="#PWR0187"  Part="1" 
F 0 "#PWR0173" H 4600 5050 50  0001 C CNN
F 1 "VCC" H 4617 5373 50  0000 C CNN
F 2 "" H 4600 5200 50  0001 C CNN
F 3 "" H 4600 5200 50  0001 C CNN
	1    4600 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	5000 5300 4600 5300
Wire Wire Line
	4600 5300 4600 5200
Wire Wire Line
	6400 5300 6800 5300
Wire Wire Line
	6800 5300 6800 5200
$Comp
L power:VCC #PWR0167
U 1 1 5EE0B75F
P 6800 5200
AR Path="/5D0163BD/5EE0B75F" Ref="#PWR0167"  Part="1" 
AR Path="/5D01881D/5EE0B75F" Ref="#PWR0174"  Part="1" 
AR Path="/5D03F4FF/5EE0B75F" Ref="#PWR0181"  Part="1" 
AR Path="/5D068D93/5EE0B75F" Ref="#PWR0188"  Part="1" 
F 0 "#PWR0174" H 6800 5050 50  0001 C CNN
F 1 "VCC" H 6817 5373 50  0000 C CNN
F 2 "" H 6800 5200 50  0001 C CNN
F 3 "" H 6800 5200 50  0001 C CNN
	1    6800 5200
	1    0    0    -1  
$EndComp
$EndSCHEMATC
