EESchema Schematic File Version 4
LIBS:backplane-cache
EELAYER 26 0
EELAYER END
$Descr A3 11693 16535 portrait
encoding utf-8
Sheet 1 1
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
L Connector:C96ABC J1
U 1 1 5CF64383
P 5800 1050
F 0 "J1" V 6117 1100 50  0000 C CNN
F 1 "C96ABC" V 6026 1100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 1100 50  0001 C CNN
F 3 " ~" H 5800 1100 50  0001 C CNN
	1    5800 1050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR01
U 1 1 5CF8BC7A
P 750 1150
F 0 "#PWR01" H 750 1000 50  0001 C CNN
F 1 "VCC" H 767 1323 50  0000 C CNN
F 2 "" H 750 1150 50  0001 C CNN
F 3 "" H 750 1150 50  0001 C CNN
	1    750  1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  1150 750  1450
Wire Wire Line
	750  1450 1000 1450
Wire Wire Line
	1000 1450 1000 1350
Wire Wire Line
	1000 1450 1100 1450
Wire Wire Line
	1100 1450 1100 1350
Connection ~ 1000 1450
Wire Wire Line
	1100 1450 1200 1450
Wire Wire Line
	1200 1450 1200 1350
Connection ~ 1100 1450
Text GLabel 1300 1350 3    50   Input ~ 0
D5
NoConn ~ 1400 1350
Text GLabel 1500 1350 3    50   Input ~ 0
D0
Text GLabel 1600 1350 3    50   Input ~ 0
D6
NoConn ~ 1700 1350
Text GLabel 1800 1350 3    50   Input ~ 0
D7
Text GLabel 1900 1350 3    50   Input ~ 0
D3
NoConn ~ 2000 1350
Text GLabel 2100 1350 3    50   Input ~ 0
D2
Text GLabel 2200 1350 3    50   Input ~ 0
D4
NoConn ~ 2300 1350
Text GLabel 2400 1350 3    50   Input ~ 0
A0
Text GLabel 2500 1350 3    50   Input ~ 0
A2
NoConn ~ 2600 1350
Text GLabel 2700 1350 3    50   Input ~ 0
A3
Text GLabel 2800 1350 3    50   Input ~ 0
A4
NoConn ~ 2900 1350
Text GLabel 3000 1350 3    50   Input ~ 0
A1
Text GLabel 3100 1350 3    50   Input ~ 0
A5
NoConn ~ 3200 1350
Text GLabel 3300 1350 3    50   Input ~ 0
A8
Text GLabel 3400 1350 3    50   Input ~ 0
A6
NoConn ~ 3500 1350
Text GLabel 3600 1350 3    50   Input ~ 0
A7
Text GLabel 3700 1550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 1550 3700 1350
NoConn ~ 3800 1350
NoConn ~ 3900 1350
Text GLabel 4000 1450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 1450 4000 1350
NoConn ~ 4100 1350
NoConn ~ 4300 1350
NoConn ~ 4400 1350
$Comp
L power:+12V #PWR02
U 1 1 5CF8C338
P 4600 1350
F 0 "#PWR02" H 4600 1200 50  0001 C CNN
F 1 "+12V" H 4615 1523 50  0000 C CNN
F 2 "" H 4600 1350 50  0001 C CNN
F 3 "" H 4600 1350 50  0001 C CNN
	1    4600 1350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 1350
NoConn ~ 4700 1350
NoConn ~ 4500 1350
NoConn ~ 4900 1350
NoConn ~ 5000 1350
Text GLabel 5100 1350 3    50   Input ~ 0
D1
NoConn ~ 5200 1350
NoConn ~ 5300 1350
NoConn ~ 5400 1350
NoConn ~ 5500 1350
NoConn ~ 5600 1350
NoConn ~ 5800 1350
NoConn ~ 5900 1350
Text GLabel 6000 1350 3    50   Input ~ 0
A11
Text GLabel 6100 1350 3    50   Input ~ 0
A14
NoConn ~ 6200 1350
Text GLabel 6300 1350 3    50   Input ~ 0
A10
NoConn ~ 6400 1350
NoConn ~ 6500 1350
NoConn ~ 6600 1350
Text GLabel 6700 1450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 1350 6700 1450
NoConn ~ 6800 1350
Text GLabel 6900 1450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 1450 6900 1350
NoConn ~ 7000 1350
NoConn ~ 7100 1350
Text GLabel 7200 1450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 1450 7200 1350
NoConn ~ 7300 1350
NoConn ~ 7400 1350
Text GLabel 7500 1450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 1450 7500 1350
NoConn ~ 7600 1350
NoConn ~ 7700 1350
NoConn ~ 7800 1350
$Comp
L power:+BATT #PWR03
U 1 1 5CF8D033
P 7900 1450
F 0 "#PWR03" H 7900 1300 50  0001 C CNN
F 1 "+BATT" H 7915 1623 50  0000 C CNN
F 2 "" H 7900 1450 50  0001 C CNN
F 3 "" H 7900 1450 50  0001 C CNN
	1    7900 1450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 1450 7900 1350
NoConn ~ 8000 1350
Text GLabel 8100 1450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 1450 8100 1350
NoConn ~ 8200 1350
NoConn ~ 8300 1350
Text GLabel 8400 1450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 1450 8400 1350
NoConn ~ 8500 1350
NoConn ~ 8600 1350
NoConn ~ 8700 1350
Text GLabel 8800 1450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 1450 8800 1350
NoConn ~ 8900 1350
Text GLabel 9000 1350 3    50   Input ~ 0
A12
Text GLabel 9100 1550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 1550 9100 1350
NoConn ~ 9200 1350
Text GLabel 9300 1350 3    50   Input ~ 0
A15
Text GLabel 9400 1350 3    50   Input ~ 0
A13
NoConn ~ 9500 1350
Text GLabel 9600 1350 3    50   Input ~ 0
CLK
Text GLabel 9700 1350 3    50   Input ~ 0
A9
NoConn ~ 9800 1350
Text GLabel 9900 1550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 1700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 1350 3    50   Input ~ 0
RESB
Text GLabel 10250 1550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR04
U 1 1 5CF8F827
P 10600 1550
F 0 "#PWR04" H 10600 1300 50  0001 C CNN
F 1 "GND" H 10605 1377 50  0000 C CNN
F 2 "" H 10600 1550 50  0001 C CNN
F 3 "" H 10600 1550 50  0001 C CNN
	1    10600 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 1550 10600 1450
Wire Wire Line
	10600 1450 10500 1450
Wire Wire Line
	10500 1450 10500 1350
Wire Wire Line
	10500 1450 10400 1450
Wire Wire Line
	10400 1450 10400 1350
Connection ~ 10500 1450
Wire Wire Line
	10400 1450 10300 1450
Wire Wire Line
	10300 1450 10300 1350
Connection ~ 10400 1450
Wire Wire Line
	10250 1550 10200 1550
Wire Wire Line
	10200 1550 10200 1350
Wire Wire Line
	10050 1700 10000 1700
Wire Wire Line
	10000 1350 10000 1700
Wire Wire Line
	9900 1350 9900 1550
$Comp
L Connector:C96ABC J2
U 1 1 5CF91D0B
P 5800 2050
F 0 "J2" V 6117 2100 50  0000 C CNN
F 1 "C96ABC" V 6026 2100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 2100 50  0001 C CNN
F 3 " ~" H 5800 2100 50  0001 C CNN
	1    5800 2050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR05
U 1 1 5CF91D12
P 750 2150
F 0 "#PWR05" H 750 2000 50  0001 C CNN
F 1 "VCC" H 767 2323 50  0000 C CNN
F 2 "" H 750 2150 50  0001 C CNN
F 3 "" H 750 2150 50  0001 C CNN
	1    750  2150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  2150 750  2450
Wire Wire Line
	750  2450 1000 2450
Wire Wire Line
	1000 2450 1000 2350
Wire Wire Line
	1000 2450 1100 2450
Wire Wire Line
	1100 2450 1100 2350
Connection ~ 1000 2450
Wire Wire Line
	1100 2450 1200 2450
Wire Wire Line
	1200 2450 1200 2350
Connection ~ 1100 2450
Text GLabel 1300 2350 3    50   Input ~ 0
D5
NoConn ~ 1400 2350
Text GLabel 1500 2350 3    50   Input ~ 0
D0
Text GLabel 1600 2350 3    50   Input ~ 0
D6
NoConn ~ 1700 2350
Text GLabel 1800 2350 3    50   Input ~ 0
D7
Text GLabel 1900 2350 3    50   Input ~ 0
D3
NoConn ~ 2000 2350
Text GLabel 2100 2350 3    50   Input ~ 0
D2
Text GLabel 2200 2350 3    50   Input ~ 0
D4
NoConn ~ 2300 2350
Text GLabel 2400 2350 3    50   Input ~ 0
A0
Text GLabel 2500 2350 3    50   Input ~ 0
A2
NoConn ~ 2600 2350
Text GLabel 2700 2350 3    50   Input ~ 0
A3
Text GLabel 2800 2350 3    50   Input ~ 0
A4
NoConn ~ 2900 2350
Text GLabel 3000 2350 3    50   Input ~ 0
A1
Text GLabel 3100 2350 3    50   Input ~ 0
A5
NoConn ~ 3200 2350
Text GLabel 3300 2350 3    50   Input ~ 0
A8
Text GLabel 3400 2350 3    50   Input ~ 0
A6
NoConn ~ 3500 2350
Text GLabel 3600 2350 3    50   Input ~ 0
A7
Text GLabel 3700 2550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 2550 3700 2350
NoConn ~ 3800 2350
NoConn ~ 3900 2350
Text GLabel 4000 2450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 2450 4000 2350
NoConn ~ 4100 2350
NoConn ~ 4300 2350
NoConn ~ 4400 2350
$Comp
L power:+12V #PWR06
U 1 1 5CF91D42
P 4600 2350
F 0 "#PWR06" H 4600 2200 50  0001 C CNN
F 1 "+12V" H 4615 2523 50  0000 C CNN
F 2 "" H 4600 2350 50  0001 C CNN
F 3 "" H 4600 2350 50  0001 C CNN
	1    4600 2350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 2350
