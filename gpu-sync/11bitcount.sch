EESchema Schematic File Version 4
LIBS:Graphics-cache
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 4 7
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
L power:VCC #PWR?
U 1 1 5CC1EE88
P 8700 3650
AR Path="/5CC1EE88" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EE88" Ref="#PWR0104"  Part="1" 
AR Path="/5CC8DF11/5CC1EE88" Ref="#PWR0121"  Part="1" 
F 0 "#PWR0121" H 8700 3500 50  0001 C CNN
F 1 "VCC" H 8717 3823 50  0000 C CNN
F 2 "" H 8700 3650 50  0001 C CNN
F 3 "" H 8700 3650 50  0001 C CNN
	1    8700 3650
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74LS161 U?
U 1 1 5CC1EE8E
P 6100 3650
AR Path="/5CC1EE8E" Ref="U?"  Part="1" 
AR Path="/5CC1878B/5CC1EE8E" Ref="U2"  Part="1" 
AR Path="/5CC8DF11/5CC1EE8E" Ref="U5"  Part="1" 
F 0 "U5" V 6300 3150 50  0000 C CNN
F 1 "74AC161" V 6100 3650 50  0000 C CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket_LongPads" H 6100 3650 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74LS161" H 6100 3650 50  0001 C CNN
	1    6100 3650
	0    1    1    0   
$EndComp
$Comp
L 74xx:74LS161 U?
U 1 1 5CC1EE94
P 7900 3650
AR Path="/5CC1EE94" Ref="U?"  Part="1" 
AR Path="/5CC1878B/5CC1EE94" Ref="U1"  Part="1" 
AR Path="/5CC8DF11/5CC1EE94" Ref="U4"  Part="1" 
F 0 "U4" V 8100 3150 50  0000 C CNN
F 1 "74AC161" V 7900 3650 50  0000 C CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket_LongPads" H 7900 3650 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74LS161" H 7900 3650 50  0001 C CNN
	1    7900 3650
	0    1    1    0   
$EndComp
Wire Wire Line
	7900 4150 7900 4250
Wire Wire Line
	7900 4250 7000 4250
Wire Wire Line
	7000 4250 7000 2950
Wire Wire Line
	7000 2950 6000 2950
Wire Wire Line
	6000 2950 6000 3150
Connection ~ 6000 2950
Wire Wire Line
	6000 2950 4200 2950
Wire Wire Line
	4200 2950 4200 3150
Wire Wire Line
	6100 4150 6100 4250
Wire Wire Line
	6100 4250 5200 4250
Wire Wire Line
	5200 4250 5200 2850
Wire Wire Line
	5200 2850 4100 2850
Wire Wire Line
	4100 2850 4100 3150
Wire Wire Line
	4000 3150 4000 2750
Wire Wire Line
	4000 2750 5800 2750
Wire Wire Line
	5800 2750 5800 3150
Connection ~ 5800 2750
Wire Wire Line
	5800 2750 7600 2750
Wire Wire Line
	7600 2750 7600 3150
Connection ~ 7600 2750
Wire Wire Line
	9000 2750 7600 2750
$Comp
L power:GND #PWR?
U 1 1 5CC1EEAF
P 5300 3650
AR Path="/5CC1EEAF" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EEAF" Ref="#PWR0105"  Part="1" 
AR Path="/5CC8DF11/5CC1EEAF" Ref="#PWR0122"  Part="1" 
F 0 "#PWR0122" H 5300 3400 50  0001 C CNN
F 1 "GND" H 5305 3477 50  0000 C CNN
F 2 "" H 5300 3650 50  0001 C CNN
F 3 "" H 5300 3650 50  0001 C CNN
	1    5300 3650
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR?
U 1 1 5CC1EEB5
P 5100 3650
AR Path="/5CC1EEB5" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EEB5" Ref="#PWR0106"  Part="1" 
AR Path="/5CC8DF11/5CC1EEB5" Ref="#PWR0123"  Part="1" 
F 0 "#PWR0123" H 5100 3500 50  0001 C CNN
F 1 "VCC" H 5117 3823 50  0000 C CNN
F 2 "" H 5100 3650 50  0001 C CNN
F 3 "" H 5100 3650 50  0001 C CNN
	1    5100 3650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5CC1EEBB
