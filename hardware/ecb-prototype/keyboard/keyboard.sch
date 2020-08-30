EESchema Schematic File Version 4
LIBS:keyboard-cache
EELAYER 29 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 3
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
L sio:Z84C40 U1
U 1 1 5D407985
P 6800 4400
F 0 "U1" H 6500 5850 50  0000 C CNN
F 1 "Z84C4010PEG" H 6550 5750 50  0000 C CNN
F 2 "Package_DIP:DIP-40_W15.24mm_Socket_LongPads" H 6800 5100 50  0001 C CNN
F 3 "" H 6800 5100 50  0001 C CNN
	1    6800 4400
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 5D407A2C
P 6800 5700
F 0 "#PWR0101" H 6800 5450 50  0001 C CNN
F 1 "GND" H 6805 5527 50  0000 C CNN
F 2 "" H 6800 5700 50  0001 C CNN
F 3 "" H 6800 5700 50  0001 C CNN
	1    6800 5700
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR0102
U 1 1 5D407AC1
P 6800 2700
F 0 "#PWR0102" H 6800 2550 50  0001 C CNN
F 1 "VCC" H 6817 2873 50  0000 C CNN
F 2 "" H 6800 2700 50  0001 C CNN
F 3 "" H 6800 2700 50  0001 C CNN
	1    6800 2700
	1    0    0    -1  
$EndComp
$Sheet
S 7950 3150 550  1150
U 5D41F4B4
F0 "ps2a" 50
F1 "ps2.sch" 50
F2 "~CLKIN" I L 7950 3400 50 
F3 "CLKOUT" I L 7950 4000 50 
F4 "~PWRON" I L 7950 4200 50 
F5 "DATAIN" I L 7950 3300 50 
F6 "DATAOUT" I L 7950 3200 50 
$EndSheet
Wire Wire Line
	7950 3400 7350 3400
Wire Wire Line
	7300 3500 7350 3500
Wire Wire Line
	7350 3500 7350 3400
Connection ~ 7350 3400
Wire Wire Line
	7350 3400 7300 3400
Wire Wire Line
	7950 3300 7400 3300
Wire Wire Line
	7950 3200 7300 3200
Wire Wire Line
	7950 4000 7300 4000
Wire Wire Line
	7300 4200 7950 4200
Wire Wire Line
	7300 4100 7350 4100
Wire Wire Line
	7350 4100 7350 3500
Connection ~ 7350 3500
Wire Wire Line
	7300 4300 7400 4300
Wire Wire Line
	7400 4300 7400 3300
Connection ~ 7400 3300
Wire Wire Line
	7400 3300 7300 3300
Wire Wire Line
	7300 3700 7500 3700
Wire Wire Line
	7500 3050 7500 3700
$Comp
L Device:R R7
U 1 1 5D42A1CA
P 7500 2900
F 0 "R7" V 7450 3050 50  0000 L CNN
F 1 "100k" V 7500 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 7430 2900 50  0001 C CNN
F 3 "~" H 7500 2900 50  0001 C CNN
	1    7500 2900
	1    0    0    -1  
$EndComp
$Sheet
S 7950 4450 550  1050
U 5D42A20B
F0 "ps2b" 50
F1 "ps2.sch" 50
F2 "~CLKIN" I L 7950 4700 50 
F3 "CLKOUT" I L 7950 5200 50 
F4 "~PWRON" I L 7950 5400 50 
F5 "DATAIN" I L 7950 4600 50 
F6 "DATAOUT" I L 7950 4500 50 
$EndSheet
Wire Wire Line
	7950 4500 7300 4500
Wire Wire Line
	7300 4600 7400 4600
Wire Wire Line
	7300 4700 7350 4700
Wire Wire Line
	7300 5200 7950 5200
Wire Wire Line
	7300 5400 7950 5400
Wire Wire Line
	7300 5300 7350 5300
Wire Wire Line
	7350 5300 7350 4700
Connection ~ 7350 4700
Wire Wire Line
	7350 4700 7950 4700
Wire Wire Line
	7300 5500 7400 5500
