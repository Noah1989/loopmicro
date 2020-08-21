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
P 5800 3600
F 0 "J1" V 6117 3650 50  0000 C CNN
F 1 "C96ABC" V 6026 3650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 3650 50  0001 C CNN
F 3 " ~" H 5800 3650 50  0001 C CNN
	1    5800 3600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR01
U 1 1 5CF8BC7A
P 750 3700
F 0 "#PWR01" H 750 3550 50  0001 C CNN
F 1 "VCC" H 767 3873 50  0000 C CNN
F 2 "" H 750 3700 50  0001 C CNN
F 3 "" H 750 3700 50  0001 C CNN
	1    750  3700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  3700 750  4000
Wire Wire Line
	750  4000 1000 4000
Wire Wire Line
	1000 4000 1000 3900
Wire Wire Line
	1000 4000 1100 4000
Wire Wire Line
	1100 4000 1100 3900
Connection ~ 1000 4000
Wire Wire Line
	1100 4000 1200 4000
Wire Wire Line
	1200 4000 1200 3900
Connection ~ 1100 4000
Text GLabel 1300 3900 3    50   Input ~ 0
D5
NoConn ~ 1400 3900
Text GLabel 1500 3900 3    50   Input ~ 0
D0
Text GLabel 1600 3900 3    50   Input ~ 0
D6
NoConn ~ 1700 3900
Text GLabel 1800 3900 3    50   Input ~ 0
D7
Text GLabel 1900 3900 3    50   Input ~ 0
D3
NoConn ~ 2000 3900
Text GLabel 2100 3900 3    50   Input ~ 0
D2
Text GLabel 2200 3900 3    50   Input ~ 0
D4
NoConn ~ 2300 3900
Text GLabel 2400 3900 3    50   Input ~ 0
A0
Text GLabel 2500 3900 3    50   Input ~ 0
A2
NoConn ~ 2600 3900
Text GLabel 2700 3900 3    50   Input ~ 0
A3
Text GLabel 2800 3900 3    50   Input ~ 0
A4
NoConn ~ 2900 3900
Text GLabel 3000 3900 3    50   Input ~ 0
A1
Text GLabel 3100 3900 3    50   Input ~ 0
A5
NoConn ~ 3200 3900
Text GLabel 3300 3900 3    50   Input ~ 0
A8
Text GLabel 3400 3900 3    50   Input ~ 0
A6
NoConn ~ 3500 3900
Text GLabel 3600 3900 3    50   Input ~ 0
A7
Text GLabel 3700 4100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 4100 3700 3900
NoConn ~ 3800 3900
NoConn ~ 3900 3900
Text GLabel 4000 4000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 4000 4000 3900
NoConn ~ 4100 3900
NoConn ~ 4300 3900
NoConn ~ 4400 3900
$Comp
L power:+12V #PWR02
U 1 1 5CF8C338
P 4600 3900
F 0 "#PWR02" H 4600 3750 50  0001 C CNN
F 1 "+12V" H 4615 4073 50  0000 C CNN
F 2 "" H 4600 3900 50  0001 C CNN
F 3 "" H 4600 3900 50  0001 C CNN
	1    4600 3900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 3900
NoConn ~ 4700 3900
NoConn ~ 4500 3900
NoConn ~ 4900 3900
NoConn ~ 5000 3900
Text GLabel 5100 3900 3    50   Input ~ 0
D1
NoConn ~ 5200 3900
NoConn ~ 5300 3900
NoConn ~ 5400 3900
NoConn ~ 5500 3900
NoConn ~ 5600 3900
NoConn ~ 5800 3900
NoConn ~ 5900 3900
Text GLabel 6000 3900 3    50   Input ~ 0
A11
Text GLabel 6100 3900 3    50   Input ~ 0
A14
NoConn ~ 6200 3900
Text GLabel 6300 3900 3    50   Input ~ 0
A10
NoConn ~ 6400 3900
NoConn ~ 6500 3900
NoConn ~ 6600 3900
Text GLabel 6700 4000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 3900 6700 4000
NoConn ~ 6800 3900
Text GLabel 6900 4000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 4000 6900 3900
NoConn ~ 7000 3900
NoConn ~ 7100 3900
Text GLabel 7200 4000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 4000 7200 3900
NoConn ~ 7300 3900
NoConn ~ 7400 3900
Text GLabel 7500 4000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 4000 7500 3900
NoConn ~ 7600 3900
NoConn ~ 7700 3900
NoConn ~ 7800 3900
$Comp
L power:+BATT #PWR03
U 1 1 5CF8D033
P 7900 4000
F 0 "#PWR03" H 7900 3850 50  0001 C CNN
F 1 "+BATT" H 7915 4173 50  0000 C CNN
F 2 "" H 7900 4000 50  0001 C CNN
F 3 "" H 7900 4000 50  0001 C CNN
	1    7900 4000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 4000 7900 3900
NoConn ~ 8000 3900
Text GLabel 8100 4000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 4000 8100 3900
NoConn ~ 8200 3900
NoConn ~ 8300 3900
Text GLabel 8400 4000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 4000 8400 3900
NoConn ~ 8500 3900
NoConn ~ 8700 3900
Text GLabel 8800 4000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 4000 8800 3900
NoConn ~ 8900 3900
Text GLabel 9000 3900 3    50   Input ~ 0
A12
Text GLabel 9100 4100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 4100 9100 3900
NoConn ~ 9200 3900
Text GLabel 9300 3900 3    50   Input ~ 0
A15
Text GLabel 9400 3900 3    50   Input ~ 0
A13
NoConn ~ 9500 3900
Text GLabel 9600 3900 3    50   Input ~ 0
CLK
Text GLabel 9700 3900 3    50   Input ~ 0
A9
NoConn ~ 9800 3900
Text GLabel 9900 4100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 4250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 3900 3    50   Input ~ 0
RESB
Text GLabel 10250 4100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR04
U 1 1 5CF8F827
P 10600 4100
F 0 "#PWR04" H 10600 3850 50  0001 C CNN
F 1 "GND" H 10605 3927 50  0000 C CNN
F 2 "" H 10600 4100 50  0001 C CNN
F 3 "" H 10600 4100 50  0001 C CNN
	1    10600 4100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 4100 10600 4000
Wire Wire Line
	10600 4000 10500 4000
Wire Wire Line
	10500 4000 10500 3900
Wire Wire Line
	10500 4000 10400 4000
Wire Wire Line
	10400 4000 10400 3900
Connection ~ 10500 4000
Wire Wire Line
	10400 4000 10300 4000
Wire Wire Line
	10300 4000 10300 3900
Connection ~ 10400 4000
Wire Wire Line
	10250 4100 10200 4100
Wire Wire Line
	10200 4100 10200 3900
Wire Wire Line
	10050 4250 10000 4250
Wire Wire Line
	10000 3900 10000 4250
Wire Wire Line
	9900 3900 9900 4100
$Comp
L Connector:C96ABC J2
U 1 1 5CF91D0B
P 5800 4600
F 0 "J2" V 6117 4650 50  0000 C CNN
F 1 "C96ABC" V 6026 4650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 4650 50  0001 C CNN
F 3 " ~" H 5800 4650 50  0001 C CNN
	1    5800 4600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR05
U 1 1 5CF91D12
P 750 4700
F 0 "#PWR05" H 750 4550 50  0001 C CNN
F 1 "VCC" H 767 4873 50  0000 C CNN
F 2 "" H 750 4700 50  0001 C CNN
F 3 "" H 750 4700 50  0001 C CNN
	1    750  4700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  4700 750  5000
Wire Wire Line
	750  5000 1000 5000
Wire Wire Line
	1000 5000 1000 4900
Wire Wire Line
	1000 5000 1100 5000
Wire Wire Line
	1100 5000 1100 4900
Connection ~ 1000 5000
Wire Wire Line
	1100 5000 1200 5000
Wire Wire Line
	1200 5000 1200 4900
Connection ~ 1100 5000
Text GLabel 1300 4900 3    50   Input ~ 0
D5
NoConn ~ 1400 4900
Text GLabel 1500 4900 3    50   Input ~ 0
D0
Text GLabel 1600 4900 3    50   Input ~ 0
D6
NoConn ~ 1700 4900
Text GLabel 1800 4900 3    50   Input ~ 0
D7
Text GLabel 1900 4900 3    50   Input ~ 0
D3
NoConn ~ 2000 4900
Text GLabel 2100 4900 3    50   Input ~ 0
D2
Text GLabel 2200 4900 3    50   Input ~ 0
D4
NoConn ~ 2300 4900
Text GLabel 2400 4900 3    50   Input ~ 0
A0
Text GLabel 2500 4900 3    50   Input ~ 0
A2
NoConn ~ 2600 4900
Text GLabel 2700 4900 3    50   Input ~ 0
A3
Text GLabel 2800 4900 3    50   Input ~ 0
A4
NoConn ~ 2900 4900
Text GLabel 3000 4900 3    50   Input ~ 0
A1
Text GLabel 3100 4900 3    50   Input ~ 0
A5
NoConn ~ 3200 4900
Text GLabel 3300 4900 3    50   Input ~ 0
A8
Text GLabel 3400 4900 3    50   Input ~ 0
A6
NoConn ~ 3500 4900
Text GLabel 3600 4900 3    50   Input ~ 0
A7
Text GLabel 3700 5100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 5100 3700 4900
NoConn ~ 3800 4900
NoConn ~ 3900 4900
Text GLabel 4000 5000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 5000 4000 4900
NoConn ~ 4100 4900
NoConn ~ 4300 4900
NoConn ~ 4400 4900
$Comp
L power:+12V #PWR06
U 1 1 5CF91D42
P 4600 4900
F 0 "#PWR06" H 4600 4750 50  0001 C CNN
F 1 "+12V" H 4615 5073 50  0000 C CNN
F 2 "" H 4600 4900 50  0001 C CNN
F 3 "" H 4600 4900 50  0001 C CNN
	1    4600 4900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 4900
NoConn ~ 4700 4900
NoConn ~ 4500 4900
NoConn ~ 4900 4900
NoConn ~ 5000 4900
Text GLabel 5100 4900 3    50   Input ~ 0
D1
NoConn ~ 5200 4900
NoConn ~ 5300 4900
NoConn ~ 5400 4900
NoConn ~ 5500 4900
NoConn ~ 5600 4900
NoConn ~ 5800 4900
NoConn ~ 5900 4900
Text GLabel 6000 4900 3    50   Input ~ 0
A11
Text GLabel 6100 4900 3    50   Input ~ 0
A14
NoConn ~ 6200 4900
Text GLabel 6300 4900 3    50   Input ~ 0
A10
NoConn ~ 6400 4900
NoConn ~ 6500 4900
NoConn ~ 6600 4900
Text GLabel 6700 5000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 4900 6700 5000
NoConn ~ 6800 4900
Text GLabel 6900 5000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 5000 6900 4900
NoConn ~ 7000 4900
NoConn ~ 7100 4900
Text GLabel 7200 5000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 5000 7200 4900
NoConn ~ 7300 4900
NoConn ~ 7400 4900
Text GLabel 7500 5000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 5000 7500 4900
NoConn ~ 7600 4900
NoConn ~ 7700 4900
NoConn ~ 7800 4900
$Comp
L power:+BATT #PWR07
U 1 1 5CF91D6C
P 7900 5000
F 0 "#PWR07" H 7900 4850 50  0001 C CNN
F 1 "+BATT" H 7915 5173 50  0000 C CNN
F 2 "" H 7900 5000 50  0001 C CNN
F 3 "" H 7900 5000 50  0001 C CNN
	1    7900 5000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 5000 7900 4900