NoConn ~ 4700 2350
NoConn ~ 4500 2350
NoConn ~ 4900 2350
NoConn ~ 5000 2350
Text GLabel 5100 2350 3    50   Input ~ 0
D1
NoConn ~ 5200 2350
NoConn ~ 5300 2350
NoConn ~ 5400 2350
NoConn ~ 5500 2350
NoConn ~ 5600 2350
NoConn ~ 5800 2350
NoConn ~ 5900 2350
Text GLabel 6000 2350 3    50   Input ~ 0
A11
Text GLabel 6100 2350 3    50   Input ~ 0
A14
NoConn ~ 6200 2350
Text GLabel 6300 2350 3    50   Input ~ 0
A10
NoConn ~ 6400 2350
NoConn ~ 6500 2350
NoConn ~ 6600 2350
Text GLabel 6700 2450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 2350 6700 2450
NoConn ~ 6800 2350
Text GLabel 6900 2450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 2450 6900 2350
NoConn ~ 7000 2350
NoConn ~ 7100 2350
Text GLabel 7200 2450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 2450 7200 2350
NoConn ~ 7300 2350
NoConn ~ 7400 2350
Text GLabel 7500 2450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 2450 7500 2350
NoConn ~ 7600 2350
NoConn ~ 7700 2350
NoConn ~ 7800 2350
$Comp
L power:+BATT #PWR07
U 1 1 5CF91D6C
P 7900 2450
F 0 "#PWR07" H 7900 2300 50  0001 C CNN
F 1 "+BATT" H 7915 2623 50  0000 C CNN
F 2 "" H 7900 2450 50  0001 C CNN
F 3 "" H 7900 2450 50  0001 C CNN
	1    7900 2450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 2450 7900 2350
NoConn ~ 8000 2350
Text GLabel 8100 2450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 2450 8100 2350
NoConn ~ 8200 2350
NoConn ~ 8300 2350
Text GLabel 8400 2450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 2450 8400 2350
NoConn ~ 8500 2350
NoConn ~ 8600 2350
NoConn ~ 8700 2350
Text GLabel 8800 2450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 2450 8800 2350
NoConn ~ 8900 2350
Text GLabel 9000 2350 3    50   Input ~ 0
A12
Text GLabel 9100 2550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 2550 9100 2350
NoConn ~ 9200 2350
Text GLabel 9300 2350 3    50   Input ~ 0
A15
Text GLabel 9400 2350 3    50   Input ~ 0
A13
NoConn ~ 9500 2350
Text GLabel 9600 2350 3    50   Input ~ 0
CLK
Text GLabel 9700 2350 3    50   Input ~ 0
A9
NoConn ~ 9800 2350
Text GLabel 9900 2550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 2700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 2350 3    50   Input ~ 0
RESB
Text GLabel 10250 2550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR08
U 1 1 5CF91D8E
P 10600 2550
F 0 "#PWR08" H 10600 2300 50  0001 C CNN
F 1 "GND" H 10605 2377 50  0000 C CNN
F 2 "" H 10600 2550 50  0001 C CNN
F 3 "" H 10600 2550 50  0001 C CNN
	1    10600 2550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 2550 10600 2450
Wire Wire Line
	10600 2450 10500 2450
Wire Wire Line
	10500 2450 10500 2350
Wire Wire Line
	10500 2450 10400 2450
Wire Wire Line
	10400 2450 10400 2350
Connection ~ 10500 2450
Wire Wire Line
	10400 2450 10300 2450
Wire Wire Line
	10300 2450 10300 2350
Connection ~ 10400 2450
Wire Wire Line
	10250 2550 10200 2550
Wire Wire Line
	10200 2550 10200 2350
Wire Wire Line
	10050 2700 10000 2700
Wire Wire Line
	10000 2350 10000 2700
Wire Wire Line
	9900 2350 9900 2550
$Comp
L Connector:C96ABC J3
U 1 1 5CF92DC9
P 5800 3050
F 0 "J3" V 6117 3100 50  0000 C CNN
F 1 "C96ABC" V 6026 3100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 3100 50  0001 C CNN
F 3 " ~" H 5800 3100 50  0001 C CNN
	1    5800 3050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR09
U 1 1 5CF92DD0
P 750 3150
F 0 "#PWR09" H 750 3000 50  0001 C CNN
F 1 "VCC" H 767 3323 50  0000 C CNN
F 2 "" H 750 3150 50  0001 C CNN
F 3 "" H 750 3150 50  0001 C CNN
	1    750  3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  3150 750  3450
Wire Wire Line
	750  3450 1000 3450
Wire Wire Line
	1000 3450 1000 3350
Wire Wire Line
	1000 3450 1100 3450
Wire Wire Line
	1100 3450 1100 3350
Connection ~ 1000 3450
Wire Wire Line
	1100 3450 1200 3450
Wire Wire Line
	1200 3450 1200 3350
Connection ~ 1100 3450
Text GLabel 1300 3350 3    50   Input ~ 0
D5
NoConn ~ 1400 3350
Text GLabel 1500 3350 3    50   Input ~ 0
D0
Text GLabel 1600 3350 3    50   Input ~ 0
D6
NoConn ~ 1700 3350
Text GLabel 1800 3350 3    50   Input ~ 0
D7
Text GLabel 1900 3350 3    50   Input ~ 0
D3
NoConn ~ 2000 3350
Text GLabel 2100 3350 3    50   Input ~ 0
D2
Text GLabel 2200 3350 3    50   Input ~ 0
D4
NoConn ~ 2300 3350
Text GLabel 2400 3350 3    50   Input ~ 0
A0
Text GLabel 2500 3350 3    50   Input ~ 0
A2
NoConn ~ 2600 3350
Text GLabel 2700 3350 3    50   Input ~ 0
A3
Text GLabel 2800 3350 3    50   Input ~ 0
A4
NoConn ~ 2900 3350
Text GLabel 3000 3350 3    50   Input ~ 0
A1
Text GLabel 3100 3350 3    50   Input ~ 0
A5
NoConn ~ 3200 3350
Text GLabel 3300 3350 3    50   Input ~ 0
A8
Text GLabel 3400 3350 3    50   Input ~ 0
A6
NoConn ~ 3500 3350
Text GLabel 3600 3350 3    50   Input ~ 0
A7
Text GLabel 3700 3550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 3550 3700 3350
NoConn ~ 3800 3350
NoConn ~ 3900 3350
Text GLabel 4000 3450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 3450 4000 3350
NoConn ~ 4100 3350
NoConn ~ 4300 3350
NoConn ~ 4400 3350
$Comp
L power:+12V #PWR010
U 1 1 5CF92E00
P 4600 3350
F 0 "#PWR010" H 4600 3200 50  0001 C CNN
F 1 "+12V" H 4615 3523 50  0000 C CNN
F 2 "" H 4600 3350 50  0001 C CNN
F 3 "" H 4600 3350 50  0001 C CNN
	1    4600 3350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 3350
NoConn ~ 4700 3350
NoConn ~ 4500 3350
NoConn ~ 4900 3350
NoConn ~ 5000 3350
Text GLabel 5100 3350 3    50   Input ~ 0
D1
NoConn ~ 5200 3350
NoConn ~ 5300 3350
NoConn ~ 5400 3350
NoConn ~ 5500 3350
NoConn ~ 5600 3350
NoConn ~ 5800 3350
NoConn ~ 5900 3350
Text GLabel 6000 3350 3    50   Input ~ 0
A11
Text GLabel 6100 3350 3    50   Input ~ 0
A14
NoConn ~ 6200 3350
Text GLabel 6300 3350 3    50   Input ~ 0
A10
NoConn ~ 6400 3350
NoConn ~ 6500 3350
NoConn ~ 6600 3350
Text GLabel 6700 3450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 3350 6700 3450
NoConn ~ 6800 3350
Text GLabel 6900 3450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 3450 6900 3350
NoConn ~ 7000 3350
NoConn ~ 7100 3350
Text GLabel 7200 3450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 3450 7200 3350
NoConn ~ 7300 3350
NoConn ~ 7400 3350
Text GLabel 7500 3450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 3450 7500 3350
NoConn ~ 7600 3350
NoConn ~ 7700 3350
NoConn ~ 7800 3350
$Comp
L power:+BATT #PWR011
U 1 1 5CF92E2A
P 7900 3450
F 0 "#PWR011" H 7900 3300 50  0001 C CNN
F 1 "+BATT" H 7915 3623 50  0000 C CNN
F 2 "" H 7900 3450 50  0001 C CNN
F 3 "" H 7900 3450 50  0001 C CNN
	1    7900 3450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 3450 7900 3350
NoConn ~ 8000 3350
Text GLabel 8100 3450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 3450 8100 3350
NoConn ~ 8200 3350
NoConn ~ 8300 3350
Text GLabel 8400 3450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 3450 8400 3350
NoConn ~ 8500 3350
NoConn ~ 8600 3350
NoConn ~ 8700 3350
Text GLabel 8800 3450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 3450 8800 3350
NoConn ~ 8900 3350
Text GLabel 9000 3350 3    50   Input ~ 0
A12
Text GLabel 9100 3550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 3550 9100 3350
NoConn ~ 9200 3350
Text GLabel 9300 3350 3    50   Input ~ 0
A15
Text GLabel 9400 3350 3    50   Input ~ 0
A13
NoConn ~ 9500 3350
Text GLabel 9600 3350 3    50   Input ~ 0
CLK
Text GLabel 9700 3350 3    50   Input ~ 0
A9
NoConn ~ 9800 3350
Text GLabel 9900 3550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 3700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 3350 3    50   Input ~ 0
RESB
Text GLabel 10250 3550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR012
U 1 1 5CF92E4C
P 10600 3550
F 0 "#PWR012" H 10600 3300 50  0001 C CNN
F 1 "GND" H 10605 3377 50  0000 C CNN
F 2 "" H 10600 3550 50  0001 C CNN
F 3 "" H 10600 3550 50  0001 C CNN
	1    10600 3550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 3550 10600 3450
Wire Wire Line
	10600 3450 10500 3450
Wire Wire Line
	10500 3450 10500 3350
Wire Wire Line
	10500 3450 10400 3450
Wire Wire Line
	10400 3450 10400 3350
Connection ~ 10500 3450
Wire Wire Line
	10400 3450 10300 3450
Wire Wire Line
	10300 3450 10300 3350
Connection ~ 10400 3450
Wire Wire Line
	10250 3550 10200 3550
Wire Wire Line
	10200 3550 10200 3350
Wire Wire Line
	10050 3700 10000 3700
Wire Wire Line
	10000 3350 10000 3700
Wire Wire Line
	9900 3350 9900 3550