Wire Wire Line
	7400 5500 7400 4600
Connection ~ 7400 4600
Wire Wire Line
	7400 4600 7950 4600
Wire Wire Line
	7300 4900 7600 4900
Wire Wire Line
	7600 4900 7600 3050
$Comp
L Device:R R8
U 1 1 5D42BA9E
P 7600 2900
F 0 "R8" V 7550 3050 50  0000 L CNN
F 1 "100k" V 7600 2900 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 7530 2900 50  0001 C CNN
F 3 "~" H 7600 2900 50  0001 C CNN
	1    7600 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	7300 3800 7700 3800
$Comp
L Device:D_Small_ALT D1
U 1 1 5D42C029
P 7700 2900
F 0 "D1" H 7850 2950 50  0000 L CNN
F 1 "BAT46" H 7650 2850 50  0000 R CNN
F 2 "Diode_THT:D_DO-35_SOD27_P10.16mm_Horizontal" V 7700 2900 50  0001 C CNN
F 3 "~" V 7700 2900 50  0001 C CNN
	1    7700 2900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7700 3000 7700 3800
$Comp
L Device:D_Small_ALT D2
U 1 1 5D42C53B
P 7800 2900
F 0 "D2" H 7950 2950 50  0000 L CNN
F 1 "BAT46" H 7750 2850 50  0000 R CNN
F 2 "Diode_THT:D_DO-35_SOD27_P10.16mm_Horizontal" V 7800 2900 50  0001 C CNN
F 3 "~" V 7800 2900 50  0001 C CNN
	1    7800 2900
	0    -1   -1   0   
$EndComp
Wire Wire Line
	7700 2800 7700 2550
Wire Wire Line
	7700 2550 7750 2550
Wire Wire Line
	7800 2550 7800 2800
Wire Wire Line
	7600 2750 7600 2550
Wire Wire Line
	7600 2550 7550 2550
Wire Wire Line
	7500 2550 7500 2750
Wire Wire Line
	7800 3000 7800 5000
Wire Wire Line
	7800 5000 7300 5000
Wire Wire Line
	7550 2550 7550 2450
Connection ~ 7550 2550
Wire Wire Line
	7550 2550 7500 2550
$Comp
L power:VCC #PWR0103
U 1 1 5D42DC17
P 7550 2450
F 0 "#PWR0103" H 7550 2300 50  0001 C CNN
F 1 "VCC" H 7567 2623 50  0000 C CNN
F 2 "" H 7550 2450 50  0001 C CNN
F 3 "" H 7550 2450 50  0001 C CNN
	1    7550 2450
	1    0    0    -1  
$EndComp
Wire Wire Line
	7750 2550 7750 2450
Connection ~ 7750 2550
Wire Wire Line
	7750 2550 7800 2550
Text GLabel 7750 2450 1    50   Input ~ 0
~WAIT
Text GLabel 6300 3200 0    50   Input ~ 0
D0
Text GLabel 6300 3300 0    50   Input ~ 0
D1
Text GLabel 6300 3400 0    50   Input ~ 0
D2
Text GLabel 6300 3500 0    50   Input ~ 0
D3
Text GLabel 6300 3600 0    50   Input ~ 0
D4
Text GLabel 6300 3700 0    50   Input ~ 0
D5
Text GLabel 6300 3800 0    50   Input ~ 0
D6
Text GLabel 6300 3900 0    50   Input ~ 0
D7
Text GLabel 6300 4100 0    50   Input ~ 0
CLK
Text GLabel 6300 5100 0    50   Input ~ 0
IEI
Text GLabel 6300 5200 0    50   Input ~ 0
IEO
Text GLabel 6300 4900 0    50   Input ~ 0
A0
Text GLabel 6300 4800 0    50   Input ~ 0
A1
$Comp
L 74xx:74LS688 U2
U 1 1 5D42E706
P 5500 5600
F 0 "U2" H 5250 6650 50  0000 L CNN
F 1 "74AC688" V 5550 5600 50  0000 L CNN
F 2 "Package_DIP:DIP-20_W7.62mm_Socket_LongPads" H 5500 5600 50  0001 C CNN
F 3 "http://www.ti.com/lit/gpn/sn74LS688" H 5500 5600 50  0001 C CNN
	1    5500 5600
	1    0    0    -1  