NoConn ~ 8000 4900
Text GLabel 8100 5000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 5000 8100 4900
NoConn ~ 8200 4900
NoConn ~ 8300 4900
Text GLabel 8400 5000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 5000 8400 4900
NoConn ~ 8500 4900
NoConn ~ 8700 4900
Text GLabel 8800 5000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 5000 8800 4900
NoConn ~ 8900 4900
Text GLabel 9000 4900 3    50   Input ~ 0
A12
Text GLabel 9100 5100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 5100 9100 4900
NoConn ~ 9200 4900
Text GLabel 9300 4900 3    50   Input ~ 0
A15
Text GLabel 9400 4900 3    50   Input ~ 0
A13
NoConn ~ 9500 4900
Text GLabel 9600 4900 3    50   Input ~ 0
CLK
Text GLabel 9700 4900 3    50   Input ~ 0
A9
NoConn ~ 9800 4900
Text GLabel 9900 5100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 5250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 4900 3    50   Input ~ 0
RESB
Text GLabel 10250 5100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR08
U 1 1 5CF91D8E
P 10600 5100
F 0 "#PWR08" H 10600 4850 50  0001 C CNN
F 1 "GND" H 10605 4927 50  0000 C CNN
F 2 "" H 10600 5100 50  0001 C CNN
F 3 "" H 10600 5100 50  0001 C CNN
	1    10600 5100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 5100 10600 5000
Wire Wire Line
	10600 5000 10500 5000
Wire Wire Line
	10500 5000 10500 4900
Wire Wire Line
	10500 5000 10400 5000
Wire Wire Line
	10400 5000 10400 4900
Connection ~ 10500 5000
Wire Wire Line
	10400 5000 10300 5000
Wire Wire Line
	10300 5000 10300 4900
Connection ~ 10400 5000
Wire Wire Line
	10250 5100 10200 5100
Wire Wire Line
	10200 5100 10200 4900
Wire Wire Line
	10050 5250 10000 5250
Wire Wire Line
	10000 4900 10000 5250
Wire Wire Line
	9900 4900 9900 5100
$Comp
L Connector:C96ABC J3
U 1 1 5CF92DC9
P 5800 5600
F 0 "J3" V 6117 5650 50  0000 C CNN
F 1 "C96ABC" V 6026 5650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 5650 50  0001 C CNN
F 3 " ~" H 5800 5650 50  0001 C CNN
	1    5800 5600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR09
U 1 1 5CF92DD0
P 750 5700
F 0 "#PWR09" H 750 5550 50  0001 C CNN
F 1 "VCC" H 767 5873 50  0000 C CNN
F 2 "" H 750 5700 50  0001 C CNN
F 3 "" H 750 5700 50  0001 C CNN
	1    750  5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  5700 750  6000
Wire Wire Line
	750  6000 1000 6000
Wire Wire Line
	1000 6000 1000 5900
Wire Wire Line
	1000 6000 1100 6000
Wire Wire Line
	1100 6000 1100 5900
Connection ~ 1000 6000
Wire Wire Line
	1100 6000 1200 6000
Wire Wire Line
	1200 6000 1200 5900
Connection ~ 1100 6000
Text GLabel 1300 5900 3    50   Input ~ 0
D5
NoConn ~ 1400 5900
Text GLabel 1500 5900 3    50   Input ~ 0
D0
Text GLabel 1600 5900 3    50   Input ~ 0
D6
NoConn ~ 1700 5900
Text GLabel 1800 5900 3    50   Input ~ 0
D7
Text GLabel 1900 5900 3    50   Input ~ 0
D3
NoConn ~ 2000 5900
Text GLabel 2100 5900 3    50   Input ~ 0
D2
Text GLabel 2200 5900 3    50   Input ~ 0
D4
NoConn ~ 2300 5900
Text GLabel 2400 5900 3    50   Input ~ 0
A0
Text GLabel 2500 5900 3    50   Input ~ 0
A2
NoConn ~ 2600 5900
Text GLabel 2700 5900 3    50   Input ~ 0
A3
Text GLabel 2800 5900 3    50   Input ~ 0
A4
NoConn ~ 2900 5900
Text GLabel 3000 5900 3    50   Input ~ 0
A1
Text GLabel 3100 5900 3    50   Input ~ 0
A5
NoConn ~ 3200 5900
Text GLabel 3300 5900 3    50   Input ~ 0
A8
Text GLabel 3400 5900 3    50   Input ~ 0
A6
NoConn ~ 3500 5900
Text GLabel 3600 5900 3    50   Input ~ 0
A7
Text GLabel 3700 6100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 6100 3700 5900
NoConn ~ 3800 5900
NoConn ~ 3900 5900
Text GLabel 4000 6000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 6000 4000 5900
NoConn ~ 4100 5900
NoConn ~ 4300 5900
NoConn ~ 4400 5900
$Comp
L power:+12V #PWR010
U 1 1 5CF92E00
P 4600 5900
F 0 "#PWR010" H 4600 5750 50  0001 C CNN
F 1 "+12V" H 4615 6073 50  0000 C CNN
F 2 "" H 4600 5900 50  0001 C CNN
F 3 "" H 4600 5900 50  0001 C CNN
	1    4600 5900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 5900
NoConn ~ 4700 5900
NoConn ~ 4500 5900
NoConn ~ 4900 5900
NoConn ~ 5000 5900
Text GLabel 5100 5900 3    50   Input ~ 0
D1
NoConn ~ 5200 5900
NoConn ~ 5300 5900
NoConn ~ 5400 5900
NoConn ~ 5500 5900
NoConn ~ 5600 5900
NoConn ~ 5800 5900
NoConn ~ 5900 5900
Text GLabel 6000 5900 3    50   Input ~ 0
A11
Text GLabel 6100 5900 3    50   Input ~ 0
A14
NoConn ~ 6200 5900
Text GLabel 6300 5900 3    50   Input ~ 0
A10
NoConn ~ 6400 5900
NoConn ~ 6500 5900
NoConn ~ 6600 5900
Text GLabel 6700 6000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 5900 6700 6000
NoConn ~ 6800 5900
Text GLabel 6900 6000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 6000 6900 5900
NoConn ~ 7000 5900
NoConn ~ 7100 5900
Text GLabel 7200 6000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 6000 7200 5900
NoConn ~ 7300 5900
NoConn ~ 7400 5900
Text GLabel 7500 6000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 6000 7500 5900
NoConn ~ 7600 5900
NoConn ~ 7700 5900
NoConn ~ 7800 5900
$Comp
L power:+BATT #PWR011
U 1 1 5CF92E2A
P 7900 6000
F 0 "#PWR011" H 7900 5850 50  0001 C CNN
F 1 "+BATT" H 7915 6173 50  0000 C CNN
F 2 "" H 7900 6000 50  0001 C CNN
F 3 "" H 7900 6000 50  0001 C CNN
	1    7900 6000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 6000 7900 5900
NoConn ~ 8000 5900
Text GLabel 8100 6000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 6000 8100 5900
NoConn ~ 8200 5900
NoConn ~ 8300 5900
Text GLabel 8400 6000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 6000 8400 5900
NoConn ~ 8500 5900
NoConn ~ 8700 5900
Text GLabel 8800 6000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 6000 8800 5900
NoConn ~ 8900 5900
Text GLabel 9000 5900 3    50   Input ~ 0
A12
Text GLabel 9100 6100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 6100 9100 5900
NoConn ~ 9200 5900
Text GLabel 9300 5900 3    50   Input ~ 0
A15
Text GLabel 9400 5900 3    50   Input ~ 0
A13
NoConn ~ 9500 5900
Text GLabel 9600 5900 3    50   Input ~ 0
CLK
Text GLabel 9700 5900 3    50   Input ~ 0
A9
NoConn ~ 9800 5900
Text GLabel 9900 6100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 6250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 5900 3    50   Input ~ 0
RESB
Text GLabel 10250 6100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR012
U 1 1 5CF92E4C
P 10600 6100
F 0 "#PWR012" H 10600 5850 50  0001 C CNN
F 1 "GND" H 10605 5927 50  0000 C CNN
F 2 "" H 10600 6100 50  0001 C CNN
F 3 "" H 10600 6100 50  0001 C CNN
	1    10600 6100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 6100 10600 6000
Wire Wire Line
	10600 6000 10500 6000
Wire Wire Line
	10500 6000 10500 5900
Wire Wire Line
	10500 6000 10400 6000
Wire Wire Line
	10400 6000 10400 5900
Connection ~ 10500 6000
Wire Wire Line
	10400 6000 10300 6000
Wire Wire Line
	10300 6000 10300 5900
Connection ~ 10400 6000
Wire Wire Line
	10250 6100 10200 6100
Wire Wire Line
	10200 6100 10200 5900
Wire Wire Line
	10050 6250 10000 6250
Wire Wire Line
	10000 5900 10000 6250
Wire Wire Line
	9900 5900 9900 6100
$Comp
L Connector:C96ABC J4
U 1 1 5CF954C7
P 5800 6600
F 0 "J4" V 6117 6650 50  0000 C CNN
F 1 "C96ABC" V 6026 6650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 6650 50  0001 C CNN
F 3 " ~" H 5800 6650 50  0001 C CNN
	1    5800 6600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR013
U 1 1 5CF954CE
P 750 6700
F 0 "#PWR013" H 750 6550 50  0001 C CNN
F 1 "VCC" H 767 6873 50  0000 C CNN
F 2 "" H 750 6700 50  0001 C CNN
F 3 "" H 750 6700 50  0001 C CNN
	1    750  6700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  6700 750  7000
Wire Wire Line
	750  7000 1000 7000
Wire Wire Line
	1000 7000 1000 6900
Wire Wire Line
	1000 7000 1100 7000
Wire Wire Line
	1100 7000 1100 6900
Connection ~ 1000 7000
Wire Wire Line
	1100 7000 1200 7000
Wire Wire Line
	1200 7000 1200 6900
Connection ~ 1100 7000
Text GLabel 1300 6900 3    50   Input ~ 0
D5
NoConn ~ 1400 6900
Text GLabel 1500 6900 3    50   Input ~ 0
D0
Text GLabel 1600 6900 3    50   Input ~ 0
D6
NoConn ~ 1700 6900
Text GLabel 1800 6900 3    50   Input ~ 0
D7
Text GLabel 1900 6900 3    50   Input ~ 0
D3
NoConn ~ 2000 6900
Text GLabel 2100 6900 3    50   Input ~ 0
D2
Text GLabel 2200 6900 3    50   Input ~ 0
D4
NoConn ~ 2300 6900
Text GLabel 2400 6900 3    50   Input ~ 0
A0
Text GLabel 2500 6900 3    50   Input ~ 0
A2
NoConn ~ 2600 6900
Text GLabel 2700 6900 3    50   Input ~ 0
A3
Text GLabel 2800 6900 3    50   Input ~ 0
A4
NoConn ~ 2900 6900
Text GLabel 3000 6900 3    50   Input ~ 0
A1
Text GLabel 3100 6900 3    50   Input ~ 0
A5
NoConn ~ 3200 6900
Text GLabel 3300 6900 3    50   Input ~ 0
A8
Text GLabel 3400 6900 3    50   Input ~ 0
A6
NoConn ~ 3500 6900
Text GLabel 3600 6900 3    50   Input ~ 0
A7
Text GLabel 3700 7100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 7100 3700 6900
NoConn ~ 3800 6900
NoConn ~ 3900 6900
Text GLabel 4000 7000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 7000 4000 6900
NoConn ~ 4100 6900
NoConn ~ 4300 6900
NoConn ~ 4400 6900
$Comp
L power:+12V #PWR014
U 1 1 5CF954FE
P 4600 6900
F 0 "#PWR014" H 4600 6750 50  0001 C CNN
F 1 "+12V" H 4615 7073 50  0000 C CNN
F 2 "" H 4600 6900 50  0001 C CNN
F 3 "" H 4600 6900 50  0001 C CNN
	1    4600 6900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 6900