$Comp
L Connector:C96ABC J4
U 1 1 5CF954C7
P 5800 4050
F 0 "J4" V 6117 4100 50  0000 C CNN
F 1 "C96ABC" V 6026 4100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 4100 50  0001 C CNN
F 3 " ~" H 5800 4100 50  0001 C CNN
	1    5800 4050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR013
U 1 1 5CF954CE
P 750 4150
F 0 "#PWR013" H 750 4000 50  0001 C CNN
F 1 "VCC" H 767 4323 50  0000 C CNN
F 2 "" H 750 4150 50  0001 C CNN
F 3 "" H 750 4150 50  0001 C CNN
	1    750  4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  4150 750  4450
Wire Wire Line
	750  4450 1000 4450
Wire Wire Line
	1000 4450 1000 4350
Wire Wire Line
	1000 4450 1100 4450
Wire Wire Line
	1100 4450 1100 4350
Connection ~ 1000 4450
Wire Wire Line
	1100 4450 1200 4450
Wire Wire Line
	1200 4450 1200 4350
Connection ~ 1100 4450
Text GLabel 1300 4350 3    50   Input ~ 0
D5
NoConn ~ 1400 4350
Text GLabel 1500 4350 3    50   Input ~ 0
D0
Text GLabel 1600 4350 3    50   Input ~ 0
D6
NoConn ~ 1700 4350
Text GLabel 1800 4350 3    50   Input ~ 0
D7
Text GLabel 1900 4350 3    50   Input ~ 0
D3
NoConn ~ 2000 4350
Text GLabel 2100 4350 3    50   Input ~ 0
D2
Text GLabel 2200 4350 3    50   Input ~ 0
D4
NoConn ~ 2300 4350
Text GLabel 2400 4350 3    50   Input ~ 0
A0
Text GLabel 2500 4350 3    50   Input ~ 0
A2
NoConn ~ 2600 4350
Text GLabel 2700 4350 3    50   Input ~ 0
A3
Text GLabel 2800 4350 3    50   Input ~ 0
A4
NoConn ~ 2900 4350
Text GLabel 3000 4350 3    50   Input ~ 0
A1
Text GLabel 3100 4350 3    50   Input ~ 0
A5
NoConn ~ 3200 4350
Text GLabel 3300 4350 3    50   Input ~ 0
A8
Text GLabel 3400 4350 3    50   Input ~ 0
A6
NoConn ~ 3500 4350
Text GLabel 3600 4350 3    50   Input ~ 0
A7
Text GLabel 3700 4550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 4550 3700 4350
NoConn ~ 3800 4350
NoConn ~ 3900 4350
Text GLabel 4000 4450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 4450 4000 4350
NoConn ~ 4100 4350
NoConn ~ 4300 4350
NoConn ~ 4400 4350
$Comp
L power:+12V #PWR014
U 1 1 5CF954FE
P 4600 4350
F 0 "#PWR014" H 4600 4200 50  0001 C CNN
F 1 "+12V" H 4615 4523 50  0000 C CNN
F 2 "" H 4600 4350 50  0001 C CNN
F 3 "" H 4600 4350 50  0001 C CNN
	1    4600 4350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 4350
NoConn ~ 4700 4350
NoConn ~ 4500 4350
NoConn ~ 4900 4350
NoConn ~ 5000 4350
Text GLabel 5100 4350 3    50   Input ~ 0
D1
NoConn ~ 5200 4350
NoConn ~ 5300 4350
NoConn ~ 5400 4350
NoConn ~ 5500 4350
NoConn ~ 5600 4350
NoConn ~ 5800 4350
NoConn ~ 5900 4350
Text GLabel 6000 4350 3    50   Input ~ 0
A11
Text GLabel 6100 4350 3    50   Input ~ 0
A14
NoConn ~ 6200 4350
Text GLabel 6300 4350 3    50   Input ~ 0
A10
NoConn ~ 6400 4350
NoConn ~ 6500 4350
NoConn ~ 6600 4350
Text GLabel 6700 4450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 4350 6700 4450
NoConn ~ 6800 4350
Text GLabel 6900 4450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 4450 6900 4350
NoConn ~ 7000 4350
NoConn ~ 7100 4350
Text GLabel 7200 4450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 4450 7200 4350
NoConn ~ 7300 4350
NoConn ~ 7400 4350
Text GLabel 7500 4450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 4450 7500 4350
NoConn ~ 7600 4350
NoConn ~ 7700 4350
NoConn ~ 7800 4350
$Comp
L power:+BATT #PWR015
U 1 1 5CF95528
P 7900 4450
F 0 "#PWR015" H 7900 4300 50  0001 C CNN
F 1 "+BATT" H 7915 4623 50  0000 C CNN
F 2 "" H 7900 4450 50  0001 C CNN
F 3 "" H 7900 4450 50  0001 C CNN
	1    7900 4450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 4450 7900 4350
NoConn ~ 8000 4350
Text GLabel 8100 4450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 4450 8100 4350
NoConn ~ 8200 4350
NoConn ~ 8300 4350
Text GLabel 8400 4450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 4450 8400 4350
NoConn ~ 8500 4350
NoConn ~ 8600 4350
NoConn ~ 8700 4350
Text GLabel 8800 4450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 4450 8800 4350
NoConn ~ 8900 4350
Text GLabel 9000 4350 3    50   Input ~ 0
A12
Text GLabel 9100 4550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 4550 9100 4350
NoConn ~ 9200 4350
Text GLabel 9300 4350 3    50   Input ~ 0
A15
Text GLabel 9400 4350 3    50   Input ~ 0
A13
NoConn ~ 9500 4350
Text GLabel 9600 4350 3    50   Input ~ 0
CLK
Text GLabel 9700 4350 3    50   Input ~ 0
A9
NoConn ~ 9800 4350
Text GLabel 9900 4550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 4700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 4350 3    50   Input ~ 0
RESB
Text GLabel 10250 4550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR016
U 1 1 5CF9554A
P 10600 4550
F 0 "#PWR016" H 10600 4300 50  0001 C CNN
F 1 "GND" H 10605 4377 50  0000 C CNN
F 2 "" H 10600 4550 50  0001 C CNN
F 3 "" H 10600 4550 50  0001 C CNN
	1    10600 4550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 4550 10600 4450
Wire Wire Line
	10600 4450 10500 4450
Wire Wire Line
	10500 4450 10500 4350
Wire Wire Line
	10500 4450 10400 4450
Wire Wire Line
	10400 4450 10400 4350
Connection ~ 10500 4450
Wire Wire Line
	10400 4450 10300 4450
Wire Wire Line
	10300 4450 10300 4350
Connection ~ 10400 4450
Wire Wire Line
	10250 4550 10200 4550
Wire Wire Line
	10200 4550 10200 4350
Wire Wire Line
	10050 4700 10000 4700
Wire Wire Line
	10000 4350 10000 4700
Wire Wire Line
	9900 4350 9900 4550
$Comp
L Connector:C96ABC J5
U 1 1 5CF99B7A
P 5800 5050
F 0 "J5" V 6117 5100 50  0000 C CNN
F 1 "C96ABC" V 6026 5100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 5100 50  0001 C CNN
F 3 " ~" H 5800 5100 50  0001 C CNN
	1    5800 5050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR017
U 1 1 5CF99B81
P 750 5150
F 0 "#PWR017" H 750 5000 50  0001 C CNN
F 1 "VCC" H 767 5323 50  0000 C CNN
F 2 "" H 750 5150 50  0001 C CNN
F 3 "" H 750 5150 50  0001 C CNN
	1    750  5150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  5150 750  5450
Wire Wire Line
	750  5450 1000 5450
Wire Wire Line
	1000 5450 1000 5350
Wire Wire Line
	1000 5450 1100 5450
Wire Wire Line
	1100 5450 1100 5350
Connection ~ 1000 5450
Wire Wire Line
	1100 5450 1200 5450
Wire Wire Line
	1200 5450 1200 5350
Connection ~ 1100 5450
Text GLabel 1300 5350 3    50   Input ~ 0
D5
NoConn ~ 1400 5350
Text GLabel 1500 5350 3    50   Input ~ 0
D0
Text GLabel 1600 5350 3    50   Input ~ 0
D6
NoConn ~ 1700 5350
Text GLabel 1800 5350 3    50   Input ~ 0
D7
Text GLabel 1900 5350 3    50   Input ~ 0
D3
NoConn ~ 2000 5350
Text GLabel 2100 5350 3    50   Input ~ 0
D2
Text GLabel 2200 5350 3    50   Input ~ 0
D4
NoConn ~ 2300 5350
Text GLabel 2400 5350 3    50   Input ~ 0
A0
Text GLabel 2500 5350 3    50   Input ~ 0
A2
NoConn ~ 2600 5350
Text GLabel 2700 5350 3    50   Input ~ 0
A3
Text GLabel 2800 5350 3    50   Input ~ 0
A4
NoConn ~ 2900 5350
Text GLabel 3000 5350 3    50   Input ~ 0
A1
Text GLabel 3100 5350 3    50   Input ~ 0
A5
NoConn ~ 3200 5350
Text GLabel 3300 5350 3    50   Input ~ 0
A8
Text GLabel 3400 5350 3    50   Input ~ 0
A6
NoConn ~ 3500 5350
Text GLabel 3600 5350 3    50   Input ~ 0
A7
Text GLabel 3700 5550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 5550 3700 5350
NoConn ~ 3800 5350
NoConn ~ 3900 5350
Text GLabel 4000 5450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 5450 4000 5350
NoConn ~ 4100 5350
NoConn ~ 4300 5350
NoConn ~ 4400 5350
$Comp
L power:+12V #PWR018
U 1 1 5CF99BB1
P 4600 5350
F 0 "#PWR018" H 4600 5200 50  0001 C CNN
F 1 "+12V" H 4615 5523 50  0000 C CNN
F 2 "" H 4600 5350 50  0001 C CNN
F 3 "" H 4600 5350 50  0001 C CNN
	1    4600 5350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 5350