$EndComp
Wire Wire Line
	6000 4700 6300 4700
Text GLabel 6100 4200 0    50   Input ~ 0
~RESET
Text GLabel 5800 4300 0    50   Input ~ 0
~M1
Text GLabel 6100 4400 0    50   Input ~ 0
~IORQ
Text GLabel 5800 4500 0    50   Input ~ 0
~RD
Wire Wire Line
	5800 4500 6300 4500
Wire Wire Line
	6300 4400 6100 4400
Wire Wire Line
	5800 4300 6300 4300
Wire Wire Line
	6300 4200 6100 4200
$Comp
L power:VCC #PWR0104
U 1 1 5D4327F6
P 5500 4200
F 0 "#PWR0104" H 5500 4050 50  0001 C CNN
F 1 "VCC" H 5517 4373 50  0000 C CNN
F 2 "" H 5500 4200 50  0001 C CNN
F 3 "" H 5500 4200 50  0001 C CNN
	1    5500 4200
	1    0    0    -1  
$EndComp
Text GLabel 6100 5300 0    50   Input ~ 0
~INT
Wire Wire Line
	6100 5300 6300 5300
$Comp
L power:GND #PWR0105
U 1 1 5D4335F9
P 5500 6800
F 0 "#PWR0105" H 5500 6550 50  0001 C CNN
F 1 "GND" H 5505 6627 50  0000 C CNN
F 2 "" H 5500 6800 50  0001 C CNN
F 3 "" H 5500 6800 50  0001 C CNN
	1    5500 6800
	1    0    0    -1  
$EndComp
Text GLabel 5000 4900 0    50   Input ~ 0
A2
Text GLabel 5000 5000 0    50   Input ~ 0
A3
Text GLabel 5000 5100 0    50   Input ~ 0
A4
Text GLabel 5000 5200 0    50   Input ~ 0
A5
Text GLabel 5000 5300 0    50   Input ~ 0
A6
Text GLabel 5000 5400 0    50   Input ~ 0
A7
$Comp
L Switch:SW_Coded_SH-7050 SW1
U 1 1 5D433888
P 3450 6100
F 0 "SW1" H 3505 6567 50  0000 C CNN
F 1 "SW_Coded_SH-7050" H 3505 6476 50  0000 C CNN
F 2 "Button_Switch_THT:Nidec_Copal_SH-7010C" H 3150 5650 50  0001 L CNN
F 3 "https://www.nidec-copal-electronics.com/e/catalog/switch/sh-7000.pdf" H 3450 6100 50  0001 C CNN
	1    3450 6100
	1    0    0    -1  
$EndComp
Wire Wire Line
	3850 6300 4050 6300
Wire Wire Line
	5000 6200 4150 6200
Wire Wire Line
	3850 6100 4250 6100
Wire Wire Line
	5000 6000 4350 6000
$Comp
L Device:Jumper_NO_Small JP2
U 1 1 5D436E4C
P 4150 5900
F 0 "JP2" H 4300 5950 50  0000 C CNN
F 1 "Jumper_NO_Small" H 4150 5994 50  0001 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 5900 50  0001 C CNN
F 3 "~" H 4150 5900 50  0001 C CNN
	1    4150 5900
	1    0    0    -1  
$EndComp
$Comp
L Device:Jumper_NO_Small JP1
U 1 1 5D436EE6
P 4150 5800
F 0 "JP1" H 4300 5850 50  0000 C CNN
F 1 "Jumper_NO_Small" H 4150 5894 50  0001 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x02_P2.54mm_Vertical" H 4150 5800 50  0001 C CNN
F 3 "~" H 4150 5800 50  0001 C CNN
	1    4150 5800
	1    0    0    -1  
$EndComp
$Comp
L Device:R R1
U 1 1 5D437036
P 4050 6650
F 0 "R1" V 4000 6800 50  0000 L CNN
F 1 "100k" V 4050 6650 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 3980 6650 50  0001 C CNN
F 3 "~" H 4050 6650 50  0001 C CNN
	1    4050 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R2