NoConn ~ 4700 6900
NoConn ~ 4500 6900
NoConn ~ 4900 6900
NoConn ~ 5000 6900
Text GLabel 5100 6900 3    50   Input ~ 0
D1
NoConn ~ 5200 6900
NoConn ~ 5300 6900
NoConn ~ 5400 6900
NoConn ~ 5500 6900
NoConn ~ 5600 6900
NoConn ~ 5800 6900
NoConn ~ 5900 6900
Text GLabel 6000 6900 3    50   Input ~ 0
A11
Text GLabel 6100 6900 3    50   Input ~ 0
A14
NoConn ~ 6200 6900
Text GLabel 6300 6900 3    50   Input ~ 0
A10
NoConn ~ 6400 6900
NoConn ~ 6500 6900
NoConn ~ 6600 6900
Text GLabel 6700 7000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 6900 6700 7000
NoConn ~ 6800 6900
Text GLabel 6900 7000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 7000 6900 6900
NoConn ~ 7000 6900
NoConn ~ 7100 6900
Text GLabel 7200 7000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 7000 7200 6900
NoConn ~ 7300 6900
NoConn ~ 7400 6900
Text GLabel 7500 7000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 7000 7500 6900
NoConn ~ 7600 6900
NoConn ~ 7700 6900
NoConn ~ 7800 6900
$Comp
L power:+BATT #PWR015
U 1 1 5CF95528
P 7900 7000
F 0 "#PWR015" H 7900 6850 50  0001 C CNN
F 1 "+BATT" H 7915 7173 50  0000 C CNN
F 2 "" H 7900 7000 50  0001 C CNN
F 3 "" H 7900 7000 50  0001 C CNN
	1    7900 7000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 7000 7900 6900
NoConn ~ 8000 6900
Text GLabel 8100 7000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 7000 8100 6900
NoConn ~ 8200 6900
NoConn ~ 8300 6900
Text GLabel 8400 7000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 7000 8400 6900
NoConn ~ 8500 6900
NoConn ~ 8700 6900
Text GLabel 8800 7000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 7000 8800 6900
NoConn ~ 8900 6900
Text GLabel 9000 6900 3    50   Input ~ 0
A12
Text GLabel 9100 7100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 7100 9100 6900
NoConn ~ 9200 6900
Text GLabel 9300 6900 3    50   Input ~ 0
A15
Text GLabel 9400 6900 3    50   Input ~ 0
A13
NoConn ~ 9500 6900
Text GLabel 9600 6900 3    50   Input ~ 0
CLK
Text GLabel 9700 6900 3    50   Input ~ 0
A9
NoConn ~ 9800 6900
Text GLabel 9900 7100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 7250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 6900 3    50   Input ~ 0
RESB
Text GLabel 10250 7100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR016
U 1 1 5CF9554A
P 10600 7100
F 0 "#PWR016" H 10600 6850 50  0001 C CNN
F 1 "GND" H 10605 6927 50  0000 C CNN
F 2 "" H 10600 7100 50  0001 C CNN
F 3 "" H 10600 7100 50  0001 C CNN
	1    10600 7100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 7100 10600 7000
Wire Wire Line
	10600 7000 10500 7000
Wire Wire Line
	10500 7000 10500 6900
Wire Wire Line
	10500 7000 10400 7000
Wire Wire Line
	10400 7000 10400 6900
Connection ~ 10500 7000
Wire Wire Line
	10400 7000 10300 7000
Wire Wire Line
	10300 7000 10300 6900
Connection ~ 10400 7000
Wire Wire Line
	10250 7100 10200 7100
Wire Wire Line
	10200 7100 10200 6900
Wire Wire Line
	10050 7250 10000 7250
Wire Wire Line
	10000 6900 10000 7250
Wire Wire Line
	9900 6900 9900 7100
$Comp
L Connector:C96ABC J5
U 1 1 5CF99B7A
P 5800 7600
F 0 "J5" V 6117 7650 50  0000 C CNN
F 1 "C96ABC" V 6026 7650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 7650 50  0001 C CNN
F 3 " ~" H 5800 7650 50  0001 C CNN
	1    5800 7600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR017
U 1 1 5CF99B81
P 750 7700
F 0 "#PWR017" H 750 7550 50  0001 C CNN
F 1 "VCC" H 767 7873 50  0000 C CNN
F 2 "" H 750 7700 50  0001 C CNN
F 3 "" H 750 7700 50  0001 C CNN
	1    750  7700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  7700 750  8000
Wire Wire Line
	750  8000 1000 8000
Wire Wire Line
	1000 8000 1000 7900
Wire Wire Line
	1000 8000 1100 8000
Wire Wire Line
	1100 8000 1100 7900
Connection ~ 1000 8000
Wire Wire Line
	1100 8000 1200 8000
Wire Wire Line
	1200 8000 1200 7900
Connection ~ 1100 8000
Text GLabel 1300 7900 3    50   Input ~ 0
D5
NoConn ~ 1400 7900
Text GLabel 1500 7900 3    50   Input ~ 0
D0
Text GLabel 1600 7900 3    50   Input ~ 0
D6
NoConn ~ 1700 7900
Text GLabel 1800 7900 3    50   Input ~ 0
D7
Text GLabel 1900 7900 3    50   Input ~ 0
D3
NoConn ~ 2000 7900
Text GLabel 2100 7900 3    50   Input ~ 0
D2
Text GLabel 2200 7900 3    50   Input ~ 0
D4
NoConn ~ 2300 7900
Text GLabel 2400 7900 3    50   Input ~ 0
A0
Text GLabel 2500 7900 3    50   Input ~ 0
A2
NoConn ~ 2600 7900
Text GLabel 2700 7900 3    50   Input ~ 0
A3
Text GLabel 2800 7900 3    50   Input ~ 0
A4
NoConn ~ 2900 7900
Text GLabel 3000 7900 3    50   Input ~ 0
A1
Text GLabel 3100 7900 3    50   Input ~ 0
A5
NoConn ~ 3200 7900
Text GLabel 3300 7900 3    50   Input ~ 0
A8
Text GLabel 3400 7900 3    50   Input ~ 0
A6
NoConn ~ 3500 7900
Text GLabel 3600 7900 3    50   Input ~ 0
A7
Text GLabel 3700 8100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 8100 3700 7900
NoConn ~ 3800 7900
NoConn ~ 3900 7900
Text GLabel 4000 8000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 8000 4000 7900
NoConn ~ 4100 7900
NoConn ~ 4300 7900
NoConn ~ 4400 7900
$Comp
L power:+12V #PWR018
U 1 1 5CF99BB1
P 4600 7900
F 0 "#PWR018" H 4600 7750 50  0001 C CNN
F 1 "+12V" H 4615 8073 50  0000 C CNN
F 2 "" H 4600 7900 50  0001 C CNN
F 3 "" H 4600 7900 50  0001 C CNN
	1    4600 7900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 7900
NoConn ~ 4700 7900
NoConn ~ 4500 7900
NoConn ~ 4900 7900
NoConn ~ 5000 7900
Text GLabel 5100 7900 3    50   Input ~ 0
D1
NoConn ~ 5200 7900
NoConn ~ 5300 7900
NoConn ~ 5400 7900
NoConn ~ 5500 7900
NoConn ~ 5600 7900
NoConn ~ 5800 7900
NoConn ~ 5900 7900
Text GLabel 6000 7900 3    50   Input ~ 0
A11
Text GLabel 6100 7900 3    50   Input ~ 0
A14
NoConn ~ 6200 7900
Text GLabel 6300 7900 3    50   Input ~ 0
A10
NoConn ~ 6400 7900
NoConn ~ 6500 7900
NoConn ~ 6600 7900
Text GLabel 6700 8000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 7900 6700 8000
NoConn ~ 6800 7900
Text GLabel 6900 8000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 8000 6900 7900
NoConn ~ 7000 7900
NoConn ~ 7100 7900
Text GLabel 7200 8000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 8000 7200 7900
NoConn ~ 7300 7900
NoConn ~ 7400 7900
Text GLabel 7500 8000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 8000 7500 7900
NoConn ~ 7600 7900
NoConn ~ 7700 7900
NoConn ~ 7800 7900
$Comp
L power:+BATT #PWR019
U 1 1 5CF99BDB
P 7900 8000
F 0 "#PWR019" H 7900 7850 50  0001 C CNN
F 1 "+BATT" H 7915 8173 50  0000 C CNN
F 2 "" H 7900 8000 50  0001 C CNN
F 3 "" H 7900 8000 50  0001 C CNN
	1    7900 8000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 8000 7900 7900
NoConn ~ 8000 7900
Text GLabel 8100 8000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 8000 8100 7900
NoConn ~ 8200 7900
NoConn ~ 8300 7900
Text GLabel 8400 8000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 8000 8400 7900
NoConn ~ 8500 7900
NoConn ~ 8700 7900
Text GLabel 8800 8000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 8000 8800 7900
NoConn ~ 8900 7900
Text GLabel 9000 7900 3    50   Input ~ 0
A12
Text GLabel 9100 8100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 8100 9100 7900
NoConn ~ 9200 7900
Text GLabel 9300 7900 3    50   Input ~ 0
A15
Text GLabel 9400 7900 3    50   Input ~ 0
A13
NoConn ~ 9500 7900
Text GLabel 9600 7900 3    50   Input ~ 0
CLK
Text GLabel 9700 7900 3    50   Input ~ 0
A9
NoConn ~ 9800 7900
Text GLabel 9900 8100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 8250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 7900 3    50   Input ~ 0
RESB
Text GLabel 10250 8100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR020
U 1 1 5CF99BFD
P 10600 8100
F 0 "#PWR020" H 10600 7850 50  0001 C CNN
F 1 "GND" H 10605 7927 50  0000 C CNN
F 2 "" H 10600 8100 50  0001 C CNN
F 3 "" H 10600 8100 50  0001 C CNN
	1    10600 8100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 8100 10600 8000
Wire Wire Line
	10600 8000 10500 8000
Wire Wire Line
	10500 8000 10500 7900
Wire Wire Line
	10500 8000 10400 8000
Wire Wire Line
	10400 8000 10400 7900
Connection ~ 10500 8000
Wire Wire Line
	10400 8000 10300 8000
Wire Wire Line
	10300 8000 10300 7900
Connection ~ 10400 8000
Wire Wire Line
	10250 8100 10200 8100
Wire Wire Line
	10200 8100 10200 7900
Wire Wire Line
	10050 8250 10000 8250
Wire Wire Line
	10000 7900 10000 8250
Wire Wire Line
	9900 7900 9900 8100
$Comp
L Connector:C96ABC J6
U 1 1 5CFA0B57
P 5800 8600
F 0 "J6" V 6117 8650 50  0000 C CNN
F 1 "C96ABC" V 6026 8650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 8650 50  0001 C CNN
F 3 " ~" H 5800 8650 50  0001 C CNN
	1    5800 8600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR021
U 1 1 5CFA0B5E
P 750 8700
F 0 "#PWR021" H 750 8550 50  0001 C CNN
F 1 "VCC" H 767 8873 50  0000 C CNN
F 2 "" H 750 8700 50  0001 C CNN
F 3 "" H 750 8700 50  0001 C CNN
	1    750  8700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  8700 750  9000
Wire Wire Line
	750  9000 1000 9000
Wire Wire Line
	1000 9000 1000 8900
Wire Wire Line
	1000 9000 1100 9000
Wire Wire Line
	1100 9000 1100 8900
Connection ~ 1000 9000
Wire Wire Line
	1100 9000 1200 9000
Wire Wire Line
	1200 9000 1200 8900