NoConn ~ 4700 5350
NoConn ~ 4500 5350
NoConn ~ 4900 5350
NoConn ~ 5000 5350
Text GLabel 5100 5350 3    50   Input ~ 0
D1
NoConn ~ 5200 5350
NoConn ~ 5300 5350
NoConn ~ 5400 5350
NoConn ~ 5500 5350
NoConn ~ 5600 5350
NoConn ~ 5800 5350
NoConn ~ 5900 5350
Text GLabel 6000 5350 3    50   Input ~ 0
A11
Text GLabel 6100 5350 3    50   Input ~ 0
A14
NoConn ~ 6200 5350
Text GLabel 6300 5350 3    50   Input ~ 0
A10
NoConn ~ 6400 5350
NoConn ~ 6500 5350
NoConn ~ 6600 5350
Text GLabel 6700 5450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 5350 6700 5450
NoConn ~ 6800 5350
Text GLabel 6900 5450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 5450 6900 5350
NoConn ~ 7000 5350
NoConn ~ 7100 5350
Text GLabel 7200 5450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 5450 7200 5350
NoConn ~ 7300 5350
NoConn ~ 7400 5350
Text GLabel 7500 5450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 5450 7500 5350
NoConn ~ 7600 5350
NoConn ~ 7700 5350
NoConn ~ 7800 5350
$Comp
L power:+BATT #PWR019
U 1 1 5CF99BDB
P 7900 5450
F 0 "#PWR019" H 7900 5300 50  0001 C CNN
F 1 "+BATT" H 7915 5623 50  0000 C CNN
F 2 "" H 7900 5450 50  0001 C CNN
F 3 "" H 7900 5450 50  0001 C CNN
	1    7900 5450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 5450 7900 5350
NoConn ~ 8000 5350
Text GLabel 8100 5450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 5450 8100 5350
NoConn ~ 8200 5350
NoConn ~ 8300 5350
Text GLabel 8400 5450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 5450 8400 5350
NoConn ~ 8500 5350
NoConn ~ 8600 5350
NoConn ~ 8700 5350
Text GLabel 8800 5450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 5450 8800 5350
NoConn ~ 8900 5350
Text GLabel 9000 5350 3    50   Input ~ 0
A12
Text GLabel 9100 5550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 5550 9100 5350
NoConn ~ 9200 5350
Text GLabel 9300 5350 3    50   Input ~ 0
A15
Text GLabel 9400 5350 3    50   Input ~ 0
A13
NoConn ~ 9500 5350
Text GLabel 9600 5350 3    50   Input ~ 0
CLK
Text GLabel 9700 5350 3    50   Input ~ 0
A9
NoConn ~ 9800 5350
Text GLabel 9900 5550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 5700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 5350 3    50   Input ~ 0
RESB
Text GLabel 10250 5550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR020
U 1 1 5CF99BFD
P 10600 5550
F 0 "#PWR020" H 10600 5300 50  0001 C CNN
F 1 "GND" H 10605 5377 50  0000 C CNN
F 2 "" H 10600 5550 50  0001 C CNN
F 3 "" H 10600 5550 50  0001 C CNN
	1    10600 5550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 5550 10600 5450
Wire Wire Line
	10600 5450 10500 5450
Wire Wire Line
	10500 5450 10500 5350
Wire Wire Line
	10500 5450 10400 5450
Wire Wire Line
	10400 5450 10400 5350
Connection ~ 10500 5450
Wire Wire Line
	10400 5450 10300 5450
Wire Wire Line
	10300 5450 10300 5350
Connection ~ 10400 5450
Wire Wire Line
	10250 5550 10200 5550
Wire Wire Line
	10200 5550 10200 5350
Wire Wire Line
	10050 5700 10000 5700
Wire Wire Line
	10000 5350 10000 5700
Wire Wire Line
	9900 5350 9900 5550
$Comp
L Connector:C96ABC J6
U 1 1 5CFA0B57
P 5800 6050
F 0 "J6" V 6117 6100 50  0000 C CNN
F 1 "C96ABC" V 6026 6100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 6100 50  0001 C CNN
F 3 " ~" H 5800 6100 50  0001 C CNN
	1    5800 6050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR021
U 1 1 5CFA0B5E
P 750 6150
F 0 "#PWR021" H 750 6000 50  0001 C CNN
F 1 "VCC" H 767 6323 50  0000 C CNN
F 2 "" H 750 6150 50  0001 C CNN
F 3 "" H 750 6150 50  0001 C CNN
	1    750  6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  6150 750  6450
Wire Wire Line
	750  6450 1000 6450
Wire Wire Line
	1000 6450 1000 6350
Wire Wire Line
	1000 6450 1100 6450
Wire Wire Line
	1100 6450 1100 6350
Connection ~ 1000 6450
Wire Wire Line
	1100 6450 1200 6450
Wire Wire Line
	1200 6450 1200 6350
Connection ~ 1100 6450
Text GLabel 1300 6350 3    50   Input ~ 0
D5
NoConn ~ 1400 6350
Text GLabel 1500 6350 3    50   Input ~ 0
D0
Text GLabel 1600 6350 3    50   Input ~ 0
D6
NoConn ~ 1700 6350
Text GLabel 1800 6350 3    50   Input ~ 0
D7
Text GLabel 1900 6350 3    50   Input ~ 0
D3
NoConn ~ 2000 6350
Text GLabel 2100 6350 3    50   Input ~ 0
D2
Text GLabel 2200 6350 3    50   Input ~ 0
D4
NoConn ~ 2300 6350
Text GLabel 2400 6350 3    50   Input ~ 0
A0
Text GLabel 2500 6350 3    50   Input ~ 0
A2
NoConn ~ 2600 6350
Text GLabel 2700 6350 3    50   Input ~ 0
A3
Text GLabel 2800 6350 3    50   Input ~ 0
A4
NoConn ~ 2900 6350
Text GLabel 3000 6350 3    50   Input ~ 0
A1
Text GLabel 3100 6350 3    50   Input ~ 0
A5
NoConn ~ 3200 6350
Text GLabel 3300 6350 3    50   Input ~ 0
A8
Text GLabel 3400 6350 3    50   Input ~ 0
A6
NoConn ~ 3500 6350
Text GLabel 3600 6350 3    50   Input ~ 0
A7
Text GLabel 3700 6550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 6550 3700 6350
NoConn ~ 3800 6350
NoConn ~ 3900 6350
Text GLabel 4000 6450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 6450 4000 6350
NoConn ~ 4100 6350
NoConn ~ 4300 6350
NoConn ~ 4400 6350
$Comp
L power:+12V #PWR022
U 1 1 5CFA0B8E
P 4600 6350
F 0 "#PWR022" H 4600 6200 50  0001 C CNN
F 1 "+12V" H 4615 6523 50  0000 C CNN
F 2 "" H 4600 6350 50  0001 C CNN
F 3 "" H 4600 6350 50  0001 C CNN
	1    4600 6350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 6350
NoConn ~ 4700 6350
NoConn ~ 4500 6350
NoConn ~ 4900 6350
NoConn ~ 5000 6350
Text GLabel 5100 6350 3    50   Input ~ 0
D1
NoConn ~ 5200 6350
NoConn ~ 5300 6350
NoConn ~ 5400 6350
NoConn ~ 5500 6350
NoConn ~ 5600 6350
NoConn ~ 5800 6350
NoConn ~ 5900 6350
Text GLabel 6000 6350 3    50   Input ~ 0
A11
Text GLabel 6100 6350 3    50   Input ~ 0
A14
NoConn ~ 6200 6350
Text GLabel 6300 6350 3    50   Input ~ 0
A10
NoConn ~ 6400 6350
NoConn ~ 6500 6350
NoConn ~ 6600 6350
Text GLabel 6700 6450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 6350 6700 6450
NoConn ~ 6800 6350
Text GLabel 6900 6450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 6450 6900 6350
NoConn ~ 7000 6350
NoConn ~ 7100 6350
Text GLabel 7200 6450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 6450 7200 6350
NoConn ~ 7300 6350
NoConn ~ 7400 6350
Text GLabel 7500 6450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 6450 7500 6350
NoConn ~ 7600 6350
NoConn ~ 7700 6350
NoConn ~ 7800 6350
$Comp
L power:+BATT #PWR023
U 1 1 5CFA0BB8
P 7900 6450
F 0 "#PWR023" H 7900 6300 50  0001 C CNN
F 1 "+BATT" H 7915 6623 50  0000 C CNN
F 2 "" H 7900 6450 50  0001 C CNN
F 3 "" H 7900 6450 50  0001 C CNN
	1    7900 6450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 6450 7900 6350
NoConn ~ 8000 6350
Text GLabel 8100 6450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 6450 8100 6350
NoConn ~ 8200 6350
NoConn ~ 8300 6350
Text GLabel 8400 6450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 6450 8400 6350
NoConn ~ 8500 6350
NoConn ~ 8600 6350
NoConn ~ 8700 6350
Text GLabel 8800 6450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 6450 8800 6350
NoConn ~ 8900 6350
Text GLabel 9000 6350 3    50   Input ~ 0
A12
Text GLabel 9100 6550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 6550 9100 6350
NoConn ~ 9200 6350
Text GLabel 9300 6350 3    50   Input ~ 0
A15
Text GLabel 9400 6350 3    50   Input ~ 0
A13
NoConn ~ 9500 6350
Text GLabel 9600 6350 3    50   Input ~ 0
CLK
Text GLabel 9700 6350 3    50   Input ~ 0
A9
NoConn ~ 9800 6350
Text GLabel 9900 6550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 6700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 6350 3    50   Input ~ 0
RESB
Text GLabel 10250 6550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR024
U 1 1 5CFA0BDA
P 10600 6550
F 0 "#PWR024" H 10600 6300 50  0001 C CNN
F 1 "GND" H 10605 6377 50  0000 C CNN
F 2 "" H 10600 6550 50  0001 C CNN
F 3 "" H 10600 6550 50  0001 C CNN
	1    10600 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 6550 10600 6450
Wire Wire Line
	10600 6450 10500 6450
Wire Wire Line
	10500 6450 10500 6350
Wire Wire Line
	10500 6450 10400 6450
Wire Wire Line
	10400 6450 10400 6350
Connection ~ 10500 6450
Wire Wire Line
	10400 6450 10300 6450
Wire Wire Line
	10300 6450 10300 6350
Connection ~ 10400 6450
Wire Wire Line
	10250 6550 10200 6550
Wire Wire Line
	10200 6550 10200 6350
Wire Wire Line
	10050 6700 10000 6700
Wire Wire Line
	10000 6350 10000 6700
Wire Wire Line
	9900 6350 9900 6550
$Comp
L Connector:C96ABC J7
U 1 1 5CFAADD3
P 5800 7050
F 0 "J7" V 6117 7100 50  0000 C CNN
F 1 "C96ABC" V 6026 7100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 7100 50  0001 C CNN
F 3 " ~" H 5800 7100 50  0001 C CNN
	1    5800 7050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR025