U 1 1 5D437122
P 4150 6650
F 0 "R2" V 4100 6800 50  0000 L CNN
F 1 "100k" V 4150 6650 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4080 6650 50  0001 C CNN
F 3 "~" H 4150 6650 50  0001 C CNN
	1    4150 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5D437148
P 4250 6650
F 0 "R3" V 4200 6800 50  0000 L CNN
F 1 "100k" V 4250 6650 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4180 6650 50  0001 C CNN
F 3 "~" H 4250 6650 50  0001 C CNN
	1    4250 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R4
U 1 1 5D437170
P 4350 6650
F 0 "R4" V 4300 6800 50  0000 L CNN
F 1 "100k" V 4350 6650 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4280 6650 50  0001 C CNN
F 3 "~" H 4350 6650 50  0001 C CNN
	1    4350 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R5
U 1 1 5D4371A2
P 4450 6650
F 0 "R5" V 4400 6800 50  0000 L CNN
F 1 "100k" V 4450 6650 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4380 6650 50  0001 C CNN
F 3 "~" H 4450 6650 50  0001 C CNN
	1    4450 6650
	1    0    0    -1  
$EndComp
$Comp
L Device:R R6
U 1 1 5D4371D6
P 4550 6650
F 0 "R6" V 4500 6800 50  0000 L CNN
F 1 "100k" V 4550 6650 50  0000 C CNN
F 2 "Resistor_THT:R_Axial_DIN0207_L6.3mm_D2.5mm_P10.16mm_Horizontal" V 4480 6650 50  0001 C CNN
F 3 "~" H 4550 6650 50  0001 C CNN
	1    4550 6650
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 6500 4050 6300
Connection ~ 4050 6300
Wire Wire Line
	4050 6300 5000 6300
Wire Wire Line
	4150 6500 4150 6200
Connection ~ 4150 6200
Wire Wire Line
	4150 6200 3850 6200
Wire Wire Line
	4250 6500 4250 6100
Connection ~ 4250 6100
Wire Wire Line
	4250 6100 5000 6100
Wire Wire Line
	4350 6500 4350 6000
Connection ~ 4350 6000
Wire Wire Line
	4350 6000 3850 6000
Wire Wire Line
	4450 6500 4450 5900
Wire Wire Line
	3850 5900 3950 5900
Wire Wire Line
	3950 5900 3950 5800
Connection ~ 3950 5900
Wire Wire Line
	3950 5900 4050 5900
$Comp
L power:VCC #PWR0106
U 1 1 5D43F2FA
P 3950 5700
F 0 "#PWR0106" H 3950 5550 50  0001 C CNN
F 1 "VCC" H 3967 5873 50  0000 C CNN
F 2 "" H 3950 5700 50  0001 C CNN
F 3 "" H 3950 5700 50  0001 C CNN
	1    3950 5700
	1    0    0    -1  
$EndComp
Wire Wire Line
	4050 5800 3950 5800
Connection ~ 3950 5800
Wire Wire Line
	3950 5800 3950 5700
Wire Wire Line
	4250 5900 4450 5900
Connection ~ 4450 5900
Wire Wire Line
	4450 5900 5000 5900
Wire Wire Line
	4250 5800 4550 5800
Wire Wire Line
	4550 5800 4550 6500
Connection ~ 4550 5800
Wire Wire Line
	4550 5800 5000 5800
Wire Wire Line
	5000 5700 4750 5700
Wire Wire Line
	4750 5700 4750 6500
Wire Wire Line
	4750 6500 5000 6500
Wire Wire Line
	4750 6500 4750 6900
Connection ~ 4750 6500
$Comp
L power:GND #PWR0107
U 1 1 5D44AE78
P 4750 7000
F 0 "#PWR0107" H 4750 6750 50  0001 C CNN
F 1 "GND" H 4755 6827 50  0000 C CNN
F 2 "" H 4750 7000 50  0001 C CNN
F 3 "" H 4750 7000 50  0001 C CNN
	1    4750 7000
	1    0    0    -1  