Connection ~ 1100 9000
Text GLabel 1300 8900 3    50   Input ~ 0
D5
NoConn ~ 1400 8900
Text GLabel 1500 8900 3    50   Input ~ 0
D0
Text GLabel 1600 8900 3    50   Input ~ 0
D6
NoConn ~ 1700 8900
Text GLabel 1800 8900 3    50   Input ~ 0
D7
Text GLabel 1900 8900 3    50   Input ~ 0
D3
NoConn ~ 2000 8900
Text GLabel 2100 8900 3    50   Input ~ 0
D2
Text GLabel 2200 8900 3    50   Input ~ 0
D4
NoConn ~ 2300 8900
Text GLabel 2400 8900 3    50   Input ~ 0
A0
Text GLabel 2500 8900 3    50   Input ~ 0
A2
NoConn ~ 2600 8900
Text GLabel 2700 8900 3    50   Input ~ 0
A3
Text GLabel 2800 8900 3    50   Input ~ 0
A4
NoConn ~ 2900 8900
Text GLabel 3000 8900 3    50   Input ~ 0
A1
Text GLabel 3100 8900 3    50   Input ~ 0
A5
NoConn ~ 3200 8900
Text GLabel 3300 8900 3    50   Input ~ 0
A8
Text GLabel 3400 8900 3    50   Input ~ 0
A6
NoConn ~ 3500 8900
Text GLabel 3600 8900 3    50   Input ~ 0
A7
Text GLabel 3700 9100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 9100 3700 8900
NoConn ~ 3800 8900
NoConn ~ 3900 8900
Text GLabel 4000 9000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 9000 4000 8900
NoConn ~ 4100 8900
NoConn ~ 4300 8900
NoConn ~ 4400 8900
$Comp
L power:+12V #PWR022
U 1 1 5CFA0B8E
P 4600 8900
F 0 "#PWR022" H 4600 8750 50  0001 C CNN
F 1 "+12V" H 4615 9073 50  0000 C CNN
F 2 "" H 4600 8900 50  0001 C CNN
F 3 "" H 4600 8900 50  0001 C CNN
	1    4600 8900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 8900
NoConn ~ 4700 8900
NoConn ~ 4500 8900
NoConn ~ 4900 8900
NoConn ~ 5000 8900
Text GLabel 5100 8900 3    50   Input ~ 0
D1
NoConn ~ 5200 8900
NoConn ~ 5300 8900
NoConn ~ 5400 8900
NoConn ~ 5500 8900
NoConn ~ 5600 8900
NoConn ~ 5800 8900
NoConn ~ 5900 8900
Text GLabel 6000 8900 3    50   Input ~ 0
A11
Text GLabel 6100 8900 3    50   Input ~ 0
A14
NoConn ~ 6200 8900
Text GLabel 6300 8900 3    50   Input ~ 0
A10
NoConn ~ 6400 8900
NoConn ~ 6500 8900
NoConn ~ 6600 8900
Text GLabel 6700 9000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 8900 6700 9000
NoConn ~ 6800 8900
Text GLabel 6900 9000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 9000 6900 8900
NoConn ~ 7000 8900
NoConn ~ 7100 8900
Text GLabel 7200 9000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 9000 7200 8900
NoConn ~ 7300 8900
NoConn ~ 7400 8900
Text GLabel 7500 9000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 9000 7500 8900
NoConn ~ 7600 8900
NoConn ~ 7700 8900
NoConn ~ 7800 8900
$Comp
L power:+BATT #PWR023
U 1 1 5CFA0BB8
P 7900 9000
F 0 "#PWR023" H 7900 8850 50  0001 C CNN
F 1 "+BATT" H 7915 9173 50  0000 C CNN
F 2 "" H 7900 9000 50  0001 C CNN
F 3 "" H 7900 9000 50  0001 C CNN
	1    7900 9000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 9000 7900 8900
NoConn ~ 8000 8900
Text GLabel 8100 9000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 9000 8100 8900
NoConn ~ 8200 8900
NoConn ~ 8300 8900
Text GLabel 8400 9000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 9000 8400 8900
NoConn ~ 8500 8900
NoConn ~ 8700 8900
Text GLabel 8800 9000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 9000 8800 8900
NoConn ~ 8900 8900
Text GLabel 9000 8900 3    50   Input ~ 0
A12
Text GLabel 9100 9100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 9100 9100 8900
NoConn ~ 9200 8900
Text GLabel 9300 8900 3    50   Input ~ 0
A15
Text GLabel 9400 8900 3    50   Input ~ 0
A13
NoConn ~ 9500 8900
Text GLabel 9600 8900 3    50   Input ~ 0
CLK
Text GLabel 9700 8900 3    50   Input ~ 0
A9
NoConn ~ 9800 8900
Text GLabel 9900 9100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 9250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 8900 3    50   Input ~ 0
RESB
Text GLabel 10250 9100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR024
U 1 1 5CFA0BDA
P 10600 9100
F 0 "#PWR024" H 10600 8850 50  0001 C CNN
F 1 "GND" H 10605 8927 50  0000 C CNN
F 2 "" H 10600 9100 50  0001 C CNN
F 3 "" H 10600 9100 50  0001 C CNN
	1    10600 9100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 9100 10600 9000
Wire Wire Line
	10600 9000 10500 9000
Wire Wire Line
	10500 9000 10500 8900
Wire Wire Line
	10500 9000 10400 9000
Wire Wire Line
	10400 9000 10400 8900
Connection ~ 10500 9000
Wire Wire Line
	10400 9000 10300 9000
Wire Wire Line
	10300 9000 10300 8900
Connection ~ 10400 9000
Wire Wire Line
	10250 9100 10200 9100
Wire Wire Line
	10200 9100 10200 8900
Wire Wire Line
	10050 9250 10000 9250
Wire Wire Line
	10000 8900 10000 9250
Wire Wire Line
	9900 8900 9900 9100
$Comp
L Connector:C96ABC J7
U 1 1 5CFAADD3
P 5800 9600
F 0 "J7" V 6117 9650 50  0000 C CNN
F 1 "C96ABC" V 6026 9650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 9650 50  0001 C CNN
F 3 " ~" H 5800 9650 50  0001 C CNN
	1    5800 9600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR025
U 1 1 5CFAADDA
P 750 9700
F 0 "#PWR025" H 750 9550 50  0001 C CNN
F 1 "VCC" H 767 9873 50  0000 C CNN
F 2 "" H 750 9700 50  0001 C CNN
F 3 "" H 750 9700 50  0001 C CNN
	1    750  9700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  9700 750  10000
Wire Wire Line
	750  10000 1000 10000
Wire Wire Line
	1000 10000 1000 9900
Wire Wire Line
	1000 10000 1100 10000
Wire Wire Line
	1100 10000 1100 9900
Connection ~ 1000 10000
Wire Wire Line
	1100 10000 1200 10000
Wire Wire Line
	1200 10000 1200 9900
Connection ~ 1100 10000
Text GLabel 1300 9900 3    50   Input ~ 0
D5
NoConn ~ 1400 9900
Text GLabel 1500 9900 3    50   Input ~ 0
D0
Text GLabel 1600 9900 3    50   Input ~ 0
D6
NoConn ~ 1700 9900
Text GLabel 1800 9900 3    50   Input ~ 0
D7
Text GLabel 1900 9900 3    50   Input ~ 0
D3
NoConn ~ 2000 9900
Text GLabel 2100 9900 3    50   Input ~ 0
D2
Text GLabel 2200 9900 3    50   Input ~ 0
D4
NoConn ~ 2300 9900
Text GLabel 2400 9900 3    50   Input ~ 0
A0
Text GLabel 2500 9900 3    50   Input ~ 0
A2
NoConn ~ 2600 9900
Text GLabel 2700 9900 3    50   Input ~ 0
A3
Text GLabel 2800 9900 3    50   Input ~ 0
A4
NoConn ~ 2900 9900
Text GLabel 3000 9900 3    50   Input ~ 0
A1
Text GLabel 3100 9900 3    50   Input ~ 0
A5
NoConn ~ 3200 9900
Text GLabel 3300 9900 3    50   Input ~ 0
A8
Text GLabel 3400 9900 3    50   Input ~ 0
A6
NoConn ~ 3500 9900
Text GLabel 3600 9900 3    50   Input ~ 0
A7
Text GLabel 3700 10100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 10100 3700 9900
NoConn ~ 3800 9900
NoConn ~ 3900 9900
Text GLabel 4000 10000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 10000 4000 9900
NoConn ~ 4100 9900
NoConn ~ 4300 9900
NoConn ~ 4400 9900
$Comp
L power:+12V #PWR026
U 1 1 5CFAAE0A
P 4600 9900
F 0 "#PWR026" H 4600 9750 50  0001 C CNN
F 1 "+12V" H 4615 10073 50  0000 C CNN
F 2 "" H 4600 9900 50  0001 C CNN
F 3 "" H 4600 9900 50  0001 C CNN
	1    4600 9900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 9900
NoConn ~ 4700 9900
NoConn ~ 4500 9900
NoConn ~ 4900 9900
NoConn ~ 5000 9900
Text GLabel 5100 9900 3    50   Input ~ 0
D1
NoConn ~ 5200 9900
NoConn ~ 5300 9900
NoConn ~ 5400 9900
NoConn ~ 5500 9900
NoConn ~ 5600 9900
NoConn ~ 5800 9900
NoConn ~ 5900 9900
Text GLabel 6000 9900 3    50   Input ~ 0
A11
Text GLabel 6100 9900 3    50   Input ~ 0
A14
NoConn ~ 6200 9900
Text GLabel 6300 9900 3    50   Input ~ 0
A10
NoConn ~ 6400 9900
NoConn ~ 6500 9900
NoConn ~ 6600 9900
Text GLabel 6700 10000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 9900 6700 10000
NoConn ~ 6800 9900
Text GLabel 6900 10000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 10000 6900 9900
NoConn ~ 7000 9900
NoConn ~ 7100 9900
Text GLabel 7200 10000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 10000 7200 9900
NoConn ~ 7300 9900
NoConn ~ 7400 9900
Text GLabel 7500 10000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 10000 7500 9900
NoConn ~ 7600 9900
NoConn ~ 7700 9900
NoConn ~ 7800 9900
$Comp
L power:+BATT #PWR027
U 1 1 5CFAAE34
P 7900 10000
F 0 "#PWR027" H 7900 9850 50  0001 C CNN
F 1 "+BATT" H 7915 10173 50  0000 C CNN
F 2 "" H 7900 10000 50  0001 C CNN
F 3 "" H 7900 10000 50  0001 C CNN
	1    7900 10000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 10000 7900 9900
NoConn ~ 8000 9900
Text GLabel 8100 10000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 10000 8100 9900
NoConn ~ 8200 9900
NoConn ~ 8300 9900
Text GLabel 8400 10000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 10000 8400 9900
NoConn ~ 8500 9900
NoConn ~ 8700 9900
Text GLabel 8800 10000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 10000 8800 9900
NoConn ~ 8900 9900
Text GLabel 9000 9900 3    50   Input ~ 0
A12
Text GLabel 9100 10100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 10100 9100 9900
NoConn ~ 9200 9900
Text GLabel 9300 9900 3    50   Input ~ 0
A15
Text GLabel 9400 9900 3    50   Input ~ 0
A13
NoConn ~ 9500 9900
Text GLabel 9600 9900 3    50   Input ~ 0
CLK
Text GLabel 9700 9900 3    50   Input ~ 0
A9
NoConn ~ 9800 9900
Text GLabel 9900 10100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 10250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 9900 3    50   Input ~ 0
RESB
Text GLabel 10250 10100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR028
U 1 1 5CFAAE56
P 10600 10100
F 0 "#PWR028" H 10600 9850 50  0001 C CNN
F 1 "GND" H 10605 9927 50  0000 C CNN
F 2 "" H 10600 10100 50  0001 C CNN
F 3 "" H 10600 10100 50  0001 C CNN
	1    10600 10100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 10100 10600 10000
Wire Wire Line
	10600 10000 10500 10000
Wire Wire Line
	10500 10000 10500 9900
Wire Wire Line
	10500 10000 10400 10000
Wire Wire Line
	10400 10000 10400 9900
Connection ~ 10500 10000
Wire Wire Line
	10400 10000 10300 10000
Wire Wire Line
	10300 10000 10300 9900
Connection ~ 10400 10000
Wire Wire Line
	10250 10100 10200 10100
Wire Wire Line
	10200 10100 10200 9900