P 7100 3650
AR Path="/5CC1EEBB" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EEBB" Ref="#PWR0107"  Part="1" 
AR Path="/5CC8DF11/5CC1EEBB" Ref="#PWR0124"  Part="1" 
F 0 "#PWR0124" H 7100 3400 50  0001 C CNN
F 1 "GND" H 7105 3477 50  0000 C CNN
F 2 "" H 7100 3650 50  0001 C CNN
F 3 "" H 7100 3650 50  0001 C CNN
	1    7100 3650
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5CC1EEC1
P 3500 3650
AR Path="/5CC1EEC1" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EEC1" Ref="#PWR0108"  Part="1" 
AR Path="/5CC8DF11/5CC1EEC1" Ref="#PWR0125"  Part="1" 
F 0 "#PWR0125" H 3500 3400 50  0001 C CNN
F 1 "GND" H 3505 3477 50  0000 C CNN
F 2 "" H 3500 3650 50  0001 C CNN
F 3 "" H 3500 3650 50  0001 C CNN
	1    3500 3650
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR?
U 1 1 5CC1EEC7
P 6900 3650
AR Path="/5CC1EEC7" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EEC7" Ref="#PWR0109"  Part="1" 
AR Path="/5CC8DF11/5CC1EEC7" Ref="#PWR0126"  Part="1" 
F 0 "#PWR0126" H 6900 3500 50  0001 C CNN
F 1 "VCC" H 6917 3823 50  0000 C CNN
F 2 "" H 6900 3650 50  0001 C CNN
F 3 "" H 6900 3650 50  0001 C CNN
	1    6900 3650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7400 3150 7400 2650
Wire Wire Line
	7400 2650 5600 2650
Wire Wire Line
	5600 2650 5600 3150
Connection ~ 5600 2650
Wire Wire Line
	5600 2650 3800 2650
Wire Wire Line
	3800 2650 3800 3150
Connection ~ 3800 2650
Wire Wire Line
	3800 2650 3700 2650
$Comp
L power:VCC #PWR?
U 1 1 5CC1EED5
P 5900 2550
AR Path="/5CC1EED5" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EED5" Ref="#PWR0110"  Part="1" 
AR Path="/5CC8DF11/5CC1EED5" Ref="#PWR0127"  Part="1" 
F 0 "#PWR0127" H 5900 2400 50  0001 C CNN
F 1 "VCC" H 5917 2723 50  0000 C CNN
F 2 "" H 5900 2550 50  0001 C CNN
F 3 "" H 5900 2550 50  0001 C CNN
	1    5900 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	5900 2550 5900 3150
Wire Wire Line
	4500 4150 4500 4250
Wire Wire Line
	4500 4250 3400 4250
Wire Wire Line
	3400 4250 3400 3050
Wire Wire Line
	3400 3050 4300 3050
Wire Wire Line
	4300 3050 4300 3150
Connection ~ 4300 3050
Wire Wire Line
	4300 3050 6100 3050
Wire Wire Line
	6100 3050 6100 3150
Connection ~ 6100 3050
Wire Wire Line
	6100 3050 7900 3050
Wire Wire Line
	7900 3050 7900 3150
NoConn ~ 4300 4150
$Comp
L power:VCC #PWR?
U 1 1 5CC1EEE8
P 4500 2450
AR Path="/5CC1EEE8" Ref="#PWR?"  Part="1" 
AR Path="/5CC1878B/5CC1EEE8" Ref="#PWR0111"  Part="1" 
AR Path="/5CC8DF11/5CC1EEE8" Ref="#PWR0128"  Part="1" 
F 0 "#PWR0128" H 4500 2300 50  0001 C CNN
F 1 "VCC" H 4517 2623 50  0000 C CNN
F 2 "" H 4500 2450 50  0001 C CNN
F 3 "" H 4500 2450 50  0001 C CNN
	1    4500 2450
	1    0    0    -1  
$EndComp
$Comp
L 74xx:74LS161 U?
U 1 1 5CC1EEEE
P 4300 3650
AR Path="/5CC1EEEE" Ref="U?"  Part="1" 
AR Path="/5CC1878B/5CC1EEEE" Ref="U3"  Part="1" 
AR Path="/5CC8DF11/5CC1EEEE" Ref="U6"  Part="1" 
F 0 "U6" V 4500 3150 50  0000 C CNN
F 1 "74AC161" V 4300 3650 50  0000 C CNN
F 2 "Package_DIP:DIP-16_W7.62mm_Socket_LongPads" H 4300 3650 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74LS161" H 4300 3650 50  0001 C CNN
	1    4300 3650
	0    1    1    0   