$EndComp
Wire Wire Line
	4750 6900 4550 6900
Wire Wire Line
	4550 6900 4550 6800
Connection ~ 4750 6900
Wire Wire Line
	4750 6900 4750 7000
Wire Wire Line
	4550 6900 4450 6900
Wire Wire Line
	4450 6900 4450 6800
Connection ~ 4550 6900
Wire Wire Line
	4450 6900 4350 6900
Wire Wire Line
	4350 6900 4350 6800
Connection ~ 4450 6900
Wire Wire Line
	4350 6900 4250 6900
Wire Wire Line
	4250 6900 4250 6800
Connection ~ 4350 6900
Wire Wire Line
	4150 6800 4150 6900
Wire Wire Line
	4150 6900 4250 6900
Connection ~ 4250 6900
Wire Wire Line
	4050 6800 4050 6900
Wire Wire Line
	4050 6900 4150 6900
Connection ~ 4150 6900
Wire Wire Line
	5000 5600 4750 5600
Wire Wire Line
	4750 5600 4750 5700
Connection ~ 4750 5700
Wire Wire Line
	4750 5600 4750 4800
Wire Wire Line
	4750 4800 5000 4800
Connection ~ 4750 5600
Wire Wire Line
	5000 4700 4750 4700
Wire Wire Line
	4750 4700 4750 4800
Connection ~ 4750 4800
$Comp
L Device:C_Small C1
U 1 1 5D46B0D2
P 7000 2850
F 0 "C1" V 6771 2850 50  0000 C CNN
F 1 "100nF" V 6862 2850 50  0000 C CNN
F 2 "Capacitor_THT:C_Rect_L7.2mm_W2.5mm_P5.00mm_FKS2_FKP2_MKS2_MKP2" H 7000 2850 50  0001 C CNN
F 3 "~" H 7000 2850 50  0001 C CNN
	1    7000 2850
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR0108
U 1 1 5D46B1D0
P 7200 2850
F 0 "#PWR0108" H 7200 2600 50  0001 C CNN
F 1 "GND" H 7205 2677 50  0000 C CNN
F 2 "" H 7200 2850 50  0001 C CNN
F 3 "" H 7200 2850 50  0001 C CNN
	1    7200 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	6800 2700 6800 2850
Wire Wire Line
	6800 2850 6900 2850
Connection ~ 6800 2850
Wire Wire Line
	6800 2850 6800 3000
Wire Wire Line
	7100 2850 7200 2850
$Comp
L power:GND #PWR0109
U 1 1 5D474537
P 5100 4400
F 0 "#PWR0109" H 5100 4150 50  0001 C CNN
F 1 "GND" H 5105 4227 50  0000 C CNN
F 2 "" H 5100 4400 50  0001 C CNN
F 3 "" H 5100 4400 50  0001 C CNN
	1    5100 4400
	1    0    0    -1  
$EndComp
$Comp
L Device:C_Small C2
U 1 1 5D474626
P 5300 4300
F 0 "C2" V 5071 4300 50  0000 C CNN
F 1 "100nF" V 5162 4300 50  0000 C CNN
F 2 "Capacitor_THT:C_Rect_L7.2mm_W2.5mm_P5.00mm_FKS2_FKP2_MKS2_MKP2" H 5300 4300 50  0001 C CNN
F 3 "~" H 5300 4300 50  0001 C CNN
	1    5300 4300
	0    1    1    0   
$EndComp
Wire Wire Line
	5100 4400 5100 4300
Wire Wire Line
	5100 4300 5200 4300
Wire Wire Line
	5400 4300 5500 4300
Wire Wire Line
	5500 4300 5500 4200
Wire Wire Line
	5500 4300 5500 4400
Connection ~ 5500 4300
$Comp
L Connector:C96ABC J3
U 1 1 5D450AF0
P 5850 1000
F 0 "J3" V 6167 1050 50  0000 C CNN
F 1 "C96ABC" V 6076 1050 50  0000 C CNN
F 2 "common:Socket_DIN41612-CaseC1-full-Male-96Pin-3rows" H 5850 1050 50  0001 C CNN
F 3 " ~" H 5850 1050 50  0001 C CNN
	1    5850 1000
	0    -1   -1   0   