U 1 1 5CFAADDA
P 750 7150
F 0 "#PWR025" H 750 7000 50  0001 C CNN
F 1 "VCC" H 767 7323 50  0000 C CNN
F 2 "" H 750 7150 50  0001 C CNN
F 3 "" H 750 7150 50  0001 C CNN
	1    750  7150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  7150 750  7450
Wire Wire Line
	750  7450 1000 7450
Wire Wire Line
	1000 7450 1000 7350
Wire Wire Line
	1000 7450 1100 7450
Wire Wire Line
	1100 7450 1100 7350
Connection ~ 1000 7450
Wire Wire Line
	1100 7450 1200 7450
Wire Wire Line
	1200 7450 1200 7350
Connection ~ 1100 7450
Text GLabel 1300 7350 3    50   Input ~ 0
D5
NoConn ~ 1400 7350
Text GLabel 1500 7350 3    50   Input ~ 0
D0
Text GLabel 1600 7350 3    50   Input ~ 0
D6
NoConn ~ 1700 7350
Text GLabel 1800 7350 3    50   Input ~ 0
D7
Text GLabel 1900 7350 3    50   Input ~ 0
D3
NoConn ~ 2000 7350
Text GLabel 2100 7350 3    50   Input ~ 0
D2
Text GLabel 2200 7350 3    50   Input ~ 0
D4
NoConn ~ 2300 7350
Text GLabel 2400 7350 3    50   Input ~ 0
A0
Text GLabel 2500 7350 3    50   Input ~ 0
A2
NoConn ~ 2600 7350
Text GLabel 2700 7350 3    50   Input ~ 0
A3
Text GLabel 2800 7350 3    50   Input ~ 0
A4
NoConn ~ 2900 7350
Text GLabel 3000 7350 3    50   Input ~ 0
A1
Text GLabel 3100 7350 3    50   Input ~ 0
A5
NoConn ~ 3200 7350
Text GLabel 3300 7350 3    50   Input ~ 0
A8
Text GLabel 3400 7350 3    50   Input ~ 0
A6
NoConn ~ 3500 7350
Text GLabel 3600 7350 3    50   Input ~ 0
A7
Text GLabel 3700 7550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 7550 3700 7350
NoConn ~ 3800 7350
NoConn ~ 3900 7350
Text GLabel 4000 7450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 7450 4000 7350
NoConn ~ 4100 7350
NoConn ~ 4300 7350
NoConn ~ 4400 7350
$Comp
L power:+12V #PWR026
U 1 1 5CFAAE0A
P 4600 7350
F 0 "#PWR026" H 4600 7200 50  0001 C CNN
F 1 "+12V" H 4615 7523 50  0000 C CNN
F 2 "" H 4600 7350 50  0001 C CNN
F 3 "" H 4600 7350 50  0001 C CNN
	1    4600 7350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 7350
NoConn ~ 4700 7350
NoConn ~ 4500 7350
NoConn ~ 4900 7350
NoConn ~ 5000 7350
Text GLabel 5100 7350 3    50   Input ~ 0
D1
NoConn ~ 5200 7350
NoConn ~ 5300 7350
NoConn ~ 5400 7350
NoConn ~ 5500 7350
NoConn ~ 5600 7350
NoConn ~ 5800 7350
NoConn ~ 5900 7350
Text GLabel 6000 7350 3    50   Input ~ 0
A11
Text GLabel 6100 7350 3    50   Input ~ 0
A14
NoConn ~ 6200 7350
Text GLabel 6300 7350 3    50   Input ~ 0
A10
NoConn ~ 6400 7350
NoConn ~ 6500 7350
NoConn ~ 6600 7350
Text GLabel 6700 7450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 7350 6700 7450
NoConn ~ 6800 7350
Text GLabel 6900 7450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 7450 6900 7350
NoConn ~ 7000 7350
NoConn ~ 7100 7350
Text GLabel 7200 7450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 7450 7200 7350
NoConn ~ 7300 7350
NoConn ~ 7400 7350
Text GLabel 7500 7450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 7450 7500 7350
NoConn ~ 7600 7350
NoConn ~ 7700 7350
NoConn ~ 7800 7350
$Comp
L power:+BATT #PWR027
U 1 1 5CFAAE34
P 7900 7450
F 0 "#PWR027" H 7900 7300 50  0001 C CNN
F 1 "+BATT" H 7915 7623 50  0000 C CNN
F 2 "" H 7900 7450 50  0001 C CNN
F 3 "" H 7900 7450 50  0001 C CNN
	1    7900 7450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 7450 7900 7350
NoConn ~ 8000 7350
Text GLabel 8100 7450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 7450 8100 7350
NoConn ~ 8200 7350
NoConn ~ 8300 7350
Text GLabel 8400 7450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 7450 8400 7350
NoConn ~ 8500 7350
NoConn ~ 8600 7350
NoConn ~ 8700 7350
Text GLabel 8800 7450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 7450 8800 7350
NoConn ~ 8900 7350
Text GLabel 9000 7350 3    50   Input ~ 0
A12
Text GLabel 9100 7550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 7550 9100 7350
NoConn ~ 9200 7350
Text GLabel 9300 7350 3    50   Input ~ 0
A15
Text GLabel 9400 7350 3    50   Input ~ 0
A13
NoConn ~ 9500 7350
Text GLabel 9600 7350 3    50   Input ~ 0
CLK
Text GLabel 9700 7350 3    50   Input ~ 0
A9
NoConn ~ 9800 7350
Text GLabel 9900 7550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 7700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 7350 3    50   Input ~ 0
RESB
Text GLabel 10250 7550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR028
U 1 1 5CFAAE56
P 10600 7550
F 0 "#PWR028" H 10600 7300 50  0001 C CNN
F 1 "GND" H 10605 7377 50  0000 C CNN
F 2 "" H 10600 7550 50  0001 C CNN
F 3 "" H 10600 7550 50  0001 C CNN
	1    10600 7550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 7550 10600 7450
Wire Wire Line
	10600 7450 10500 7450
Wire Wire Line
	10500 7450 10500 7350
Wire Wire Line
	10500 7450 10400 7450
Wire Wire Line
	10400 7450 10400 7350
Connection ~ 10500 7450
Wire Wire Line
	10400 7450 10300 7450
Wire Wire Line
	10300 7450 10300 7350
Connection ~ 10400 7450
Wire Wire Line
	10250 7550 10200 7550
Wire Wire Line
	10200 7550 10200 7350
Wire Wire Line
	10050 7700 10000 7700
Wire Wire Line
	10000 7350 10000 7700
Wire Wire Line
	9900 7350 9900 7550
$Comp
L Connector:C96ABC J8
U 1 1 5CFB8C63
P 5800 8050
F 0 "J8" V 6117 8100 50  0000 C CNN
F 1 "C96ABC" V 6026 8100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 8100 50  0001 C CNN
F 3 " ~" H 5800 8100 50  0001 C CNN
	1    5800 8050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR029
U 1 1 5CFB8C6A
P 750 8150
F 0 "#PWR029" H 750 8000 50  0001 C CNN
F 1 "VCC" H 767 8323 50  0000 C CNN
F 2 "" H 750 8150 50  0001 C CNN
F 3 "" H 750 8150 50  0001 C CNN
	1    750  8150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  8150 750  8450
Wire Wire Line
	750  8450 1000 8450
Wire Wire Line
	1000 8450 1000 8350
Wire Wire Line
	1000 8450 1100 8450
Wire Wire Line
	1100 8450 1100 8350
Connection ~ 1000 8450
Wire Wire Line
	1100 8450 1200 8450
Wire Wire Line
	1200 8450 1200 8350
Connection ~ 1100 8450
Text GLabel 1300 8350 3    50   Input ~ 0
D5
NoConn ~ 1400 8350
Text GLabel 1500 8350 3    50   Input ~ 0
D0
Text GLabel 1600 8350 3    50   Input ~ 0
D6
NoConn ~ 1700 8350
Text GLabel 1800 8350 3    50   Input ~ 0
D7
Text GLabel 1900 8350 3    50   Input ~ 0
D3
NoConn ~ 2000 8350
Text GLabel 2100 8350 3    50   Input ~ 0
D2
Text GLabel 2200 8350 3    50   Input ~ 0
D4
NoConn ~ 2300 8350
Text GLabel 2400 8350 3    50   Input ~ 0
A0
Text GLabel 2500 8350 3    50   Input ~ 0
A2
NoConn ~ 2600 8350
Text GLabel 2700 8350 3    50   Input ~ 0
A3
Text GLabel 2800 8350 3    50   Input ~ 0
A4
NoConn ~ 2900 8350
Text GLabel 3000 8350 3    50   Input ~ 0
A1
Text GLabel 3100 8350 3    50   Input ~ 0
A5
NoConn ~ 3200 8350
Text GLabel 3300 8350 3    50   Input ~ 0
A8
Text GLabel 3400 8350 3    50   Input ~ 0
A6
NoConn ~ 3500 8350
Text GLabel 3600 8350 3    50   Input ~ 0
A7
Text GLabel 3700 8550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 8550 3700 8350
NoConn ~ 3800 8350
NoConn ~ 3900 8350
Text GLabel 4000 8450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 8450 4000 8350
NoConn ~ 4100 8350
NoConn ~ 4300 8350
NoConn ~ 4400 8350
$Comp
L power:+12V #PWR030
U 1 1 5CFB8C9A
P 4600 8350
F 0 "#PWR030" H 4600 8200 50  0001 C CNN
F 1 "+12V" H 4615 8523 50  0000 C CNN
F 2 "" H 4600 8350 50  0001 C CNN
F 3 "" H 4600 8350 50  0001 C CNN
	1    4600 8350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 8350