Wire Wire Line
	10050 10250 10000 10250
Wire Wire Line
	10000 9900 10000 10250
Wire Wire Line
	9900 9900 9900 10100
$Comp
L Connector:C96ABC J8
U 1 1 5CFB8C63
P 5800 10600
F 0 "J8" V 6117 10650 50  0000 C CNN
F 1 "C96ABC" V 6026 10650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 10650 50  0001 C CNN
F 3 " ~" H 5800 10650 50  0001 C CNN
	1    5800 10600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR029
U 1 1 5CFB8C6A
P 750 10700
F 0 "#PWR029" H 750 10550 50  0001 C CNN
F 1 "VCC" H 767 10873 50  0000 C CNN
F 2 "" H 750 10700 50  0001 C CNN
F 3 "" H 750 10700 50  0001 C CNN
	1    750  10700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  10700 750  11000
Wire Wire Line
	750  11000 1000 11000
Wire Wire Line
	1000 11000 1000 10900
Wire Wire Line
	1000 11000 1100 11000
Wire Wire Line
	1100 11000 1100 10900
Connection ~ 1000 11000
Wire Wire Line
	1100 11000 1200 11000
Wire Wire Line
	1200 11000 1200 10900
Connection ~ 1100 11000
Text GLabel 1300 10900 3    50   Input ~ 0
D5
NoConn ~ 1400 10900
Text GLabel 1500 10900 3    50   Input ~ 0
D0
Text GLabel 1600 10900 3    50   Input ~ 0
D6
NoConn ~ 1700 10900
Text GLabel 1800 10900 3    50   Input ~ 0
D7
Text GLabel 1900 10900 3    50   Input ~ 0
D3
NoConn ~ 2000 10900
Text GLabel 2100 10900 3    50   Input ~ 0
D2
Text GLabel 2200 10900 3    50   Input ~ 0
D4
NoConn ~ 2300 10900
Text GLabel 2400 10900 3    50   Input ~ 0
A0
Text GLabel 2500 10900 3    50   Input ~ 0
A2
NoConn ~ 2600 10900
Text GLabel 2700 10900 3    50   Input ~ 0
A3
Text GLabel 2800 10900 3    50   Input ~ 0
A4
NoConn ~ 2900 10900
Text GLabel 3000 10900 3    50   Input ~ 0
A1
Text GLabel 3100 10900 3    50   Input ~ 0
A5
NoConn ~ 3200 10900
Text GLabel 3300 10900 3    50   Input ~ 0
A8
Text GLabel 3400 10900 3    50   Input ~ 0
A6
NoConn ~ 3500 10900
Text GLabel 3600 10900 3    50   Input ~ 0
A7
Text GLabel 3700 11100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 11100 3700 10900
NoConn ~ 3800 10900
NoConn ~ 3900 10900
Text GLabel 4000 11000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 11000 4000 10900
NoConn ~ 4100 10900
NoConn ~ 4300 10900
NoConn ~ 4400 10900
$Comp
L power:+12V #PWR030
U 1 1 5CFB8C9A
P 4600 10900
F 0 "#PWR030" H 4600 10750 50  0001 C CNN
F 1 "+12V" H 4615 11073 50  0000 C CNN
F 2 "" H 4600 10900 50  0001 C CNN
F 3 "" H 4600 10900 50  0001 C CNN
	1    4600 10900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 10900
NoConn ~ 4700 10900
NoConn ~ 4500 10900
NoConn ~ 4900 10900
NoConn ~ 5000 10900
Text GLabel 5100 10900 3    50   Input ~ 0
D1
NoConn ~ 5200 10900
NoConn ~ 5300 10900
NoConn ~ 5400 10900
NoConn ~ 5500 10900
NoConn ~ 5600 10900
NoConn ~ 5800 10900
NoConn ~ 5900 10900
Text GLabel 6000 10900 3    50   Input ~ 0
A11
Text GLabel 6100 10900 3    50   Input ~ 0
A14
NoConn ~ 6200 10900
Text GLabel 6300 10900 3    50   Input ~ 0
A10
NoConn ~ 6400 10900
NoConn ~ 6500 10900
NoConn ~ 6600 10900
Text GLabel 6700 11000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 10900 6700 11000
NoConn ~ 6800 10900
Text GLabel 6900 11000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 11000 6900 10900
NoConn ~ 7000 10900
NoConn ~ 7100 10900
Text GLabel 7200 11000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 11000 7200 10900
NoConn ~ 7300 10900
NoConn ~ 7400 10900
Text GLabel 7500 11000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 11000 7500 10900
NoConn ~ 7600 10900
NoConn ~ 7700 10900
NoConn ~ 7800 10900
$Comp
L power:+BATT #PWR031
U 1 1 5CFB8CC4
P 7900 11000
F 0 "#PWR031" H 7900 10850 50  0001 C CNN
F 1 "+BATT" H 7915 11173 50  0000 C CNN
F 2 "" H 7900 11000 50  0001 C CNN
F 3 "" H 7900 11000 50  0001 C CNN
	1    7900 11000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 11000 7900 10900
NoConn ~ 8000 10900
Text GLabel 8100 11000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 11000 8100 10900
NoConn ~ 8200 10900
NoConn ~ 8300 10900
Text GLabel 8400 11000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 11000 8400 10900
NoConn ~ 8500 10900
NoConn ~ 8700 10900
Text GLabel 8800 11000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 11000 8800 10900
NoConn ~ 8900 10900
Text GLabel 9000 10900 3    50   Input ~ 0
A12
Text GLabel 9100 11100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 11100 9100 10900
NoConn ~ 9200 10900
Text GLabel 9300 10900 3    50   Input ~ 0
A15
Text GLabel 9400 10900 3    50   Input ~ 0
A13
NoConn ~ 9500 10900
Text GLabel 9600 10900 3    50   Input ~ 0
CLK
Text GLabel 9700 10900 3    50   Input ~ 0
A9
NoConn ~ 9800 10900
Text GLabel 9900 11100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 11250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 10900 3    50   Input ~ 0
RESB
Text GLabel 10250 11100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR032
U 1 1 5CFB8CE6
P 10600 11100
F 0 "#PWR032" H 10600 10850 50  0001 C CNN
F 1 "GND" H 10605 10927 50  0000 C CNN
F 2 "" H 10600 11100 50  0001 C CNN
F 3 "" H 10600 11100 50  0001 C CNN
	1    10600 11100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 11100 10600 11000
Wire Wire Line
	10600 11000 10500 11000
Wire Wire Line
	10500 11000 10500 10900
Wire Wire Line
	10500 11000 10400 11000
Wire Wire Line
	10400 11000 10400 10900
Connection ~ 10500 11000
Wire Wire Line
	10400 11000 10300 11000
Wire Wire Line
	10300 11000 10300 10900
Connection ~ 10400 11000
Wire Wire Line
	10250 11100 10200 11100
Wire Wire Line
	10200 11100 10200 10900
Wire Wire Line
	10050 11250 10000 11250
Wire Wire Line
	10000 10900 10000 11250
Wire Wire Line
	9900 10900 9900 11100
$Comp
L Connector:C96ABC J9
U 1 1 5CFCB08D
P 5800 11600
F 0 "J9" V 6117 11650 50  0000 C CNN
F 1 "C96ABC" V 6026 11650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 11650 50  0001 C CNN
F 3 " ~" H 5800 11650 50  0001 C CNN
	1    5800 11600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR033
U 1 1 5CFCB094
P 750 11700
F 0 "#PWR033" H 750 11550 50  0001 C CNN
F 1 "VCC" H 767 11873 50  0000 C CNN
F 2 "" H 750 11700 50  0001 C CNN
F 3 "" H 750 11700 50  0001 C CNN
	1    750  11700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  11700 750  12000
Wire Wire Line
	750  12000 1000 12000
Wire Wire Line
	1000 12000 1000 11900
Wire Wire Line
	1000 12000 1100 12000
Wire Wire Line
	1100 12000 1100 11900
Connection ~ 1000 12000
Wire Wire Line
	1100 12000 1200 12000
Wire Wire Line
	1200 12000 1200 11900
Connection ~ 1100 12000
Text GLabel 1300 11900 3    50   Input ~ 0
D5
NoConn ~ 1400 11900
Text GLabel 1500 11900 3    50   Input ~ 0
D0
Text GLabel 1600 11900 3    50   Input ~ 0
D6
NoConn ~ 1700 11900
Text GLabel 1800 11900 3    50   Input ~ 0
D7
Text GLabel 1900 11900 3    50   Input ~ 0
D3
NoConn ~ 2000 11900
Text GLabel 2100 11900 3    50   Input ~ 0
D2
Text GLabel 2200 11900 3    50   Input ~ 0
D4
NoConn ~ 2300 11900
Text GLabel 2400 11900 3    50   Input ~ 0
A0
Text GLabel 2500 11900 3    50   Input ~ 0
A2
NoConn ~ 2600 11900
Text GLabel 2700 11900 3    50   Input ~ 0
A3
Text GLabel 2800 11900 3    50   Input ~ 0
A4
NoConn ~ 2900 11900
Text GLabel 3000 11900 3    50   Input ~ 0
A1
Text GLabel 3100 11900 3    50   Input ~ 0
A5
NoConn ~ 3200 11900
Text GLabel 3300 11900 3    50   Input ~ 0
A8
Text GLabel 3400 11900 3    50   Input ~ 0
A6
NoConn ~ 3500 11900
Text GLabel 3600 11900 3    50   Input ~ 0
A7
Text GLabel 3700 12100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 12100 3700 11900
NoConn ~ 3800 11900
NoConn ~ 3900 11900
Text GLabel 4000 12000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 12000 4000 11900
NoConn ~ 4100 11900
NoConn ~ 4300 11900
NoConn ~ 4400 11900
$Comp
L power:+12V #PWR034
U 1 1 5CFCB0C4
P 4600 11900
F 0 "#PWR034" H 4600 11750 50  0001 C CNN
F 1 "+12V" H 4615 12073 50  0000 C CNN
F 2 "" H 4600 11900 50  0001 C CNN
F 3 "" H 4600 11900 50  0001 C CNN
	1    4600 11900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 11900
NoConn ~ 4700 11900
NoConn ~ 4500 11900
NoConn ~ 4900 11900
NoConn ~ 5000 11900
Text GLabel 5100 11900 3    50   Input ~ 0
D1
NoConn ~ 5200 11900
NoConn ~ 5300 11900
NoConn ~ 5400 11900
NoConn ~ 5500 11900
NoConn ~ 5600 11900
NoConn ~ 5800 11900
NoConn ~ 5900 11900
Text GLabel 6000 11900 3    50   Input ~ 0
A11
Text GLabel 6100 11900 3    50   Input ~ 0
A14
NoConn ~ 6200 11900
Text GLabel 6300 11900 3    50   Input ~ 0
A10
NoConn ~ 6400 11900
NoConn ~ 6500 11900
NoConn ~ 6600 11900
Text GLabel 6700 12000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 11900 6700 12000
NoConn ~ 6800 11900
Text GLabel 6900 12000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 12000 6900 11900
NoConn ~ 7000 11900
NoConn ~ 7100 11900
Text GLabel 7200 12000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 12000 7200 11900
NoConn ~ 7300 11900
NoConn ~ 7400 11900
Text GLabel 7500 12000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 12000 7500 11900
NoConn ~ 7600 11900
NoConn ~ 7700 11900
NoConn ~ 7800 11900
$Comp
L power:+BATT #PWR035
U 1 1 5CFCB0EE
P 7900 12000
F 0 "#PWR035" H 7900 11850 50  0001 C CNN
F 1 "+BATT" H 7915 12173 50  0000 C CNN
F 2 "" H 7900 12000 50  0001 C CNN
F 3 "" H 7900 12000 50  0001 C CNN
	1    7900 12000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 12000 7900 11900