$EndComp
$Comp
L power:VCC #PWR0130
U 1 1 5D481A2E
P 850 1200
F 0 "#PWR0130" H 850 1050 50  0001 C CNN
F 1 "VCC" H 867 1373 50  0000 C CNN
F 2 "" H 850 1200 50  0001 C CNN
F 3 "" H 850 1200 50  0001 C CNN
	1    850  1200
	1    0    0    -1  
$EndComp
$Comp
L power:PWR_FLAG #FLG0101
U 1 1 5D4828EB
P 1250 1500
F 0 "#FLG0101" H 1250 1575 50  0001 C CNN
F 1 "PWR_FLAG" H 1250 1673 50  0000 C CNN
F 2 "" H 1250 1500 50  0001 C CNN
F 3 "~" H 1250 1500 50  0001 C CNN
	1    1250 1500
	-1   0    0    1   
$EndComp
Wire Wire Line
	1050 1300 1050 1400
Wire Wire Line
	1050 1400 850  1400
Wire Wire Line
	850  1400 850  1200
Wire Wire Line
	1250 1500 1250 1400
Wire Wire Line
	1250 1400 1150 1400
Wire Wire Line
	1150 1400 1150 1300
Connection ~ 1250 1400
Wire Wire Line
	1250 1400 1250 1300
Wire Wire Line
	1150 1400 1050 1400
Connection ~ 1150 1400
Connection ~ 1050 1400
$Comp
L Device:CP C5
U 1 1 5D4945D4
P 850 1650
F 0 "C5" H 600 1700 50  0000 L CNN
F 1 "CP" H 600 1600 50  0000 L CNN
F 2 "Capacitor_THT:CP_Radial_D5.0mm_P2.00mm" H 888 1500 50  0001 C CNN
F 3 "~" H 850 1650 50  0001 C CNN
	1    850  1650
	1    0    0    -1  
$EndComp
Wire Wire Line
	850  1500 850  1400
Connection ~ 850  1400
Wire Wire Line
	850  1800 850  1900
$Comp
L power:GND #PWR0131
U 1 1 5D4D4B5E
P 850 1900
F 0 "#PWR0131" H 850 1650 50  0001 C CNN
F 1 "GND" H 855 1727 50  0000 C CNN
F 2 "" H 850 1900 50  0001 C CNN
F 3 "" H 850 1900 50  0001 C CNN
	1    850  1900
	1    0    0    -1  
$EndComp
Text GLabel 1350 1300 3    50   Input ~ 0
D5
NoConn ~ 1450 1300
Text GLabel 1550 1300 3    50   Input ~ 0
D0
Text GLabel 1650 1300 3    50   Input ~ 0
D6
Text GLabel 1850 1300 3    50   Input ~ 0
D7
Text GLabel 1950 1300 3    50   Input ~ 0
D3
Text GLabel 2150 1300 3    50   Input ~ 0
D2
Text GLabel 2250 1300 3    50   Input ~ 0
D4
Text GLabel 2450 1300 3    50   Input ~ 0
A0
Text GLabel 2550 1300 3    50   Input ~ 0
A2
Text GLabel 2750 1300 3    50   Input ~ 0
A3
Text GLabel 2850 1300 3    50   Input ~ 0
A4
Text GLabel 3050 1300 3    50   Input ~ 0
A1
Text GLabel 3150 1300 3    50   Input ~ 0
A5
Text GLabel 3450 1300 3    50   Input ~ 0
A6
Text GLabel 3650 1300 3    50   Input ~ 0
A7
NoConn ~ 1750 1300
NoConn ~ 2050 1300
NoConn ~ 2350 1300
NoConn ~ 2650 1300
NoConn ~ 2950 1300
NoConn ~ 3250 1300
NoConn ~ 3350 1300
NoConn ~ 3550 1300
Text GLabel 3750 1500 3    50   Input ~ 0
~WAIT
Wire Wire Line
	3750 1500 3750 1300