NoConn ~ 4700 8350
NoConn ~ 4500 8350
NoConn ~ 4900 8350
NoConn ~ 5000 8350
Text GLabel 5100 8350 3    50   Input ~ 0
D1
NoConn ~ 5200 8350
NoConn ~ 5300 8350
NoConn ~ 5400 8350
NoConn ~ 5500 8350
NoConn ~ 5600 8350
NoConn ~ 5800 8350
NoConn ~ 5900 8350
Text GLabel 6000 8350 3    50   Input ~ 0
A11
Text GLabel 6100 8350 3    50   Input ~ 0
A14
NoConn ~ 6200 8350
Text GLabel 6300 8350 3    50   Input ~ 0
A10
NoConn ~ 6400 8350
NoConn ~ 6500 8350
NoConn ~ 6600 8350
Text GLabel 6700 8450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 8350 6700 8450
NoConn ~ 6800 8350
Text GLabel 6900 8450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 8450 6900 8350
NoConn ~ 7000 8350
NoConn ~ 7100 8350
Text GLabel 7200 8450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 8450 7200 8350
NoConn ~ 7300 8350
NoConn ~ 7400 8350
Text GLabel 7500 8450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 8450 7500 8350
NoConn ~ 7600 8350
NoConn ~ 7700 8350
NoConn ~ 7800 8350
$Comp
L power:+BATT #PWR031
U 1 1 5CFB8CC4
P 7900 8450
F 0 "#PWR031" H 7900 8300 50  0001 C CNN
F 1 "+BATT" H 7915 8623 50  0000 C CNN
F 2 "" H 7900 8450 50  0001 C CNN
F 3 "" H 7900 8450 50  0001 C CNN
	1    7900 8450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 8450 7900 8350
NoConn ~ 8000 8350
Text GLabel 8100 8450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 8450 8100 8350
NoConn ~ 8200 8350
NoConn ~ 8300 8350
Text GLabel 8400 8450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 8450 8400 8350
NoConn ~ 8500 8350
NoConn ~ 8600 8350
NoConn ~ 8700 8350
Text GLabel 8800 8450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 8450 8800 8350
NoConn ~ 8900 8350
Text GLabel 9000 8350 3    50   Input ~ 0
A12
Text GLabel 9100 8550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 8550 9100 8350
NoConn ~ 9200 8350
Text GLabel 9300 8350 3    50   Input ~ 0
A15
Text GLabel 9400 8350 3    50   Input ~ 0
A13
NoConn ~ 9500 8350
Text GLabel 9600 8350 3    50   Input ~ 0
CLK
Text GLabel 9700 8350 3    50   Input ~ 0
A9
NoConn ~ 9800 8350
Text GLabel 9900 8550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 8700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 8350 3    50   Input ~ 0
RESB
Text GLabel 10250 8550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR032
U 1 1 5CFB8CE6
P 10600 8550
F 0 "#PWR032" H 10600 8300 50  0001 C CNN
F 1 "GND" H 10605 8377 50  0000 C CNN
F 2 "" H 10600 8550 50  0001 C CNN
F 3 "" H 10600 8550 50  0001 C CNN
	1    10600 8550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 8550 10600 8450
Wire Wire Line
	10600 8450 10500 8450
Wire Wire Line
	10500 8450 10500 8350
Wire Wire Line
	10500 8450 10400 8450
Wire Wire Line
	10400 8450 10400 8350
Connection ~ 10500 8450
Wire Wire Line
	10400 8450 10300 8450
Wire Wire Line
	10300 8450 10300 8350
Connection ~ 10400 8450
Wire Wire Line
	10250 8550 10200 8550
Wire Wire Line
	10200 8550 10200 8350
Wire Wire Line
	10050 8700 10000 8700
Wire Wire Line
	10000 8350 10000 8700
Wire Wire Line
	9900 8350 9900 8550
$Comp
L Connector:C96ABC J9
U 1 1 5CFCB08D
P 5800 9050
F 0 "J9" V 6117 9100 50  0000 C CNN
F 1 "C96ABC" V 6026 9100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 9100 50  0001 C CNN
F 3 " ~" H 5800 9100 50  0001 C CNN
	1    5800 9050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR033
U 1 1 5CFCB094
P 750 9150
F 0 "#PWR033" H 750 9000 50  0001 C CNN
F 1 "VCC" H 767 9323 50  0000 C CNN
F 2 "" H 750 9150 50  0001 C CNN
F 3 "" H 750 9150 50  0001 C CNN
	1    750  9150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  9150 750  9450
Wire Wire Line
	750  9450 1000 9450
Wire Wire Line
	1000 9450 1000 9350
Wire Wire Line
	1000 9450 1100 9450
Wire Wire Line
	1100 9450 1100 9350
Connection ~ 1000 9450
Wire Wire Line
	1100 9450 1200 9450
Wire Wire Line
	1200 9450 1200 9350
Connection ~ 1100 9450
Text GLabel 1300 9350 3    50   Input ~ 0
D5
NoConn ~ 1400 9350
Text GLabel 1500 9350 3    50   Input ~ 0
D0
Text GLabel 1600 9350 3    50   Input ~ 0
D6
NoConn ~ 1700 9350
Text GLabel 1800 9350 3    50   Input ~ 0
D7
Text GLabel 1900 9350 3    50   Input ~ 0
D3
NoConn ~ 2000 9350
Text GLabel 2100 9350 3    50   Input ~ 0
D2
Text GLabel 2200 9350 3    50   Input ~ 0
D4
NoConn ~ 2300 9350
Text GLabel 2400 9350 3    50   Input ~ 0
A0
Text GLabel 2500 9350 3    50   Input ~ 0
A2
NoConn ~ 2600 9350
Text GLabel 2700 9350 3    50   Input ~ 0
A3
Text GLabel 2800 9350 3    50   Input ~ 0
A4
NoConn ~ 2900 9350
Text GLabel 3000 9350 3    50   Input ~ 0
A1
Text GLabel 3100 9350 3    50   Input ~ 0
A5
NoConn ~ 3200 9350
Text GLabel 3300 9350 3    50   Input ~ 0
A8
Text GLabel 3400 9350 3    50   Input ~ 0
A6
NoConn ~ 3500 9350
Text GLabel 3600 9350 3    50   Input ~ 0
A7
Text GLabel 3700 9550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 9550 3700 9350
NoConn ~ 3800 9350
NoConn ~ 3900 9350
Text GLabel 4000 9450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 9450 4000 9350
NoConn ~ 4100 9350
NoConn ~ 4300 9350
NoConn ~ 4400 9350
$Comp
L power:+12V #PWR034
U 1 1 5CFCB0C4
P 4600 9350
F 0 "#PWR034" H 4600 9200 50  0001 C CNN
F 1 "+12V" H 4615 9523 50  0000 C CNN
F 2 "" H 4600 9350 50  0001 C CNN
F 3 "" H 4600 9350 50  0001 C CNN
	1    4600 9350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 9350
NoConn ~ 4700 9350
NoConn ~ 4500 9350
NoConn ~ 4900 9350
NoConn ~ 5000 9350
Text GLabel 5100 9350 3    50   Input ~ 0
D1
NoConn ~ 5200 9350
NoConn ~ 5300 9350
NoConn ~ 5400 9350
NoConn ~ 5500 9350
NoConn ~ 5600 9350
NoConn ~ 5800 9350
NoConn ~ 5900 9350
Text GLabel 6000 9350 3    50   Input ~ 0
A11
Text GLabel 6100 9350 3    50   Input ~ 0
A14
NoConn ~ 6200 9350
Text GLabel 6300 9350 3    50   Input ~ 0
A10
NoConn ~ 6400 9350
NoConn ~ 6500 9350
NoConn ~ 6600 9350
Text GLabel 6700 9450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 9350 6700 9450
NoConn ~ 6800 9350
Text GLabel 6900 9450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 9450 6900 9350
NoConn ~ 7000 9350
NoConn ~ 7100 9350
Text GLabel 7200 9450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 9450 7200 9350
NoConn ~ 7300 9350
NoConn ~ 7400 9350
Text GLabel 7500 9450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 9450 7500 9350
NoConn ~ 7600 9350
NoConn ~ 7700 9350
NoConn ~ 7800 9350
$Comp
L power:+BATT #PWR035
U 1 1 5CFCB0EE
P 7900 9450
F 0 "#PWR035" H 7900 9300 50  0001 C CNN
F 1 "+BATT" H 7915 9623 50  0000 C CNN
F 2 "" H 7900 9450 50  0001 C CNN
F 3 "" H 7900 9450 50  0001 C CNN
	1    7900 9450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 9450 7900 9350
NoConn ~ 8000 9350
Text GLabel 8100 9450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 9450 8100 9350
NoConn ~ 8200 9350
NoConn ~ 8300 9350
Text GLabel 8400 9450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 9450 8400 9350
NoConn ~ 8500 9350
NoConn ~ 8600 9350
NoConn ~ 8700 9350
Text GLabel 8800 9450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 9450 8800 9350
NoConn ~ 8900 9350
Text GLabel 9000 9350 3    50   Input ~ 0
A12
Text GLabel 9100 9550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 9550 9100 9350
NoConn ~ 9200 9350
Text GLabel 9300 9350 3    50   Input ~ 0
A15
Text GLabel 9400 9350 3    50   Input ~ 0
A13
NoConn ~ 9500 9350
Text GLabel 9600 9350 3    50   Input ~ 0
CLK
Text GLabel 9700 9350 3    50   Input ~ 0
A9
NoConn ~ 9800 9350
Text GLabel 9900 9550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 9700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 9350 3    50   Input ~ 0
RESB
Text GLabel 10250 9550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR036
U 1 1 5CFCB110
P 10600 9550
F 0 "#PWR036" H 10600 9300 50  0001 C CNN
F 1 "GND" H 10605 9377 50  0000 C CNN
F 2 "" H 10600 9550 50  0001 C CNN
F 3 "" H 10600 9550 50  0001 C CNN
	1    10600 9550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 9550 10600 9450
Wire Wire Line
	10600 9450 10500 9450
Wire Wire Line
	10500 9450 10500 9350
Wire Wire Line
	10500 9450 10400 9450
Wire Wire Line
	10400 9450 10400 9350
Connection ~ 10500 9450
Wire Wire Line
	10400 9450 10300 9450
Wire Wire Line
	10300 9450 10300 9350
Connection ~ 10400 9450
Wire Wire Line
	10250 9550 10200 9550
Wire Wire Line
	10200 9550 10200 9350
Wire Wire Line
	10050 9700 10000 9700
Wire Wire Line
	10000 9350 10000 9700
Wire Wire Line
	9900 9350 9900 9550
$Comp
L Connector:C96ABC J10
U 1 1 5CFE23AE
P 5800 10050
F 0 "J10" V 6117 10100 50  0000 C CNN
F 1 "C96ABC" V 6026 10100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 10100 50  0001 C CNN
F 3 " ~" H 5800 10100 50  0001 C CNN
	1    5800 10050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR037