NoConn ~ 8000 11900
Text GLabel 8100 12000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 12000 8100 11900
NoConn ~ 8200 11900
NoConn ~ 8300 11900
Text GLabel 8400 12000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 12000 8400 11900
NoConn ~ 8500 11900
NoConn ~ 8700 11900
Text GLabel 8800 12000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 12000 8800 11900
NoConn ~ 8900 11900
Text GLabel 9000 11900 3    50   Input ~ 0
A12
Text GLabel 9100 12100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 12100 9100 11900
NoConn ~ 9200 11900
Text GLabel 9300 11900 3    50   Input ~ 0
A15
Text GLabel 9400 11900 3    50   Input ~ 0
A13
NoConn ~ 9500 11900
Text GLabel 9600 11900 3    50   Input ~ 0
CLK
Text GLabel 9700 11900 3    50   Input ~ 0
A9
NoConn ~ 9800 11900
Text GLabel 9900 12100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 12250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 11900 3    50   Input ~ 0
RESB
Text GLabel 10250 12100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR036
U 1 1 5CFCB110
P 10600 12100
F 0 "#PWR036" H 10600 11850 50  0001 C CNN
F 1 "GND" H 10605 11927 50  0000 C CNN
F 2 "" H 10600 12100 50  0001 C CNN
F 3 "" H 10600 12100 50  0001 C CNN
	1    10600 12100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 12100 10600 12000
Wire Wire Line
	10600 12000 10500 12000
Wire Wire Line
	10500 12000 10500 11900
Wire Wire Line
	10500 12000 10400 12000
Wire Wire Line
	10400 12000 10400 11900
Connection ~ 10500 12000
Wire Wire Line
	10400 12000 10300 12000
Wire Wire Line
	10300 12000 10300 11900
Connection ~ 10400 12000
Wire Wire Line
	10250 12100 10200 12100
Wire Wire Line
	10200 12100 10200 11900
Wire Wire Line
	10050 12250 10000 12250
Wire Wire Line
	10000 11900 10000 12250
Wire Wire Line
	9900 11900 9900 12100
$Comp
L Connector:C96ABC J10
U 1 1 5CFE23AE
P 5800 12600
F 0 "J10" V 6117 12650 50  0000 C CNN
F 1 "C96ABC" V 6026 12650 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Female-96Pin-3rows" H 5800 12650 50  0001 C CNN
F 3 " ~" H 5800 12650 50  0001 C CNN
	1    5800 12600
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR037
U 1 1 5CFE23B5
P 750 12700
F 0 "#PWR037" H 750 12550 50  0001 C CNN
F 1 "VCC" H 767 12873 50  0000 C CNN
F 2 "" H 750 12700 50  0001 C CNN
F 3 "" H 750 12700 50  0001 C CNN
	1    750  12700
	1    0    0    -1  
$EndComp
Wire Wire Line
	750  12700 750  13000
Wire Wire Line
	750  13000 1000 13000
Wire Wire Line
	1000 13000 1000 12900
Wire Wire Line
	1000 13000 1100 13000
Wire Wire Line
	1100 13000 1100 12900
Connection ~ 1000 13000
Wire Wire Line
	1100 13000 1200 13000
Wire Wire Line
	1200 13000 1200 12900
Connection ~ 1100 13000
Text GLabel 1300 12900 3    50   Input ~ 0
D5
NoConn ~ 1400 12900
Text GLabel 1500 12900 3    50   Input ~ 0
D0
Text GLabel 1600 12900 3    50   Input ~ 0
D6
NoConn ~ 1700 12900
Text GLabel 1800 12900 3    50   Input ~ 0
D7
Text GLabel 1900 12900 3    50   Input ~ 0
D3
NoConn ~ 2000 12900
Text GLabel 2100 12900 3    50   Input ~ 0
D2
Text GLabel 2200 12900 3    50   Input ~ 0
D4
NoConn ~ 2300 12900
Text GLabel 2400 12900 3    50   Input ~ 0
A0
Text GLabel 2500 12900 3    50   Input ~ 0
A2
NoConn ~ 2600 12900
Text GLabel 2700 12900 3    50   Input ~ 0
A3
Text GLabel 2800 12900 3    50   Input ~ 0
A4
NoConn ~ 2900 12900
Text GLabel 3000 12900 3    50   Input ~ 0
A1
Text GLabel 3100 12900 3    50   Input ~ 0
A5
NoConn ~ 3200 12900
Text GLabel 3300 12900 3    50   Input ~ 0
A8
Text GLabel 3400 12900 3    50   Input ~ 0
A6
NoConn ~ 3500 12900
Text GLabel 3600 12900 3    50   Input ~ 0
A7
Text GLabel 3700 13100 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3700 13100 3700 12900
NoConn ~ 3800 12900
NoConn ~ 3900 12900
Text GLabel 4000 13000 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4000 13000 4000 12900
NoConn ~ 4100 12900
NoConn ~ 4300 12900
NoConn ~ 4400 12900
$Comp
L power:+12V #PWR038
U 1 1 5CFE23E5
P 4600 12900
F 0 "#PWR038" H 4600 12750 50  0001 C CNN
F 1 "+12V" H 4615 13073 50  0000 C CNN
F 2 "" H 4600 12900 50  0001 C CNN
F 3 "" H 4600 12900 50  0001 C CNN
	1    4600 12900
	-1   0    0    1   
$EndComp
NoConn ~ 4800 12900
NoConn ~ 4700 12900
NoConn ~ 4500 12900
NoConn ~ 4900 12900
NoConn ~ 5000 12900
Text GLabel 5100 12900 3    50   Input ~ 0
D1
NoConn ~ 5200 12900
NoConn ~ 5300 12900
NoConn ~ 5400 12900
NoConn ~ 5500 12900
NoConn ~ 5600 12900
NoConn ~ 5800 12900
NoConn ~ 5900 12900
Text GLabel 6000 12900 3    50   Input ~ 0
A11
Text GLabel 6100 12900 3    50   Input ~ 0
A14
NoConn ~ 6200 12900
Text GLabel 6300 12900 3    50   Input ~ 0
A10
NoConn ~ 6400 12900
NoConn ~ 6500 12900
NoConn ~ 6600 12900
Text GLabel 6700 13000 3    50   Input ~ 0
~M1
Wire Wire Line
	6700 12900 6700 13000
NoConn ~ 6800 12900
Text GLabel 6900 13000 3    50   Input ~ 0
~NMI
Wire Wire Line
	6900 13000 6900 12900
NoConn ~ 7000 12900
NoConn ~ 7100 12900
Text GLabel 7200 13000 3    50   Input ~ 0
~INT
Wire Wire Line
	7200 13000 7200 12900
NoConn ~ 7300 12900
NoConn ~ 7400 12900
Text GLabel 7500 13000 3    50   Input ~ 0
~WR
Wire Wire Line
	7500 13000 7500 12900
NoConn ~ 7600 12900
NoConn ~ 7700 12900
NoConn ~ 7800 12900
$Comp
L power:+BATT #PWR039
U 1 1 5CFE240F
P 7900 13000
F 0 "#PWR039" H 7900 12850 50  0001 C CNN
F 1 "+BATT" H 7915 13173 50  0000 C CNN
F 2 "" H 7900 13000 50  0001 C CNN
F 3 "" H 7900 13000 50  0001 C CNN
	1    7900 13000
	-1   0    0    1   
$EndComp
Wire Wire Line
	7900 13000 7900 12900
NoConn ~ 8000 12900
Text GLabel 8100 13000 3    50   Input ~ 0
~RD
Wire Wire Line
	8100 13000 8100 12900
NoConn ~ 8200 12900
NoConn ~ 8300 12900
Text GLabel 8400 13000 3    50   Input ~ 0
~HALT
Wire Wire Line
	8400 13000 8400 12900
NoConn ~ 8500 12900
NoConn ~ 8700 12900
Text GLabel 8800 13000 3    50   Input ~ 0
~IORQ
Wire Wire Line
	8800 13000 8800 12900
NoConn ~ 8900 12900
Text GLabel 9000 12900 3    50   Input ~ 0
A12
Text GLabel 9100 13100 3    50   Input ~ 0
~RFSH
Wire Wire Line
	9100 13100 9100 12900
NoConn ~ 9200 12900
Text GLabel 9300 12900 3    50   Input ~ 0
A15
Text GLabel 9400 12900 3    50   Input ~ 0
A13
NoConn ~ 9500 12900
Text GLabel 9600 12900 3    50   Input ~ 0
CLK
Text GLabel 9700 12900 3    50   Input ~ 0
A9
NoConn ~ 9800 12900
Text GLabel 9900 13100 3    50   Input ~ 0
~MREQ
Text GLabel 10050 13250 2    50   Input ~ 0
~BUSAK
Text GLabel 10100 12900 3    50   Input ~ 0
RESB
Text GLabel 10250 13100 2    50   Input ~ 0
~RESET
$Comp
L power:GND #PWR040
U 1 1 5CFE2431
P 10600 13100
F 0 "#PWR040" H 10600 12850 50  0001 C CNN
F 1 "GND" H 10605 12927 50  0000 C CNN
F 2 "" H 10600 13100 50  0001 C CNN
F 3 "" H 10600 13100 50  0001 C CNN
	1    10600 13100
	1    0    0    -1  
$EndComp
Wire Wire Line
	10600 13100 10600 13000
Wire Wire Line
	10600 13000 10500 13000
Wire Wire Line
	10500 13000 10500 12900
Wire Wire Line
	10500 13000 10400 13000
Wire Wire Line
	10400 13000 10400 12900
Connection ~ 10500 13000
Wire Wire Line
	10400 13000 10300 13000
Wire Wire Line
	10300 13000 10300 12900
Connection ~ 10400 13000
Wire Wire Line
	10250 13100 10200 13100
Wire Wire Line
	10200 13100 10200 12900
Wire Wire Line
	10050 13250 10000 13250
Wire Wire Line
	10000 12900 10000 13250
Wire Wire Line
	9900 12900 9900 13100
Text GLabel 3700 13100 3    50   Input ~ 0
~WAIT
Text GLabel 4000 13000 3    50   Input ~ 0
~BUSRQ
Text GLabel 9100 13100 3    50   Input ~ 0
~RFSH
Text GLabel 9900 13100 3    50   Input ~ 0
~MREQ
Wire Wire Line
	5850 14500 5850 14300
Text GLabel 5950 14000 1    50   Input ~ 0
~RESET
Text GLabel 5450 14500 1    50   Input ~ 0
RESB
Text GLabel 5950 15200 3    50   Input ~ 0
~BUSAK
Text GLabel 5850 14300 1    50   Input ~ 0
~MREQ
Text GLabel 5850 15000 3    50   Input ~ 0
A9
Text GLabel 5750 14500 1    50   Input ~ 0
CLK
Text GLabel 5750 15000 3    50   Input ~ 0
A13
Text GLabel 5650 14500 1    50   Input ~ 0
A15
Text GLabel 5650 15400 3    50   Input ~ 0
~RFSH
Text GLabel 5550 14500 1    50   Input ~ 0
A12
Wire Wire Line
	5550 15100 5550 15000
Text GLabel 5550 15100 3    50   Input ~ 0
~IORQ
Wire Wire Line
	5350 14200 5350 14500
Text GLabel 5350 14200 1    50   Input ~ 0
~HALT
Wire Wire Line
	5250 14400 5250 14500
Text GLabel 5250 14400 1    50   Input ~ 0
~RD
Wire Wire Line
	5250 15100 5250 15000
$Comp
L power:+BATT #PWR047
U 1 1 5D1B743C
P 5250 15100
F 0 "#PWR047" H 5250 14950 50  0001 C CNN
F 1 "+BATT" H 5265 15273 50  0000 C CNN
F 2 "" H 5250 15100 50  0001 C CNN
F 3 "" H 5250 15100 50  0001 C CNN
	1    5250 15100
	-1   0    0    1   
$EndComp
Wire Wire Line
	5050 14400 5050 14500