NoConn ~ 3850 1300
NoConn ~ 3950 1300
NoConn ~ 4050 1300
NoConn ~ 4150 1300
Text GLabel 4250 1300 3    50   Input ~ 0
IEI
NoConn ~ 4350 1300
NoConn ~ 4450 1300
NoConn ~ 4550 1300
NoConn ~ 4650 1300
NoConn ~ 4750 1300
NoConn ~ 4850 1300
NoConn ~ 4950 1300
NoConn ~ 5050 1300
Text GLabel 5150 1300 3    50   Input ~ 0
D1
NoConn ~ 5250 1300
NoConn ~ 5350 1300
NoConn ~ 5450 1300
NoConn ~ 5550 1300
NoConn ~ 5650 1300
Text GLabel 5750 1300 3    50   Input ~ 0
IEO
NoConn ~ 5850 1300
NoConn ~ 5950 1300
NoConn ~ 6050 1300
NoConn ~ 6150 1300
NoConn ~ 6250 1300
NoConn ~ 6350 1300
NoConn ~ 6450 1300
NoConn ~ 6550 1300
NoConn ~ 6650 1300
Text GLabel 6750 1300 3    50   Input ~ 0
~M1
NoConn ~ 6850 1300
NoConn ~ 6950 1300
NoConn ~ 7050 1300
NoConn ~ 7150 1300
Text GLabel 7250 1300 3    50   Input ~ 0
~INT
NoConn ~ 7350 1300
NoConn ~ 7450 1300
NoConn ~ 7650 1300
NoConn ~ 7750 1300
NoConn ~ 7850 1300
NoConn ~ 7950 1300
NoConn ~ 8050 1300
Text GLabel 8150 1300 3    50   Input ~ 0
~RD
NoConn ~ 8250 1300
NoConn ~ 8350 1300
NoConn ~ 8450 1300
NoConn ~ 8550 1300
NoConn ~ 8650 1300
NoConn ~ 8750 1300
Text GLabel 8850 1300 3    50   Input ~ 0
~IORQ
NoConn ~ 8950 1300
NoConn ~ 9050 1300
NoConn ~ 9150 1300
NoConn ~ 9250 1300
NoConn ~ 9350 1300
NoConn ~ 9450 1300
NoConn ~ 9550 1300
Text GLabel 9650 1300 3    50   Input ~ 0
CLK
NoConn ~ 9750 1300
NoConn ~ 9850 1300
NoConn ~ 9950 1300
NoConn ~ 10050 1300
NoConn ~ 10150 1300
Text GLabel 10250 1300 3    50   Input ~ 0
~RESET
Wire Wire Line
	10350 1300 10350 1400
Wire Wire Line
	10350 1400 10450 1400
Wire Wire Line
	10550 1400 10550 1300
Wire Wire Line
	10450 1300 10450 1400
Connection ~ 10450 1400
Wire Wire Line
	10450 1400 10550 1400
$Comp
L power:GND #PWR0132
U 1 1 5D5F7D20
P 10550 1500
F 0 "#PWR0132" H 10550 1250 50  0001 C CNN
F 1 "GND" H 10555 1327 50  0000 C CNN
F 2 "" H 10550 1500 50  0001 C CNN
F 3 "" H 10550 1500 50  0001 C CNN
	1    10550 1500
	1    0    0    -1  
$EndComp
Wire Wire Line
	10550 1500 10550 1400
Connection ~ 10550 1400
$Comp
L power:PWR_FLAG #FLG0102
U 1 1 5D5FCE7F
P 10650 1400
F 0 "#FLG0102" H 10650 1475 50  0001 C CNN
F 1 "PWR_FLAG" V 10650 1528 50  0000 L CNN
F 2 "" H 10650 1400 50  0001 C CNN
F 3 "~" H 10650 1400 50  0001 C CNN
	1    10650 1400
	0    1    1    0   
$EndComp
Wire Wire Line
	10650 1400 10550 1400
NoConn ~ 7550 1300
$EndSCHEMATC