U 1 1 5CFE23B5
P 750 10150
F 0 "#PWR037" H 750 10000 50  0001 C CNN
F 1 "VCC" H 767 10323 50  0000 C CNN
F 2 "" H 750 10150 50  0001 C CNN
F 3 "" H 750 10150 50  0001 C CNN
	1    750  10150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  10150 750  10450
Wire Wire Line
	750  10450 1000 10450
Wire Wire Line
	1000 10450 1000 10350
Wire Wire Line
	1000 10450 1100 10450
Wire Wire Line
	1100 10450 1100 10350
Connection ~ 1000 10450
Wire Wire Line
	1100 10450 1200 10450
Wire Wire Line
	1200 10450 1200 10350
Connection ~ 1100 10450
Text GLabel 1300 10350 3    50   Input ~ 0
D5
NoConn ~ 1400 10350
Text GLabel 1500 10350 3    50   Input ~ 0
D0
Text GLabel 1600 10350 3    50   Input ~ 0
D6
NoConn ~ 1700 10350
Text GLabel 1800 10350 3    50   Input ~ 0
D7
Text GLabel 1900 10350 3    50   Input ~ 0
D3
NoConn ~ 2000 10350
Text GLabel 2100 10350 3    50   Input ~ 0
D2
Text GLabel 2200 10350 3    50   Input ~ 0
D4
NoConn ~ 2300 10350
Text GLabel 2400 10350 3    50   Input ~ 0
A0
Text GLabel 2500 10350 3    50   Input ~ 0
A2
NoConn ~ 2600 10350
Text GLabel 2700 10350 3    50   Input ~ 0
A3
Text GLabel 2800 10350 3    50   Input ~ 0
A4
NoConn ~ 2900 10350
Text GLabel 3000 10350 3    50   Input ~ 0
A1
Text GLabel 3100 10350 3    50   Input ~ 0
A5
NoConn ~ 3200 10350
Text GLabel 3300 10350 3    50   Input ~ 0
A8
Text GLabel 3400 10350 3    50   Input ~ 0
A6
NoConn ~ 3500 10350
Text GLabel 3600 10350 3    50   Input ~ 0
A7
Text GLabel 3700 10550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 10550 3700 10350
NoConn ~ 3800 10350
NoConn ~ 3900 10350
Text GLabel 4000 10450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 10450 4000 10350
NoConn ~ 4100 10350
NoConn ~ 4300 10350
NoConn ~ 4400 10350
$Comp
L power:+12V #PWR038
U 1 1 5CFE23E5
P 4600 10350
F 0 "#PWR038" H 4600 10200 50  0001 C CNN
F 1 "+12V" H 4615 10523 50  0000 C CNN
F 2 "" H 4600 10350 50  0001 C CNN
F 3 "" H 4600 10350 50  0001 C CNN
	1    4600 10350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 10350
NoConn ~ 4700 10350
NoConn ~ 4500 10350
NoConn ~ 4900 10350
NoConn ~ 5000 10350
Text GLabel 5100 10350 3    50   Input ~ 0
D1
NoConn ~ 5200 10350
NoConn ~ 5300 10350
NoConn ~ 5400 10350
NoConn ~ 5500 10350
NoConn ~ 5600 10350
NoConn ~ 5800 10350
NoConn ~ 5900 10350
Text GLabel 6000 10350 3    50   Input ~ 0
A11
Text GLabel 6100 10350 3    50   Input ~ 0
A14
NoConn ~ 6200 10350
Text GLabel 6300 10350 3    50   Input ~ 0
A10
NoConn ~ 6400 10350
NoConn ~ 6500 10350
NoConn ~ 6600 10350
Text GLabel 6700 10450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 10350 6700 10450
NoConn ~ 6800 10350
Text GLabel 6900 10450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 10450 6900 10350
NoConn ~ 7000 10350
NoConn ~ 7100 10350
Text GLabel 7200 10450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 10450 7200 10350
NoConn ~ 7300 10350
NoConn ~ 7400 10350
Text GLabel 7500 10450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 10450 7500 10350
NoConn ~ 7600 10350
NoConn ~ 7700 10350
NoConn ~ 7800 10350
$Comp
L power:+BATT #PWR039
U 1 1 5CFE240F
P 7900 10450
F 0 "#PWR039" H 7900 10300 50  0001 C CNN
F 1 "+BATT" H 7915 10623 50  0000 C CNN
F 2 "" H 7900 10450 50  0001 C CNN
F 3 "" H 7900 10450 50  0001 C CNN
	1    7900 10450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 10450 7900 10350
NoConn ~ 8000 10350
Text GLabel 8100 10450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 10450 8100 10350
NoConn ~ 8200 10350
NoConn ~ 8300 10350
Text GLabel 8400 10450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 10450 8400 10350
NoConn ~ 8500 10350
NoConn ~ 8600 10350
NoConn ~ 8700 10350
Text GLabel 8800 10450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 10450 8800 10350
NoConn ~ 8900 10350
Text GLabel 9000 10350 3    50   Input ~ 0
A12
Text GLabel 9100 10550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 10550 9100 10350
NoConn ~ 9200 10350
Text GLabel 9300 10350 3    50   Input ~ 0
A15
Text GLabel 9400 10350 3    50   Input ~ 0
A13
NoConn ~ 9500 10350
Text GLabel 9600 10350 3    50   Input ~ 0
CLK
Text GLabel 9700 10350 3    50   Input ~ 0
A9
NoConn ~ 9800 10350
Text GLabel 9900 10550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 10700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 10350 3    50   Input ~ 0
RESB
Text GLabel 10250 10550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR040
U 1 1 5CFE2431
P 10600 10550
F 0 "#PWR040" H 10600 10300 50  0001 C CNN
F 1 "GND" H 10605 10377 50  0000 C CNN
F 2 "" H 10600 10550 50  0001 C CNN
F 3 "" H 10600 10550 50  0001 C CNN
	1    10600 10550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 10550 10600 10450
Wire Wire Line
	10600 10450 10500 10450
Wire Wire Line
	10500 10450 10500 10350
Wire Wire Line
	10500 10450 10400 10450
Wire Wire Line
	10400 10450 10400 10350
Connection ~ 10500 10450
Wire Wire Line
	10400 10450 10300 10450
Wire Wire Line
	10300 10450 10300 10350
Connection ~ 10400 10450
Wire Wire Line
	10250 10550 10200 10550
Wire Wire Line
	10200 10550 10200 10350
Wire Wire Line
	10050 10700 10000 10700
Wire Wire Line
	10000 10350 10000 10700
Wire Wire Line
	9900 10350 9900 10550
Text GLabel 3700 10550 3    50   Input ~ 0
~WAIT
Text GLabel 4000 10450 3    50   Input ~ 0
~BUSRQ
Text GLabel 9100 10550 3    50   Input ~ 0
~RFSH
Text GLabel 9900 10550 3    50   Input ~ 0
~MREQ
$Comp
L Connector:C96ABC J11
U 1 1 5D1B7346
P 5800 11050
F 0 "J11" V 6117 11100 50  0000 C CNN
F 1 "C96ABC" V 6026 11100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Male-96Pin-3rows" H 5800 11100 50  0001 C CNN
F 3 " ~" H 5800 11100 50  0001 C CNN
	1    5800 11050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR041
U 1 1 5D1B734C
P 750 11150
F 0 "#PWR041" H 750 11000 50  0001 C CNN
F 1 "VCC" H 767 11323 50  0000 C CNN
F 2 "" H 750 11150 50  0001 C CNN
F 3 "" H 750 11150 50  0001 C CNN
	1    750  11150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  11150 750  11450
Wire Wire Line
	750  11450 1000 11450
Wire Wire Line
	1000 11450 1000 11350
Wire Wire Line
	1000 11450 1100 11450
Wire Wire Line
	1100 11450 1100 11350
Connection ~ 1000 11450
Wire Wire Line
	1100 11450 1200 11450
Wire Wire Line
	1200 11450 1200 11350
Connection ~ 1100 11450
Text GLabel 1300 11350 3    50   Input ~ 0
D5
NoConn ~ 1400 11350
Text GLabel 1500 11350 3    50   Input ~ 0
D0
Text GLabel 1600 11350 3    50   Input ~ 0
D6
NoConn ~ 1700 11350
Text GLabel 1800 11350 3    50   Input ~ 0
D7
Text GLabel 1900 11350 3    50   Input ~ 0
D3
NoConn ~ 2000 11350
Text GLabel 2100 11350 3    50   Input ~ 0
D2
Text GLabel 2200 11350 3    50   Input ~ 0
D4
NoConn ~ 2300 11350
Text GLabel 2400 11350 3    50   Input ~ 0
A0
Text GLabel 2500 11350 3    50   Input ~ 0
A2
NoConn ~ 2600 11350
Text GLabel 2700 11350 3    50   Input ~ 0
A3
Text GLabel 2800 11350 3    50   Input ~ 0
A4
NoConn ~ 2900 11350
Text GLabel 3000 11350 3    50   Input ~ 0
A1
Text GLabel 3100 11350 3    50   Input ~ 0
A5
NoConn ~ 3200 11350
Text GLabel 3300 11350 3    50   Input ~ 0
A8
Text GLabel 3400 11350 3    50   Input ~ 0
A6
NoConn ~ 3500 11350
Text GLabel 3600 11350 3    50   Input ~ 0
A7
Text GLabel 3700 11550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 11550 3700 11350
NoConn ~ 3800 11350
NoConn ~ 3900 11350
Text GLabel 4000 11450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 11450 4000 11350
NoConn ~ 4100 11350
NoConn ~ 4300 11350
NoConn ~ 4400 11350
$Comp
L power:+12V #PWR042
U 1 1 5D1B737C
P 4600 11350
F 0 "#PWR042" H 4600 11200 50  0001 C CNN
F 1 "+12V" H 4615 11523 50  0000 C CNN
F 2 "" H 4600 11350 50  0001 C CNN
F 3 "" H 4600 11350 50  0001 C CNN
	1    4600 11350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 11350