$EndComp
Text HLabel 3700 2650 0    50   Input ~ 0
~MR
Text HLabel 9000 2750 2    50   Input ~ 0
CP
Text HLabel 8400 2550 1    50   Input ~ 0
D0
Text HLabel 8300 2550 1    50   Input ~ 0
D1
Text HLabel 8200 2550 1    50   Input ~ 0
D2
Text HLabel 8100 2550 1    50   Input ~ 0
D3
Text HLabel 6600 2550 1    50   Input ~ 0
D4
Text HLabel 6500 2550 1    50   Input ~ 0
D5
Text HLabel 6400 2550 1    50   Input ~ 0
D6
Text HLabel 6300 2550 1    50   Input ~ 0
D7
Text HLabel 4800 2550 1    50   Input ~ 0
D8
Text HLabel 4700 2550 1    50   Input ~ 0
D9
Wire Wire Line
	4600 2550 4600 3150
Wire Wire Line
	4700 3150 4700 2550
Wire Wire Line
	4800 2550 4800 3150
Wire Wire Line
	6300 3150 6300 2550
Wire Wire Line
	6400 2550 6400 3150
Wire Wire Line
	6500 2550 6500 3150
Wire Wire Line
	6600 3150 6600 2550
Wire Wire Line
	8100 2550 8100 3150
Wire Wire Line
	8200 3150 8200 2550
Wire Wire Line
	8300 2550 8300 3150
Wire Wire Line
	8400 3150 8400 2550
$Comp
L power:VCC #PWR0112
U 1 1 5CC26AF1
P 7800 2550
AR Path="/5CC1878B/5CC26AF1" Ref="#PWR0112"  Part="1" 
AR Path="/5CC8DF11/5CC26AF1" Ref="#PWR0129"  Part="1" 
F 0 "#PWR0129" H 7800 2400 50  0001 C CNN
F 1 "VCC" H 7817 2723 50  0000 C CNN
F 2 "" H 7800 2550 50  0001 C CNN
F 3 "" H 7800 2550 50  0001 C CNN
	1    7800 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	7800 2550 7800 3150
Text HLabel 7700 2550 1    50   Input ~ 0
CE
Wire Wire Line
	7700 2550 7700 3150
Text HLabel 8400 4350 3    50   Output ~ 0
Q0
Text HLabel 8300 4350 3    50   Output ~ 0
Q1
Text HLabel 8200 4350 3    50   Output ~ 0
Q2
Text HLabel 8100 4350 3    50   Output ~ 0
Q3
Text HLabel 6600 4350 3    50   Output ~ 0
Q4
Text HLabel 6500 4350 3    50   Output ~ 0
Q5
Text HLabel 6400 4350 3    50   Output ~ 0
Q6
Text HLabel 6300 4350 3    50   Output ~ 0
Q7
Text HLabel 4800 4350 3    50   Output ~ 0
Q8
Text HLabel 4700 4350 3    50   Output ~ 0
Q9
Text HLabel 4500 4350 3    50   Output ~ 0
~TC
Wire Wire Line
	4500 4350 4500 4250
Connection ~ 4500 4250
Wire Wire Line
	4700 4150 4700 4350
Wire Wire Line
	4800 4350 4800 4150
Wire Wire Line
	6300 4350 6300 4150
Wire Wire Line
	6400 4350 6400 4150
Wire Wire Line
	6500 4350 6500 4150
Wire Wire Line
	6600 4350 6600 4150
Wire Wire Line
	8100 4350 8100 4150
Wire Wire Line
	8200 4350 8200 4150
Wire Wire Line
	8300 4350 8300 4150
Wire Wire Line
	8400 4350 8400 4150
Wire Wire Line
	4500 2450 4500 3150
Text HLabel 4600 2550 1    50   Input ~ 0
D10
Text HLabel 4600 4350 3    50   Output ~ 0
Q10
Wire Wire Line
	4600 4350 4600 4150
$EndSCHEMATC