Text GLabel 5050 14400 1    50   Input ~ 0
~WR
Text GLabel 4950 14200 1    50   Input ~ 0
~INT
Wire Wire Line
	4850 14400 4850 14500
Text GLabel 4850 14400 1    50   Input ~ 0
~NMI
Wire Wire Line
	4850 15000 4850 15100
Text GLabel 4850 15100 3    50   Input ~ 0
~M1
Text GLabel 4650 14500 1    50   Input ~ 0
A10
Text GLabel 4650 15000 3    50   Input ~ 0
A14
Text GLabel 4550 14500 1    50   Input ~ 0
A11
Text GLabel 4350 14500 1    50   Input ~ 0
D1
$Comp
L power:+12V #PWR046
U 1 1 5D1B7412
P 4250 15000
F 0 "#PWR046" H 4250 14850 50  0001 C CNN
F 1 "+12V" H 4265 15173 50  0000 C CNN
F 2 "" H 4250 15000 50  0001 C CNN
F 3 "" H 4250 15000 50  0001 C CNN
	1    4250 15000
	-1   0    0    1   
$EndComp
Text GLabel 4150 15500 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4050 15200 4050 15000
Text GLabel 4050 15200 3    50   Input ~ 0
~WAIT
Text GLabel 3950 14500 1    50   Input ~ 0
A7
Text GLabel 3950 15000 3    50   Input ~ 0
A6
Text GLabel 3850 14500 1    50   Input ~ 0
A8
Text GLabel 3850 15000 3    50   Input ~ 0
A5
Text GLabel 3750 14500 1    50   Input ~ 0
A1
Text GLabel 3750 15000 3    50   Input ~ 0
A4
Text GLabel 3650 14500 1    50   Input ~ 0
A3
Text GLabel 3650 15000 3    50   Input ~ 0
A2
Text GLabel 3550 14500 1    50   Input ~ 0
A0
Text GLabel 3550 15000 3    50   Input ~ 0
D4
Text GLabel 3450 14500 1    50   Input ~ 0
D2
Text GLabel 3450 15000 3    50   Input ~ 0
D3
Text GLabel 3350 14500 1    50   Input ~ 0
D7
Text GLabel 3350 15000 3    50   Input ~ 0
D6
Text GLabel 3250 14500 1    50   Input ~ 0
D0
Text GLabel 3250 15000 3    50   Input ~ 0
D5
Wire Wire Line
	4150 15000 4150 15500
NoConn ~ 4350 15000
NoConn ~ 4450 15000
NoConn ~ 4450 14500
NoConn ~ 4550 15000
NoConn ~ 4750 15000
NoConn ~ 4750 14500
NoConn ~ 4950 15000
Wire Wire Line
	4950 14200 4950 14500
NoConn ~ 5050 15000
NoConn ~ 5150 15000
NoConn ~ 5150 14500
NoConn ~ 5350 15000
Wire Wire Line
	5650 15000 5650 15400
Wire Wire Line
	5950 15200 5950 15000
Wire Wire Line
	5950 14000 5950 14500
$Comp
L power:GND #PWR0101
U 1 1 5E620A51
P 6250 15200
F 0 "#PWR0101" H 6250 14950 50  0001 C CNN
F 1 "GND" H 6255 15027 50  0000 C CNN
F 2 "" H 6250 15200 50  0001 C CNN
F 3 "" H 6250 15200 50  0001 C CNN
	1    6250 15200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6250 15200 6250 15100
Wire Wire Line
	6250 15100 6150 15100
Wire Wire Line
	6050 15100 6050 15000
Wire Wire Line
	6150 15000 6150 15100
Connection ~ 6150 15100
Wire Wire Line
	6150 15100 6050 15100
Wire Wire Line
	6250 15100 6250 14400
Wire Wire Line
	6250 14400 6150 14400
Wire Wire Line
	6150 14400 6150 14500
Connection ~ 6250 15100
Wire Wire Line
	6050 14500 6050 14400
Wire Wire Line
	6050 14400 6150 14400
Connection ~ 6150 14400
Wire Wire Line
	3050 15000 3050 15100
Wire Wire Line
	3050 15100 2950 15100
Wire Wire Line
	2950 15100 2950 14400
Wire Wire Line
	3150 15000 3150 15100
Wire Wire Line
	3150 15100 3050 15100
Connection ~ 3050 15100
Wire Wire Line
	2950 14400 2950 14300
Connection ~ 2950 14400
$Comp
L power:VCC #PWR0102
U 1 1 5E7702F9
P 2950 14300
F 0 "#PWR0102" H 2950 14150 50  0001 C CNN
F 1 "VCC" H 2967 14473 50  0000 C CNN
F 2 "" H 2950 14300 50  0001 C CNN
F 3 "" H 2950 14300 50  0001 C CNN
	1    2950 14300
	1    0    0    -1  
$EndComp
Wire Wire Line
	2950 14400 3050 14400
Wire Wire Line
	3050 14400 3050 14500
Wire Wire Line
	3050 14400 3150 14400
Wire Wire Line
	3150 14400 3150 14500
Connection ~ 3050 14400
$Comp
L power:+12V #PWR0103
U 1 1 5E81F929
P 4250 14400
F 0 "#PWR0103" H 4250 14250 50  0001 C CNN
F 1 "+12V" H 4265 14573 50  0000 C CNN
F 2 "" H 4250 14400 50  0001 C CNN
F 3 "" H 4250 14400 50  0001 C CNN
	1    4250 14400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4250 14500 4250 14400
Wire Wire Line
	5900 1500 5900 1300
Text GLabel 6000 1000 1    50   Input ~ 0
~RESET
Text GLabel 5500 1500 1    50   Input ~ 0
RESB
Text GLabel 6000 2200 3    50   Input ~ 0
~BUSAK
Text GLabel 5900 1300 1    50   Input ~ 0
~MREQ
Text GLabel 5900 2000 3    50   Input ~ 0
A9
Text GLabel 5800 1500 1    50   Input ~ 0
CLK
Text GLabel 5800 2000 3    50   Input ~ 0
A13
Text GLabel 5700 1500 1    50   Input ~ 0
A15
Text GLabel 5700 2400 3    50   Input ~ 0
~RFSH
Text GLabel 5600 1500 1    50   Input ~ 0
A12
Wire Wire Line
	5600 2100 5600 2000
Text GLabel 5600 2100 3    50   Input ~ 0
~IORQ
Wire Wire Line
	5400 1200 5400 1500
Text GLabel 5400 1200 1    50   Input ~ 0
~HALT
Wire Wire Line
	5300 1400 5300 1500
Text GLabel 5300 1400 1    50   Input ~ 0
~RD
Wire Wire Line
	5300 2100 5300 2000
$Comp
L power:+BATT #PWR0104
U 1 1 5E9548B2
P 5300 2100
F 0 "#PWR0104" H 5300 1950 50  0001 C CNN
F 1 "+BATT" H 5315 2273 50  0000 C CNN
F 2 "" H 5300 2100 50  0001 C CNN
F 3 "" H 5300 2100 50  0001 C CNN
	1    5300 2100
	-1   0    0    1   
$EndComp
Wire Wire Line
	5100 1400 5100 1500
Text GLabel 5100 1400 1    50   Input ~ 0
~WR
Text GLabel 5000 1200 1    50   Input ~ 0
~INT
Wire Wire Line
	4900 1400 4900 1500
Text GLabel 4900 1400 1    50   Input ~ 0
~NMI
Wire Wire Line
	4900 2000 4900 2100
Text GLabel 4900 2100 3    50   Input ~ 0
~M1
Text GLabel 4700 1500 1    50   Input ~ 0
A10
Text GLabel 4700 2000 3    50   Input ~ 0
A14
Text GLabel 4600 1500 1    50   Input ~ 0
A11
Text GLabel 4400 1500 1    50   Input ~ 0
D1
$Comp
L power:+12V #PWR0105
U 1 1 5E9548C3
P 4300 2000
F 0 "#PWR0105" H 4300 1850 50  0001 C CNN
F 1 "+12V" H 4315 2173 50  0000 C CNN
F 2 "" H 4300 2000 50  0001 C CNN
F 3 "" H 4300 2000 50  0001 C CNN
	1    4300 2000
	-1   0    0    1   
$EndComp
Text GLabel 4200 2500 3    50   Input ~ 0
~BUSRQ
Wire Wire Line
	4100 2200 4100 2000
Text GLabel 4100 2200 3    50   Input ~ 0
~WAIT
Text GLabel 4000 1500 1    50   Input ~ 0
A7
Text GLabel 4000 2000 3    50   Input ~ 0
A6
Text GLabel 3900 1500 1    50   Input ~ 0
A8
Text GLabel 3900 2000 3    50   Input ~ 0
A5
Text GLabel 3800 1500 1    50   Input ~ 0
A1
Text GLabel 3800 2000 3    50   Input ~ 0
A4
Text GLabel 3700 1500 1    50   Input ~ 0
A3
Text GLabel 3700 2000 3    50   Input ~ 0
A2
Text GLabel 3600 1500 1    50   Input ~ 0
A0
Text GLabel 3600 2000 3    50   Input ~ 0
D4
Text GLabel 3500 1500 1    50   Input ~ 0
D2
Text GLabel 3500 2000 3    50   Input ~ 0
D3
Text GLabel 3400 1500 1    50   Input ~ 0
D7
Text GLabel 3400 2000 3    50   Input ~ 0
D6
Text GLabel 3300 1500 1    50   Input ~ 0
D0
Text GLabel 3300 2000 3    50   Input ~ 0
D5
Wire Wire Line
	4200 2000 4200 2500
NoConn ~ 4400 2000
NoConn ~ 4500 2000
NoConn ~ 4500 1500
NoConn ~ 4600 2000
NoConn ~ 4800 2000
NoConn ~ 4800 1500
NoConn ~ 5000 2000
Wire Wire Line
	5000 1200 5000 1500
NoConn ~ 5100 2000
NoConn ~ 5200 2000
NoConn ~ 5200 1500
NoConn ~ 5400 2000
Wire Wire Line
	5700 2000 5700 2400
Wire Wire Line
	6000 2200 6000 2000
Wire Wire Line
	6000 1000 6000 1500
$Comp
L power:GND #PWR0106
U 1 1 5E9548ED
P 6300 2200
F 0 "#PWR0106" H 6300 1950 50  0001 C CNN
F 1 "GND" H 6305 2027 50  0000 C CNN
F 2 "" H 6300 2200 50  0001 C CNN
F 3 "" H 6300 2200 50  0001 C CNN
	1    6300 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	6300 2200 6300 2100
Wire Wire Line
	6300 2100 6200 2100
Wire Wire Line
	6100 2100 6100 2000
$Comp
L Connector_Generic:Conn_02x32_Odd_Even J11
U 1 1 5E9548F6
P 4600 1800
F 0 "J11" V 4700 3450 50  0000 L CNN
F 1 "Conn_02x32_Odd_Even" V 4600 3450 50  0000 L CNN
F 2 "Connector_IDC:IDC-Header_2x32_P2.54mm_Vertical" H 4600 1800 50  0001 C CNN
F 3 "~" H 4600 1800 50  0001 C CNN
	1    4600 1800
	0    -1   -1   0   
$EndComp
Wire Wire Line
	6200 2000 6200 2100
Connection ~ 6200 2100
Wire Wire Line
	6200 2100 6100 2100
Wire Wire Line
	6300 2100 6300 1400
Wire Wire Line
	6300 1400 6200 1400
Wire Wire Line
	6200 1400 6200 1500
Connection ~ 6300 2100
Wire Wire Line
	6100 1500 6100 1400
Wire Wire Line
	6100 1400 6200 1400
Connection ~ 6200 1400
Wire Wire Line
	3100 2000 3100 2100
Wire Wire Line
	3100 2100 3000 2100
Wire Wire Line
	3000 2100 3000 1400
Wire Wire Line
	3200 2000 3200 2100
Wire Wire Line
	3200 2100 3100 2100