NoConn ~ 4700 11350
NoConn ~ 4500 11350
NoConn ~ 4900 11350
NoConn ~ 5000 11350
Text GLabel 5100 11350 3    50   Input ~ 0
D1
NoConn ~ 5200 11350
NoConn ~ 5300 11350
NoConn ~ 5400 11350
NoConn ~ 5500 11350
NoConn ~ 5600 11350
NoConn ~ 5800 11350
NoConn ~ 5900 11350
Text GLabel 6000 11350 3    50   Input ~ 0
A11
Text GLabel 6100 11350 3    50   Input ~ 0
A14
NoConn ~ 6200 11350
Text GLabel 6300 11350 3    50   Input ~ 0
A10
NoConn ~ 6400 11350
NoConn ~ 6500 11350
NoConn ~ 6600 11350
Text GLabel 6700 11450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 11350 6700 11450
NoConn ~ 6800 11350
Text GLabel 6900 11450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 11450 6900 11350
NoConn ~ 7000 11350
NoConn ~ 7100 11350
Text GLabel 7200 11450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 11450 7200 11350
NoConn ~ 7300 11350
NoConn ~ 7400 11350
Text GLabel 7500 11450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 11450 7500 11350
NoConn ~ 7600 11350
NoConn ~ 7700 11350
NoConn ~ 7800 11350
$Comp
L power:+BATT #PWR043
U 1 1 5D1B73A6
P 7900 11450
F 0 "#PWR043" H 7900 11300 50  0001 C CNN
F 1 "+BATT" H 7915 11623 50  0000 C CNN
F 2 "" H 7900 11450 50  0001 C CNN
F 3 "" H 7900 11450 50  0001 C CNN
	1    7900 11450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 11450 7900 11350
NoConn ~ 8000 11350
Text GLabel 8100 11450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 11450 8100 11350
NoConn ~ 8200 11350
NoConn ~ 8300 11350
Text GLabel 8400 11450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 11450 8400 11350
NoConn ~ 8500 11350
NoConn ~ 8600 11350
NoConn ~ 8700 11350
Text GLabel 8800 11450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 11450 8800 11350
NoConn ~ 8900 11350
Text GLabel 9000 11350 3    50   Input ~ 0
A12
Text GLabel 9100 11550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 11550 9100 11350
NoConn ~ 9200 11350
Text GLabel 9300 11350 3    50   Input ~ 0
A15
Text GLabel 9400 11350 3    50   Input ~ 0
A13
NoConn ~ 9500 11350
Text GLabel 9600 11350 3    50   Input ~ 0
CLK
Text GLabel 9700 11350 3    50   Input ~ 0
A9
NoConn ~ 9800 11350
Text GLabel 9900 11550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 11700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 11350 3    50   Input ~ 0
RESB
Text GLabel 10250 11550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR044
U 1 1 5D1B73C8
P 10600 11550
F 0 "#PWR044" H 10600 11300 50  0001 C CNN
F 1 "GND" H 10605 11377 50  0000 C CNN
F 2 "" H 10600 11550 50  0001 C CNN
F 3 "" H 10600 11550 50  0001 C CNN
	1    10600 11550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 11550 10600 11450
Wire Wire Line
	10600 11450 10500 11450
Wire Wire Line
	10500 11450 10500 11350
Wire Wire Line
	10500 11450 10400 11450
Wire Wire Line
	10400 11450 10400 11350
Connection ~ 10500 11450
Wire Wire Line
	10400 11450 10300 11450
Wire Wire Line
	10300 11450 10300 11350
Connection ~ 10400 11450
Wire Wire Line
	10250 11550 10200 11550
Wire Wire Line
	10200 11550 10200 11350
Wire Wire Line
	10050 11700 10000 11700
Wire Wire Line
	10000 11350 10000 11700
Wire Wire Line
	9900 11350 9900 11550
$Comp
L Connector:C96ABC J12
U 1 1 5D1B73DC
P 5800 12050
F 0 "J12" V 6117 12100 50  0000 C CNN
F 1 "C96ABC" V 6026 12100 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Male-96Pin-3rows" H 5800 12100 50  0001 C CNN
F 3 " ~" H 5800 12100 50  0001 C CNN
	1    5800 12050
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR045
U 1 1 5D1B73E2
P 750 12150
F 0 "#PWR045" H 750 12000 50  0001 C CNN
F 1 "VCC" H 767 12323 50  0000 C CNN
F 2 "" H 750 12150 50  0001 C CNN
F 3 "" H 750 12150 50  0001 C CNN
	1    750  12150
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  12150 750  12450
Wire Wire Line
	750  12450 1000 12450
Wire Wire Line
	1000 12450 1000 12350
Wire Wire Line
	1000 12450 1100 12450
Wire Wire Line
	1100 12450 1100 12350
Connection ~ 1000 12450
Wire Wire Line
	1100 12450 1200 12450
Wire Wire Line
	1200 12450 1200 12350
Connection ~ 1100 12450
Text GLabel 1300 12350 3    50   Input ~ 0
D5
NoConn ~ 1400 12350
Text GLabel 1500 12350 3    50   Input ~ 0
D0
Text GLabel 1600 12350 3    50   Input ~ 0
D6
NoConn ~ 1700 12350
Text GLabel 1800 12350 3    50   Input ~ 0
D7
Text GLabel 1900 12350 3    50   Input ~ 0
D3
NoConn ~ 2000 12350
Text GLabel 2100 12350 3    50   Input ~ 0
D2
Text GLabel 2200 12350 3    50   Input ~ 0
D4
NoConn ~ 2300 12350
Text GLabel 2400 12350 3    50   Input ~ 0
A0
Text GLabel 2500 12350 3    50   Input ~ 0
A2
NoConn ~ 2600 12350
Text GLabel 2700 12350 3    50   Input ~ 0
A3
Text GLabel 2800 12350 3    50   Input ~ 0
A4
NoConn ~ 2900 12350
Text GLabel 3000 12350 3    50   Input ~ 0
A1
Text GLabel 3100 12350 3    50   Input ~ 0
A5
NoConn ~ 3200 12350
Text GLabel 3300 12350 3    50   Input ~ 0
A8
Text GLabel 3400 12350 3    50   Input ~ 0
A6
NoConn ~ 3500 12350
Text GLabel 3600 12350 3    50   Input ~ 0
A7
Text GLabel 3700 12550 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 12550 3700 12350
NoConn ~ 3800 12350
NoConn ~ 3900 12350
Text GLabel 4000 12450 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 12450 4000 12350
NoConn ~ 4100 12350
NoConn ~ 4300 12350
NoConn ~ 4400 12350
$Comp
L power:+12V #PWR046
U 1 1 5D1B7412
P 4600 12350
F 0 "#PWR046" H 4600 12200 50  0001 C CNN
F 1 "+12V" H 4615 12523 50  0000 C CNN
F 2 "" H 4600 12350 50  0001 C CNN
F 3 "" H 4600 12350 50  0001 C CNN
	1    4600 12350
	-1   0    0    1   
$EndComp
NoConn ~ 4800 12350
NoConn ~ 4700 12350
NoConn ~ 4500 12350
NoConn ~ 4900 12350
NoConn ~ 5000 12350
Text GLabel 5100 12350 3    50   Input ~ 0
D1
NoConn ~ 5200 12350
NoConn ~ 5300 12350
NoConn ~ 5400 12350
NoConn ~ 5500 12350
NoConn ~ 5600 12350
NoConn ~ 5800 12350
NoConn ~ 5900 12350
Text GLabel 6000 12350 3    50   Input ~ 0
A11
Text GLabel 6100 12350 3    50   Input ~ 0
A14
NoConn ~ 6200 12350
Text GLabel 6300 12350 3    50   Input ~ 0
A10
NoConn ~ 6400 12350
NoConn ~ 6500 12350
NoConn ~ 6600 12350
Text GLabel 6700 12450 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 12350 6700 12450
NoConn ~ 6800 12350
Text GLabel 6900 12450 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 12450 6900 12350
NoConn ~ 7000 12350
NoConn ~ 7100 12350
Text GLabel 7200 12450 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 12450 7200 12350
NoConn ~ 7300 12350
NoConn ~ 7400 12350
Text GLabel 7500 12450 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 12450 7500 12350
NoConn ~ 7600 12350
NoConn ~ 7700 12350
NoConn ~ 7800 12350
$Comp
L power:+BATT #PWR047
U 1 1 5D1B743C
P 7900 12450
F 0 "#PWR047" H 7900 12300 50  0001 C CNN
F 1 "+BATT" H 7915 12623 50  0000 C CNN
F 2 "" H 7900 12450 50  0001 C CNN
F 3 "" H 7900 12450 50  0001 C CNN
	1    7900 12450
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 12450 7900 12350
NoConn ~ 8000 12350
Text GLabel 8100 12450 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 12450 8100 12350
NoConn ~ 8200 12350
NoConn ~ 8300 12350
Text GLabel 8400 12450 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 12450 8400 12350
NoConn ~ 8500 12350
NoConn ~ 8600 12350
NoConn ~ 8700 12350
Text GLabel 8800 12450 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 12450 8800 12350
NoConn ~ 8900 12350
Text GLabel 9000 12350 3    50   Input ~ 0
A12
Text GLabel 9100 12550 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 12550 9100 12350
NoConn ~ 9200 12350
Text GLabel 9300 12350 3    50   Input ~ 0
A15
Text GLabel 9400 12350 3    50   Input ~ 0
A13
NoConn ~ 9500 12350
Text GLabel 9600 12350 3    50   Input ~ 0
CLK
Text GLabel 9700 12350 3    50   Input ~ 0
A9
NoConn ~ 9800 12350
Text GLabel 9900 12550 3    50   Input ~ 0
~MREQ
Text GLabel 10050 12700 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 12350 3    50   Input ~ 0
RESB
Text GLabel 10250 12550 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR048
U 1 1 5D1B745E
P 10600 12550
F 0 "#PWR048" H 10600 12300 50  0001 C CNN
F 1 "GND" H 10605 12377 50  0000 C CNN
F 2 "" H 10600 12550 50  0001 C CNN
F 3 "" H 10600 12550 50  0001 C CNN
	1    10600 12550
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 12550 10600 12450
Wire Wire Line
	10600 12450 10500 12450
Wire Wire Line
	10500 12450 10500 12350
Wire Wire Line
	10500 12450 10400 12450
Wire Wire Line
	10400 12450 10400 12350
Connection ~ 10500 12450
Wire Wire Line
	10400 12450 10300 12450
Wire Wire Line
	10300 12450 10300 12350
Connection ~ 10400 12450
Wire Wire Line
	10250 12550 10200 12550
Wire Wire Line
	10200 12550 10200 12350
Wire Wire Line
	10050 12700 10000 12700
Wire Wire Line
	10000 12350 10000 12700
Wire Wire Line
	9900 12350 9900 12550
$EndSCHEMATC