Connection ~ 3100 2100
Wire Wire Line
	3000 1400 3000 1300
Connection ~ 3000 1400
$Comp
L power:VCC #PWR0107
U 1 1 5E95490E
P 3000 1300
F 0 "#PWR0107" H 3000 1150 50  0001 C CNN
F 1 "VCC" H 3017 1473 50  0000 C CNN
F 2 "" H 3000 1300 50  0001 C CNN
F 3 "" H 3000 1300 50  0001 C CNN
	1    3000 1300
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 1400 3100 1400
Wire Wire Line
	3100 1400 3100 1500
Wire Wire Line
	3100 1400 3200 1400
Wire Wire Line
	3200 1400 3200 1500
Connection ~ 3100 1400
$Comp
L power:+12V #PWR0108
U 1 1 5E954919
P 4300 1400
F 0 "#PWR0108" H 4300 1250 50  0001 C CNN
F 1 "+12V" H 4315 1573 50  0000 C CNN
F 2 "" H 4300 1400 50  0001 C CNN
F 3 "" H 4300 1400 50  0001 C CNN
	1    4300 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4300 1500 4300 1400
Wire Wire Line
	4150 4250 5700 4250
Wire Wire Line
	5700 4250 5700 3900
$Comp
L Device:Jumper_NO_Small JP1
U 1 1 5EAA40DE
P 4150 4100
F 0 "JP1" V 4196 4052 50  0000 R CNN
F 1 "Jumper" V 4105 4052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 4100 50  0001 C CNN
F 3 "~" H 4150 4100 50  0001 C CNN
	1    4150 4100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 4200 4150 4250
Wire Wire Line
	4200 3900 4200 3950
Wire Wire Line
	4200 3950 4150 3950
Wire Wire Line
	4150 3950 4150 4000
Wire Wire Line
	4150 4250 4150 4950
Wire Wire Line
	4150 4950 4200 4950
Wire Wire Line
	4200 4950 4200 4900
Connection ~ 4150 4250
$Comp
L Device:Jumper_NO_Small JP2
U 1 1 5EC5D7C9
P 4150 5100
F 0 "JP2" V 4196 5052 50  0000 R CNN
F 1 "Jumper" V 4105 5052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 5100 50  0001 C CNN
F 3 "~" H 4150 5100 50  0001 C CNN
	1    4150 5100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 4950 4150 5000
Connection ~ 4150 4950
Wire Wire Line
	4150 5200 4150 5250
Wire Wire Line
	4150 5250 5700 5250
Wire Wire Line
	5700 5250 5700 4900
Wire Wire Line
	4150 5250 4150 5950
Wire Wire Line
	4150 5950 4200 5950
Wire Wire Line
	4200 5950 4200 5900
Connection ~ 4150 5250
$Comp
L Device:Jumper_NO_Small JP3
U 1 1 5ECF71AF
P 4150 6100
F 0 "JP3" V 4196 6052 50  0000 R CNN
F 1 "Jumper" V 4105 6052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 6100 50  0001 C CNN
F 3 "~" H 4150 6100 50  0001 C CNN
	1    4150 6100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 5950 4150 6000
Connection ~ 4150 5950
Wire Wire Line
	4150 6200 4150 6250
Wire Wire Line
	4150 6250 5700 6250
Wire Wire Line
	5700 6250 5700 5900
Wire Wire Line
	4150 6250 4150 6950
Wire Wire Line
	4150 6950 4200 6950
Wire Wire Line
	4200 6950 4200 6900
Connection ~ 4150 6250
$Comp
L Device:Jumper_NO_Small JP4
U 1 1 5ED968F5
P 4150 7100
F 0 "JP4" V 4196 7052 50  0000 R CNN
F 1 "Jumper" V 4105 7052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 7100 50  0001 C CNN
F 3 "~" H 4150 7100 50  0001 C CNN
	1    4150 7100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 6950 4150 7000
Connection ~ 4150 6950
Wire Wire Line
	4150 7200 4150 7250
Wire Wire Line
	4150 7250 5700 7250
Wire Wire Line
	5700 7250 5700 6900
Wire Wire Line
	4150 7250 4150 7950
Wire Wire Line
	4150 7950 4200 7950
Wire Wire Line
	4200 7950 4200 7900
Connection ~ 4150 7250
$Comp
L Device:Jumper_NO_Small JP5
U 1 1 5EE3BED1
P 4150 8100
F 0 "JP5" V 4196 8052 50  0000 R CNN
F 1 "Jumper" V 4105 8052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 8100 50  0001 C CNN
F 3 "~" H 4150 8100 50  0001 C CNN
	1    4150 8100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 7950 4150 8000
Connection ~ 4150 7950
Wire Wire Line
	4150 8200 4150 8250
Wire Wire Line
	4150 8250 5700 8250
Wire Wire Line
	5700 8250 5700 7900
Wire Wire Line
	4150 8950 4200 8950
Wire Wire Line
	4200 8950 4200 8900
Wire Wire Line
	4150 8250 4150 8950
Connection ~ 4150 8250
$Comp
L Device:Jumper_NO_Small JP6
U 1 1 5EEE7A2D
P 4150 9100
F 0 "JP6" V 4196 9052 50  0000 R CNN
F 1 "Jumper" V 4105 9052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 9100 50  0001 C CNN
F 3 "~" H 4150 9100 50  0001 C CNN
	1    4150 9100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 8950 4150 9000
Connection ~ 4150 8950
Wire Wire Line
	4150 9200 4150 9250
Wire Wire Line
	4150 9250 5700 9250
Wire Wire Line
	5700 9250 5700 8900
Wire Wire Line
	4150 9250 4150 9950
Wire Wire Line
	4150 9950 4200 9950
Wire Wire Line
	4200 9950 4200 9900
Connection ~ 4150 9250
$Comp
L Device:Jumper_NO_Small JP7
U 1 1 5EF990DE
P 4150 10100
F 0 "JP7" V 4196 10052 50  0000 R CNN
F 1 "Jumper" V 4105 10052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 10100 50  0001 C CNN
F 3 "~" H 4150 10100 50  0001 C CNN
	1    4150 10100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 9950 4150 10000
Connection ~ 4150 9950
Wire Wire Line
	4150 10200 4150 10250
Wire Wire Line
	4150 10250 5700 10250
Wire Wire Line
	5700 10250 5700 9900
Wire Wire Line
	4150 10250 4150 10950
Wire Wire Line
	4150 10950 4200 10950
Wire Wire Line
	4200 10950 4200 10900
Connection ~ 4150 10250
$Comp
L Device:Jumper_NO_Small JP8
U 1 1 5F050A05
P 4150 11100
F 0 "JP8" V 4196 11052 50  0000 R CNN
F 1 "Jumper" V 4105 11052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 11100 50  0001 C CNN
F 3 "~" H 4150 11100 50  0001 C CNN
	1    4150 11100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 10950 4150 11000
Connection ~ 4150 10950
Wire Wire Line
	4150 11200 4150 11250
Wire Wire Line
	4150 11250 5700 11250
Wire Wire Line
	5700 11250 5700 10900
Wire Wire Line
	4150 11250 4150 11950
Wire Wire Line
	4150 11950 4200 11950
Wire Wire Line
	4200 11950 4200 11900
Connection ~ 4150 11250
$Comp
L Device:Jumper_NO_Small JP9
U 1 1 5F10E6F9
P 4150 12100
F 0 "JP9" V 4196 12052 50  0000 R CNN
F 1 "Jumper" V 4105 12052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 12100 50  0001 C CNN
F 3 "~" H 4150 12100 50  0001 C CNN
	1    4150 12100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 11950 4150 12000
Connection ~ 4150 11950
Wire Wire Line
	4150 12200 4150 12250
Wire Wire Line
	4150 12250 5700 12250
Wire Wire Line
	5700 12250 5700 11900
Wire Wire Line
	4150 12250 4150 12950
Wire Wire Line
	4150 12950 4200 12950
Wire Wire Line
	4200 12950 4200 12900
Connection ~ 4150 12250
$Comp
L Device:Jumper_NO_Small JP10
U 1 1 5F1D28A8
P 4150 13100
F 0 "JP10" V 4196 13052 50  0000 R CNN
F 1 "Jumper" V 4105 13052 50  0000 R CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 13100 50  0001 C CNN
F 3 "~" H 4150 13100 50  0001 C CNN
	1    4150 13100
	0    -1   -1   0   
$EndComp
Wire Wire Line
	4150 12950 4150 13000
Connection ~ 4150 12950
Wire Wire Line
	4150 13200 4150 13250
Wire Wire Line
	4150 13250 5700 13250
Wire Wire Line
	5700 13250 5700 12900
Wire Wire Line
	4150 14500 4150 13250
Connection ~ 4150 13250
Wire Wire Line
	4200 1500 4200 1450
Wire Wire Line
	4200 1450 4150 1450
Connection ~ 4150 3950
Wire Wire Line
	4150 1450 4150 3950
$Comp
L power:VCC #PWR0109
U 1 1 5F6EC4E9
P 4100 1400
F 0 "#PWR0109" H 4100 1250 50  0001 C CNN
F 1 "VCC" H 4117 1573 50  0000 C CNN
F 2 "" H 4100 1400 50  0001 C CNN
F 3 "" H 4100 1400 50  0001 C CNN
	1    4100 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	4100 1400 4100 1500
Text GLabel 5500 2400 3    50   Input ~ 0
~ROB
Wire Wire Line
	5500 2400 5500 2000
Text GLabel 8600 4000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 3900 8600 4000
Text GLabel 5450 15400 3    50   Input ~ 0
~ROB
Wire Wire Line
	5450 15400 5450 15000
Text GLabel 8600 5000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 4900 8600 5000
Text GLabel 8600 6000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 5900 8600 6000
Text GLabel 8600 7000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 6900 8600 7000
Text GLabel 8600 8000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 7900 8600 8000
Text GLabel 8600 9000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 8900 8600 9000
Text GLabel 8600 10000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 9900 8600 10000
Text GLabel 8600 11000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 10900 8600 11000
Text GLabel 8600 12000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 11900 8600 12000
Text GLabel 8600 13000 3    50   Input ~ 0
~ROB
Wire Wire Line
	8600 12900 8600 13000
NoConn ~ 4050 14500
$Comp
L Connector_Generic:Conn_02x32_Odd_Even J12
U 1 1 5D98BDF3
P 4550 14800
F 0 "J12" V 4650 16450 50  0000 L CNN
F 1 "Conn_02x32_Odd_Even" V 4550 16450 50  0000 L CNN
F 2 "Connector_IDC:IDC-Header_2x32_P2.54mm_Vertical" H 4550 14800 50  0001 C CNN
F 3 "~" H 4550 14800 50  0001 C CNN
	1    4550 14800
	0    -1   -1   0   
$EndComp
$Comp
L Switch:SW_Push SW1
U 1 1 5D09A234
P 1850 13800
F 0 "SW1" H 1850 14085 50  0000 C CNN
F 1 "SW_Push" H 1850 13994 50  0000 C CNN
F 2 "Button_Switch_THT:SW_PUSH_6mm_H7.3mm" H 1850 14000 50  0001 C CNN
F 3 "" H 1850 14000 50  0001 C CNN
	1    1850 13800
	1    0    0    -1  
$EndComp
Text GLabel 2050 13800 2    50   Input ~ 0
RESB
$Comp
L power:VCC #PWR0110
U 1 1 5D596CB9
P 1550 13700
F 0 "#PWR0110" H 1550 13550 50  0001 C CNN
F 1 "VCC" H 1567 13873 50  0000 C CNN
F 2 "" H 1550 13700 50  0001 C CNN
F 3 "" H 1550 13700 50  0001 C CNN
	1    1550 13700
	1    0    0    -1  
$EndComp
Wire Wire Line
	1550 13700 1550 13800
Wire Wire Line
	1550 13800 1650 13800
$EndSCHEMATC
