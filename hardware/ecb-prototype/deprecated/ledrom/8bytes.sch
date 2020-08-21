EESchema Schematic File Version 4
LIBS:ledrom-cache
EELAYER 26 0
EELAYER END
$Descr A4 8268 11693 portrait
encoding utf-8
Sheet 9 10
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
L ledrom-rescue:74LS138 U3
U 1 1 5B37F6FA
P 2450 5100
AR Path="/5B37E9AC/5B37F6FA" Ref="U3"  Part="1" 
AR Path="/5B388D26/5B37F6FA" Ref="U4"  Part="1" 
AR Path="/5B38A092/5B37F6FA" Ref="U5"  Part="1" 
AR Path="/5B38A0A2/5B37F6FA" Ref="U6"  Part="1" 
AR Path="/5B38E6EA/5B37F6FA" Ref="U7"  Part="1" 
AR Path="/5B38E6FA/5B37F6FA" Ref="U8"  Part="1" 
AR Path="/5B38E70A/5B37F6FA" Ref="U9"  Part="1" 
AR Path="/5B38E71A/5B37F6FA" Ref="U10"  Part="1" 
AR Path="/5B37F6FA" Ref="U10"  Part="1" 
F 0 "U10" H 2550 5600 50  0000 C CNN
F 1 "74AC138" H 2600 4551 50  0000 C CNN
F 2 "Housings_DIP:DIP-16_W7.62mm_Socket" H 2450 5100 50  0001 C CNN
F 3 "" H 2450 5100 50  0001 C CNN
	1    2450 5100
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:VCC #PWR013
U 1 1 5B37F70F
P 3950 950
AR Path="/5B37E9AC/5B37F70F" Ref="#PWR013"  Part="1" 
AR Path="/5B388D26/5B37F70F" Ref="#PWR021"  Part="1" 
AR Path="/5B38A092/5B37F70F" Ref="#PWR029"  Part="1" 
AR Path="/5B38A0A2/5B37F70F" Ref="#PWR037"  Part="1" 
AR Path="/5B38E6EA/5B37F70F" Ref="#PWR045"  Part="1" 
AR Path="/5B38E6FA/5B37F70F" Ref="#PWR053"  Part="1" 
AR Path="/5B38E70A/5B37F70F" Ref="#PWR061"  Part="1" 
AR Path="/5B38E71A/5B37F70F" Ref="#PWR069"  Part="1" 
F 0 "#PWR069" H 3950 800 50  0001 C CNN
F 1 "VCC" H 3950 1100 50  0000 C CNN
F 2 "" H 3950 950 50  0001 C CNN
F 3 "" H 3950 950 50  0001 C CNN
	1    3950 950 
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 950  3950 1050
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J1
U 1 1 5B37F717
P 4600 1250
AR Path="/5B37E9AC/5B37F717" Ref="J1"  Part="1" 
AR Path="/5B388D26/5B37F717" Ref="J17"  Part="1" 
AR Path="/5B38A092/5B37F717" Ref="J33"  Part="1" 
AR Path="/5B38A0A2/5B37F717" Ref="J49"  Part="1" 
AR Path="/5B38E6EA/5B37F717" Ref="J65"  Part="1" 
AR Path="/5B38E6FA/5B37F717" Ref="J81"  Part="1" 
AR Path="/5B38E70A/5B37F717" Ref="J97"  Part="1" 
AR Path="/5B38E71A/5B37F717" Ref="J113"  Part="1" 
F 0 "J113" H 4650 1450 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 950 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 1250 50  0001 C CNN
F 3 "" H 4600 1250 50  0001 C CNN
	1    4600 1250
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J2
U 1 1 5B37F71E
P 4600 1750
AR Path="/5B37E9AC/5B37F71E" Ref="J2"  Part="1" 
AR Path="/5B388D26/5B37F71E" Ref="J18"  Part="1" 
AR Path="/5B38A092/5B37F71E" Ref="J34"  Part="1" 
AR Path="/5B38A0A2/5B37F71E" Ref="J50"  Part="1" 
AR Path="/5B38E6EA/5B37F71E" Ref="J66"  Part="1" 
AR Path="/5B38E6FA/5B37F71E" Ref="J82"  Part="1" 
AR Path="/5B38E70A/5B37F71E" Ref="J98"  Part="1" 
AR Path="/5B38E71A/5B37F71E" Ref="J114"  Part="1" 
F 0 "J114" H 4650 1950 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 1450 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 1750 50  0001 C CNN
F 3 "" H 4600 1750 50  0001 C CNN
	1    4600 1750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 1450 3950 1550
Wire Wire Line
	3950 1550 4300 1550
Wire Wire Line
	4300 1150 4300 1250
Wire Wire Line
	4300 1150 4400 1150
Wire Wire Line
	4300 1250 4400 1250
Connection ~ 4300 1250
Wire Wire Line
	4400 1350 4300 1350
Connection ~ 4300 1350
Wire Wire Line
	4300 1650 4400 1650
Connection ~ 4300 1550
Wire Wire Line
	4400 1450 4300 1450
Connection ~ 4300 1450
Wire Wire Line
	4300 1750 4400 1750
Connection ~ 4300 1650
Wire Wire Line
	4300 1850 4400 1850
Connection ~ 4300 1750
Wire Wire Line
	4300 1950 4400 1950
Connection ~ 4300 1850
$Comp
L ledrom-rescue:VCC #PWR014
U 1 1 5B37F745
P 3950 2050
AR Path="/5B37E9AC/5B37F745" Ref="#PWR014"  Part="1" 
AR Path="/5B388D26/5B37F745" Ref="#PWR022"  Part="1" 
AR Path="/5B38A092/5B37F745" Ref="#PWR030"  Part="1" 
AR Path="/5B38A0A2/5B37F745" Ref="#PWR038"  Part="1" 
AR Path="/5B38E6EA/5B37F745" Ref="#PWR046"  Part="1" 
AR Path="/5B38E6FA/5B37F745" Ref="#PWR054"  Part="1" 
AR Path="/5B38E70A/5B37F745" Ref="#PWR062"  Part="1" 
AR Path="/5B38E71A/5B37F745" Ref="#PWR070"  Part="1" 
F 0 "#PWR070" H 3950 1900 50  0001 C CNN
F 1 "VCC" H 3950 2200 50  0000 C CNN
F 2 "" H 3950 2050 50  0001 C CNN
F 3 "" H 3950 2050 50  0001 C CNN
	1    3950 2050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 2050 3950 2150
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J3
U 1 1 5B37F74D
P 4600 2350
AR Path="/5B37E9AC/5B37F74D" Ref="J3"  Part="1" 
AR Path="/5B388D26/5B37F74D" Ref="J19"  Part="1" 
AR Path="/5B38A092/5B37F74D" Ref="J35"  Part="1" 
AR Path="/5B38A0A2/5B37F74D" Ref="J51"  Part="1" 
AR Path="/5B38E6EA/5B37F74D" Ref="J67"  Part="1" 
AR Path="/5B38E6FA/5B37F74D" Ref="J83"  Part="1" 
AR Path="/5B38E70A/5B37F74D" Ref="J99"  Part="1" 
AR Path="/5B38E71A/5B37F74D" Ref="J115"  Part="1" 
F 0 "J115" H 4650 2550 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 2050 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 2350 50  0001 C CNN
F 3 "" H 4600 2350 50  0001 C CNN
	1    4600 2350
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J4
U 1 1 5B37F754
P 4600 2850
AR Path="/5B37E9AC/5B37F754" Ref="J4"  Part="1" 
AR Path="/5B388D26/5B37F754" Ref="J20"  Part="1" 
AR Path="/5B38A092/5B37F754" Ref="J36"  Part="1" 
AR Path="/5B38A0A2/5B37F754" Ref="J52"  Part="1" 
AR Path="/5B38E6EA/5B37F754" Ref="J68"  Part="1" 
AR Path="/5B38E6FA/5B37F754" Ref="J84"  Part="1" 
AR Path="/5B38E70A/5B37F754" Ref="J100"  Part="1" 
AR Path="/5B38E71A/5B37F754" Ref="J116"  Part="1" 
F 0 "J116" H 4650 3050 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 2550 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 2850 50  0001 C CNN
F 3 "" H 4600 2850 50  0001 C CNN
	1    4600 2850
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 2550 3950 2650
Wire Wire Line
	3950 2650 4300 2650
Wire Wire Line
	4300 2250 4300 2350
Wire Wire Line
	4300 2250 4400 2250
Wire Wire Line
	4300 2350 4400 2350
Connection ~ 4300 2350
Wire Wire Line
	4400 2450 4300 2450
Connection ~ 4300 2450
Wire Wire Line
	4300 2750 4400 2750
Connection ~ 4300 2650
Wire Wire Line
	4400 2550 4300 2550
Connection ~ 4300 2550
Wire Wire Line
	4300 2850 4400 2850
Connection ~ 4300 2750
Wire Wire Line
	4300 2950 4400 2950
Connection ~ 4300 2850
Wire Wire Line
	4300 3050 4400 3050
Connection ~ 4300 2950
$Comp
L ledrom-rescue:VCC #PWR015
U 1 1 5B37F77B
P 3950 3150
AR Path="/5B37E9AC/5B37F77B" Ref="#PWR015"  Part="1" 
AR Path="/5B388D26/5B37F77B" Ref="#PWR023"  Part="1" 
AR Path="/5B38A092/5B37F77B" Ref="#PWR031"  Part="1" 
AR Path="/5B38A0A2/5B37F77B" Ref="#PWR039"  Part="1" 
AR Path="/5B38E6EA/5B37F77B" Ref="#PWR047"  Part="1" 
AR Path="/5B38E6FA/5B37F77B" Ref="#PWR055"  Part="1" 
AR Path="/5B38E70A/5B37F77B" Ref="#PWR063"  Part="1" 
AR Path="/5B38E71A/5B37F77B" Ref="#PWR071"  Part="1" 
F 0 "#PWR071" H 3950 3000 50  0001 C CNN
F 1 "VCC" H 3950 3300 50  0000 C CNN
F 2 "" H 3950 3150 50  0001 C CNN
F 3 "" H 3950 3150 50  0001 C CNN
	1    3950 3150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 3150 3950 3250
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J5
U 1 1 5B37F783
P 4600 3450
AR Path="/5B37E9AC/5B37F783" Ref="J5"  Part="1" 
AR Path="/5B388D26/5B37F783" Ref="J21"  Part="1" 
AR Path="/5B38A092/5B37F783" Ref="J37"  Part="1" 
AR Path="/5B38A0A2/5B37F783" Ref="J53"  Part="1" 
AR Path="/5B38E6EA/5B37F783" Ref="J69"  Part="1" 
AR Path="/5B38E6FA/5B37F783" Ref="J85"  Part="1" 
AR Path="/5B38E70A/5B37F783" Ref="J101"  Part="1" 
AR Path="/5B38E71A/5B37F783" Ref="J117"  Part="1" 
F 0 "J117" H 4650 3650 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 3150 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 3450 50  0001 C CNN
F 3 "" H 4600 3450 50  0001 C CNN
	1    4600 3450
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J6
U 1 1 5B37F78A
P 4600 3950
AR Path="/5B37E9AC/5B37F78A" Ref="J6"  Part="1" 
AR Path="/5B388D26/5B37F78A" Ref="J22"  Part="1" 
AR Path="/5B38A092/5B37F78A" Ref="J38"  Part="1" 
AR Path="/5B38A0A2/5B37F78A" Ref="J54"  Part="1" 
AR Path="/5B38E6EA/5B37F78A" Ref="J70"  Part="1" 
AR Path="/5B38E6FA/5B37F78A" Ref="J86"  Part="1" 
AR Path="/5B38E70A/5B37F78A" Ref="J102"  Part="1" 
AR Path="/5B38E71A/5B37F78A" Ref="J118"  Part="1" 
F 0 "J118" H 4650 4150 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 3650 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 3950 50  0001 C CNN
F 3 "" H 4600 3950 50  0001 C CNN
	1    4600 3950
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 3650 3950 3750
Wire Wire Line
	3950 3750 4300 3750
Wire Wire Line
	4300 3350 4300 3450
Wire Wire Line
	4300 3350 4400 3350
Wire Wire Line
	4300 3450 4400 3450
Connection ~ 4300 3450
Wire Wire Line
	4400 3550 4300 3550
Connection ~ 4300 3550
Wire Wire Line
	4300 3850 4400 3850
Connection ~ 4300 3750
Wire Wire Line
	4400 3650 4300 3650
Connection ~ 4300 3650
Wire Wire Line
	4300 3950 4400 3950
Connection ~ 4300 3850
Wire Wire Line
	4300 4050 4400 4050
Connection ~ 4300 3950
Wire Wire Line
	4300 4150 4400 4150
Connection ~ 4300 4050
$Comp
L ledrom-rescue:VCC #PWR016
U 1 1 5B37F7B1
P 3950 4250
AR Path="/5B37E9AC/5B37F7B1" Ref="#PWR016"  Part="1" 
AR Path="/5B388D26/5B37F7B1" Ref="#PWR024"  Part="1" 
AR Path="/5B38A092/5B37F7B1" Ref="#PWR032"  Part="1" 
AR Path="/5B38A0A2/5B37F7B1" Ref="#PWR040"  Part="1" 
AR Path="/5B38E6EA/5B37F7B1" Ref="#PWR048"  Part="1" 
AR Path="/5B38E6FA/5B37F7B1" Ref="#PWR056"  Part="1" 
AR Path="/5B38E70A/5B37F7B1" Ref="#PWR064"  Part="1" 
AR Path="/5B38E71A/5B37F7B1" Ref="#PWR072"  Part="1" 
F 0 "#PWR072" H 3950 4100 50  0001 C CNN
F 1 "VCC" H 3950 4400 50  0000 C CNN
F 2 "" H 3950 4250 50  0001 C CNN
F 3 "" H 3950 4250 50  0001 C CNN
	1    3950 4250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 4250 3950 4350
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J7
U 1 1 5B37F7B9
P 4600 4550
AR Path="/5B37E9AC/5B37F7B9" Ref="J7"  Part="1" 
AR Path="/5B388D26/5B37F7B9" Ref="J23"  Part="1" 
AR Path="/5B38A092/5B37F7B9" Ref="J39"  Part="1" 
AR Path="/5B38A0A2/5B37F7B9" Ref="J55"  Part="1" 
AR Path="/5B38E6EA/5B37F7B9" Ref="J71"  Part="1" 
AR Path="/5B38E6FA/5B37F7B9" Ref="J87"  Part="1" 
AR Path="/5B38E70A/5B37F7B9" Ref="J103"  Part="1" 
AR Path="/5B38E71A/5B37F7B9" Ref="J119"  Part="1" 
F 0 "J119" H 4650 4750 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 4250 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 4550 50  0001 C CNN
F 3 "" H 4600 4550 50  0001 C CNN
	1    4600 4550
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J8
U 1 1 5B37F7C0
P 4600 5050
AR Path="/5B37E9AC/5B37F7C0" Ref="J8"  Part="1" 
AR Path="/5B388D26/5B37F7C0" Ref="J24"  Part="1" 
AR Path="/5B38A092/5B37F7C0" Ref="J40"  Part="1" 
AR Path="/5B38A0A2/5B37F7C0" Ref="J56"  Part="1" 
AR Path="/5B38E6EA/5B37F7C0" Ref="J72"  Part="1" 
AR Path="/5B38E6FA/5B37F7C0" Ref="J88"  Part="1" 
AR Path="/5B38E70A/5B37F7C0" Ref="J104"  Part="1" 
AR Path="/5B38E71A/5B37F7C0" Ref="J120"  Part="1" 
F 0 "J120" H 4650 5250 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 4750 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 5050 50  0001 C CNN
F 3 "" H 4600 5050 50  0001 C CNN
	1    4600 5050
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 4750 3950 4850
Wire Wire Line
	3950 4850 4300 4850
Wire Wire Line
	4300 4450 4300 4550
Wire Wire Line
	4300 4450 4400 4450
Wire Wire Line
	4300 4550 4400 4550
Connection ~ 4300 4550
Wire Wire Line
	4400 4650 4300 4650
Connection ~ 4300 4650
Wire Wire Line
	4300 4950 4400 4950
Connection ~ 4300 4850
Wire Wire Line
	4400 4750 4300 4750
Connection ~ 4300 4750
Wire Wire Line
	4300 5050 4400 5050
Connection ~ 4300 4950
Wire Wire Line
	4300 5150 4400 5150
Connection ~ 4300 5050
Wire Wire Line
	4300 5250 4400 5250
Connection ~ 4300 5150
$Comp
L ledrom-rescue:VCC #PWR017
U 1 1 5B37F7E7
P 3950 5350
AR Path="/5B37E9AC/5B37F7E7" Ref="#PWR017"  Part="1" 
AR Path="/5B388D26/5B37F7E7" Ref="#PWR025"  Part="1" 
AR Path="/5B38A092/5B37F7E7" Ref="#PWR033"  Part="1" 
AR Path="/5B38A0A2/5B37F7E7" Ref="#PWR041"  Part="1" 
AR Path="/5B38E6EA/5B37F7E7" Ref="#PWR049"  Part="1" 
AR Path="/5B38E6FA/5B37F7E7" Ref="#PWR057"  Part="1" 
AR Path="/5B38E70A/5B37F7E7" Ref="#PWR065"  Part="1" 
AR Path="/5B38E71A/5B37F7E7" Ref="#PWR073"  Part="1" 
F 0 "#PWR073" H 3950 5200 50  0001 C CNN
F 1 "VCC" H 3950 5500 50  0000 C CNN
F 2 "" H 3950 5350 50  0001 C CNN
F 3 "" H 3950 5350 50  0001 C CNN
	1    3950 5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 5350 3950 5450
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J9
U 1 1 5B37F7EF
P 4600 5650
AR Path="/5B37E9AC/5B37F7EF" Ref="J9"  Part="1" 
AR Path="/5B388D26/5B37F7EF" Ref="J25"  Part="1" 
AR Path="/5B38A092/5B37F7EF" Ref="J41"  Part="1" 
AR Path="/5B38A0A2/5B37F7EF" Ref="J57"  Part="1" 
AR Path="/5B38E6EA/5B37F7EF" Ref="J73"  Part="1" 
AR Path="/5B38E6FA/5B37F7EF" Ref="J89"  Part="1" 
AR Path="/5B38E70A/5B37F7EF" Ref="J105"  Part="1" 
AR Path="/5B38E71A/5B37F7EF" Ref="J121"  Part="1" 
F 0 "J121" H 4650 5850 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 5350 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 5650 50  0001 C CNN
F 3 "" H 4600 5650 50  0001 C CNN
	1    4600 5650
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J10
U 1 1 5B37F7F6
P 4600 6150
AR Path="/5B37E9AC/5B37F7F6" Ref="J10"  Part="1" 
AR Path="/5B388D26/5B37F7F6" Ref="J26"  Part="1" 
AR Path="/5B38A092/5B37F7F6" Ref="J42"  Part="1" 
AR Path="/5B38A0A2/5B37F7F6" Ref="J58"  Part="1" 
AR Path="/5B38E6EA/5B37F7F6" Ref="J74"  Part="1" 
AR Path="/5B38E6FA/5B37F7F6" Ref="J90"  Part="1" 
AR Path="/5B38E70A/5B37F7F6" Ref="J106"  Part="1" 
AR Path="/5B38E71A/5B37F7F6" Ref="J122"  Part="1" 
F 0 "J122" H 4650 6350 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 5850 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 6150 50  0001 C CNN
F 3 "" H 4600 6150 50  0001 C CNN
	1    4600 6150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 5850 3950 5950
Wire Wire Line
	3950 5950 4300 5950
Wire Wire Line
	4300 5550 4300 5650
Wire Wire Line
	4300 5550 4400 5550
Wire Wire Line
	4300 5650 4400 5650
Connection ~ 4300 5650
Wire Wire Line
	4400 5750 4300 5750
Connection ~ 4300 5750
Wire Wire Line
	4300 6050 4400 6050
Connection ~ 4300 5950
Wire Wire Line
	4400 5850 4300 5850
Connection ~ 4300 5850
Wire Wire Line
	4300 6150 4400 6150
Connection ~ 4300 6050
Wire Wire Line
	4300 6250 4400 6250
Connection ~ 4300 6150
Wire Wire Line
	4300 6350 4400 6350
Connection ~ 4300 6250
$Comp
L ledrom-rescue:VCC #PWR018
U 1 1 5B37F81D
P 3950 6450
AR Path="/5B37E9AC/5B37F81D" Ref="#PWR018"  Part="1" 
AR Path="/5B388D26/5B37F81D" Ref="#PWR026"  Part="1" 
AR Path="/5B38A092/5B37F81D" Ref="#PWR034"  Part="1" 
AR Path="/5B38A0A2/5B37F81D" Ref="#PWR042"  Part="1" 
AR Path="/5B38E6EA/5B37F81D" Ref="#PWR050"  Part="1" 
AR Path="/5B38E6FA/5B37F81D" Ref="#PWR058"  Part="1" 
AR Path="/5B38E70A/5B37F81D" Ref="#PWR066"  Part="1" 
AR Path="/5B38E71A/5B37F81D" Ref="#PWR074"  Part="1" 
F 0 "#PWR074" H 3950 6300 50  0001 C CNN
F 1 "VCC" H 3950 6600 50  0000 C CNN
F 2 "" H 3950 6450 50  0001 C CNN
F 3 "" H 3950 6450 50  0001 C CNN
	1    3950 6450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 6450 3950 6550
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J11
U 1 1 5B37F825
P 4600 6750
AR Path="/5B37E9AC/5B37F825" Ref="J11"  Part="1" 
AR Path="/5B388D26/5B37F825" Ref="J27"  Part="1" 
AR Path="/5B38A092/5B37F825" Ref="J43"  Part="1" 
AR Path="/5B38A0A2/5B37F825" Ref="J59"  Part="1" 
AR Path="/5B38E6EA/5B37F825" Ref="J75"  Part="1" 
AR Path="/5B38E6FA/5B37F825" Ref="J91"  Part="1" 
AR Path="/5B38E70A/5B37F825" Ref="J107"  Part="1" 
AR Path="/5B38E71A/5B37F825" Ref="J123"  Part="1" 
F 0 "J123" H 4650 6950 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 6450 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 6750 50  0001 C CNN
F 3 "" H 4600 6750 50  0001 C CNN
	1    4600 6750
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J12
U 1 1 5B37F82C
P 4600 7250
AR Path="/5B37E9AC/5B37F82C" Ref="J12"  Part="1" 
AR Path="/5B388D26/5B37F82C" Ref="J28"  Part="1" 
AR Path="/5B38A092/5B37F82C" Ref="J44"  Part="1" 
AR Path="/5B38A0A2/5B37F82C" Ref="J60"  Part="1" 
AR Path="/5B38E6EA/5B37F82C" Ref="J76"  Part="1" 
AR Path="/5B38E6FA/5B37F82C" Ref="J92"  Part="1" 
AR Path="/5B38E70A/5B37F82C" Ref="J108"  Part="1" 
AR Path="/5B38E71A/5B37F82C" Ref="J124"  Part="1" 
F 0 "J124" H 4650 7450 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 6950 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 7250 50  0001 C CNN
F 3 "" H 4600 7250 50  0001 C CNN
	1    4600 7250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 6950 3950 7050
Wire Wire Line
	3950 7050 4300 7050
Wire Wire Line
	4300 6650 4300 6750
Wire Wire Line
	4300 6650 4400 6650
Wire Wire Line
	4300 6750 4400 6750
Connection ~ 4300 6750
Wire Wire Line
	4400 6850 4300 6850
Connection ~ 4300 6850
Wire Wire Line
	4300 7150 4400 7150
Connection ~ 4300 7050
Wire Wire Line
	4400 6950 4300 6950
Connection ~ 4300 6950
Wire Wire Line
	4300 7250 4400 7250
Connection ~ 4300 7150
Wire Wire Line
	4300 7350 4400 7350
Connection ~ 4300 7250
Wire Wire Line
	4300 7450 4400 7450
Connection ~ 4300 7350
$Comp
L ledrom-rescue:VCC #PWR019
U 1 1 5B37F853
P 3950 7550
AR Path="/5B37E9AC/5B37F853" Ref="#PWR019"  Part="1" 
AR Path="/5B388D26/5B37F853" Ref="#PWR027"  Part="1" 
AR Path="/5B38A092/5B37F853" Ref="#PWR035"  Part="1" 
AR Path="/5B38A0A2/5B37F853" Ref="#PWR043"  Part="1" 
AR Path="/5B38E6EA/5B37F853" Ref="#PWR051"  Part="1" 
AR Path="/5B38E6FA/5B37F853" Ref="#PWR059"  Part="1" 
AR Path="/5B38E70A/5B37F853" Ref="#PWR067"  Part="1" 
AR Path="/5B38E71A/5B37F853" Ref="#PWR075"  Part="1" 
F 0 "#PWR075" H 3950 7400 50  0001 C CNN
F 1 "VCC" H 3950 7700 50  0000 C CNN
F 2 "" H 3950 7550 50  0001 C CNN
F 3 "" H 3950 7550 50  0001 C CNN
	1    3950 7550
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 7550 3950 7650
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J13
U 1 1 5B37F85B
P 4600 7850
AR Path="/5B37E9AC/5B37F85B" Ref="J13"  Part="1" 
AR Path="/5B388D26/5B37F85B" Ref="J29"  Part="1" 
AR Path="/5B38A092/5B37F85B" Ref="J45"  Part="1" 
AR Path="/5B38A0A2/5B37F85B" Ref="J61"  Part="1" 
AR Path="/5B38E6EA/5B37F85B" Ref="J77"  Part="1" 
AR Path="/5B38E6FA/5B37F85B" Ref="J93"  Part="1" 
AR Path="/5B38E70A/5B37F85B" Ref="J109"  Part="1" 
AR Path="/5B38E71A/5B37F85B" Ref="J125"  Part="1" 
F 0 "J125" H 4650 8050 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 7550 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 7850 50  0001 C CNN
F 3 "" H 4600 7850 50  0001 C CNN
	1    4600 7850
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J14
U 1 1 5B37F862
P 4600 8350
AR Path="/5B37E9AC/5B37F862" Ref="J14"  Part="1" 
AR Path="/5B388D26/5B37F862" Ref="J30"  Part="1" 
AR Path="/5B38A092/5B37F862" Ref="J46"  Part="1" 
AR Path="/5B38A0A2/5B37F862" Ref="J62"  Part="1" 
AR Path="/5B38E6EA/5B37F862" Ref="J78"  Part="1" 
AR Path="/5B38E6FA/5B37F862" Ref="J94"  Part="1" 
AR Path="/5B38E70A/5B37F862" Ref="J110"  Part="1" 
AR Path="/5B38E71A/5B37F862" Ref="J126"  Part="1" 
F 0 "J126" H 4650 8550 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 8050 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 8350 50  0001 C CNN
F 3 "" H 4600 8350 50  0001 C CNN
	1    4600 8350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 8050 3950 8150
Wire Wire Line
	3950 8150 4300 8150
Wire Wire Line
	4300 7750 4300 7850
Wire Wire Line
	4300 7750 4400 7750
Wire Wire Line
	4300 7850 4400 7850
Connection ~ 4300 7850
Wire Wire Line
	4400 7950 4300 7950
Connection ~ 4300 7950
Wire Wire Line
	4300 8250 4400 8250
Connection ~ 4300 8150
Wire Wire Line
	4400 8050 4300 8050
Connection ~ 4300 8050
Wire Wire Line
	4300 8350 4400 8350
Connection ~ 4300 8250
Wire Wire Line
	4300 8450 4400 8450
Connection ~ 4300 8350
Wire Wire Line
	4300 8550 4400 8550
Connection ~ 4300 8450
$Comp
L ledrom-rescue:VCC #PWR020
U 1 1 5B37F889
P 3950 8650
AR Path="/5B37E9AC/5B37F889" Ref="#PWR020"  Part="1" 
AR Path="/5B388D26/5B37F889" Ref="#PWR028"  Part="1" 
AR Path="/5B38A092/5B37F889" Ref="#PWR036"  Part="1" 
AR Path="/5B38A0A2/5B37F889" Ref="#PWR044"  Part="1" 
AR Path="/5B38E6EA/5B37F889" Ref="#PWR052"  Part="1" 
AR Path="/5B38E6FA/5B37F889" Ref="#PWR060"  Part="1" 
AR Path="/5B38E70A/5B37F889" Ref="#PWR068"  Part="1" 
AR Path="/5B38E71A/5B37F889" Ref="#PWR076"  Part="1" 
F 0 "#PWR076" H 3950 8500 50  0001 C CNN
F 1 "VCC" H 3950 8800 50  0000 C CNN
F 2 "" H 3950 8650 50  0001 C CNN
F 3 "" H 3950 8650 50  0001 C CNN
	1    3950 8650
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 8650 3950 8750
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J15
U 1 1 5B37F891
P 4600 8950
AR Path="/5B37E9AC/5B37F891" Ref="J15"  Part="1" 
AR Path="/5B388D26/5B37F891" Ref="J31"  Part="1" 
AR Path="/5B38A092/5B37F891" Ref="J47"  Part="1" 
AR Path="/5B38A0A2/5B37F891" Ref="J63"  Part="1" 
AR Path="/5B38E6EA/5B37F891" Ref="J79"  Part="1" 
AR Path="/5B38E6FA/5B37F891" Ref="J95"  Part="1" 
AR Path="/5B38E70A/5B37F891" Ref="J111"  Part="1" 
AR Path="/5B38E71A/5B37F891" Ref="J127"  Part="1" 
F 0 "J127" H 4650 9150 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 8650 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 8950 50  0001 C CNN
F 3 "" H 4600 8950 50  0001 C CNN
	1    4600 8950
	1    0    0    -1  
$EndComp
$Comp
L ledrom-rescue:Conn_02x04_Odd_Even J16
U 1 1 5B37F898
P 4600 9450
AR Path="/5B37E9AC/5B37F898" Ref="J16"  Part="1" 
AR Path="/5B388D26/5B37F898" Ref="J32"  Part="1" 
AR Path="/5B38A092/5B37F898" Ref="J48"  Part="1" 
AR Path="/5B38A0A2/5B37F898" Ref="J64"  Part="1" 
AR Path="/5B38E6EA/5B37F898" Ref="J80"  Part="1" 
AR Path="/5B38E6FA/5B37F898" Ref="J96"  Part="1" 
AR Path="/5B38E70A/5B37F898" Ref="J112"  Part="1" 
AR Path="/5B38E71A/5B37F898" Ref="J128"  Part="1" 
F 0 "J128" H 4650 9650 50  0000 C CNN
F 1 "Conn_02x04_Odd_Even" H 4650 9150 50  0001 C CNN
F 2 "Socket_Strips:Socket_Strip_Straight_2x04_Pitch2.54mm" H 4600 9450 50  0001 C CNN
F 3 "" H 4600 9450 50  0001 C CNN
	1    4600 9450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3950 9150 3950 9250
Wire Wire Line
	3950 9250 4300 9250
Wire Wire Line
	4300 8850 4300 8950
Wire Wire Line
	4300 8850 4400 8850
Wire Wire Line
	4300 8950 4400 8950
Connection ~ 4300 8950
Wire Wire Line
	4400 9050 4300 9050
Connection ~ 4300 9050
Wire Wire Line
	4300 9350 4400 9350
Connection ~ 4300 9250
Wire Wire Line
	4400 9150 4300 9150
Connection ~ 4300 9150
Wire Wire Line
	4300 9450 4400 9450
Connection ~ 4300 9350
Wire Wire Line
	4300 9550 4400 9550
Connection ~ 4300 9450
Wire Wire Line
	4300 9650 4400 9650
Connection ~ 4300 9550
Wire Wire Line
	3450 5650 3450 5150
Wire Wire Line
	3450 5150 3050 5150
Wire Wire Line
	3050 5250 3350 5250
Wire Wire Line
	3350 5250 3350 6750
Wire Wire Line
	3250 7850 3250 5350
Wire Wire Line
	3250 5350 3050 5350
Wire Wire Line
	3050 5450 3150 5450
Wire Wire Line
	3150 5450 3150 8950
Wire Wire Line
	3050 5050 3450 5050
Wire Wire Line
	3450 5050 3450 4550
Wire Wire Line
	3050 4950 3350 4950
Wire Wire Line
	3350 4950 3350 3450
Wire Wire Line
	3050 4850 3250 4850
Wire Wire Line
	3250 4850 3250 2350
Wire Wire Line
	3050 4750 3150 4750
Wire Wire Line
	3150 4750 3150 1250
Wire Wire Line
	4900 1950 5000 1950
Wire Wire Line
	5000 1950 5000 3050
Wire Wire Line
	5100 1850 5100 2950
Wire Wire Line
	5100 1850 4900 1850
Wire Wire Line
	4900 1750 5200 1750
Wire Wire Line
	5200 1750 5200 2850
Wire Wire Line
	5300 1650 5300 2750
Wire Wire Line
	5300 1650 4900 1650
Wire Wire Line
	5400 1450 5400 2550
Wire Wire Line
	5400 1450 4900 1450
Wire Wire Line
	4900 1350 5500 1350
Wire Wire Line
	5500 1350 5500 2450
Wire Wire Line
	4900 1250 5600 1250
Wire Wire Line
	5600 1250 5600 2350
Wire Wire Line
	5700 1150 5700 2250
Wire Wire Line
	5700 1150 4900 1150
Wire Wire Line
	4900 2250 5700 2250
Connection ~ 5700 2250
Wire Wire Line
	5600 2350 4900 2350
Connection ~ 5600 2350
Wire Wire Line
	4900 2450 5500 2450
Connection ~ 5500 2450
Wire Wire Line
	4900 2550 5400 2550
Connection ~ 5400 2550
Wire Wire Line
	4900 2750 5300 2750
Connection ~ 5300 2750
Wire Wire Line
	4900 2850 5200 2850
Connection ~ 5200 2850
Wire Wire Line
	5100 2950 4900 2950
Connection ~ 5100 2950
Wire Wire Line
	4900 3050 5000 3050
Connection ~ 5000 3050
Wire Wire Line
	4900 3350 5700 3350
Connection ~ 5700 3350
Wire Wire Line
	5600 3450 4900 3450
Connection ~ 5600 3450
Wire Wire Line
	4900 3550 5500 3550
Connection ~ 5500 3550
Wire Wire Line
	5400 3650 4900 3650
Connection ~ 5400 3650
Wire Wire Line
	4900 3850 5300 3850
Connection ~ 5300 3850
Wire Wire Line
	5200 3950 4900 3950
Connection ~ 5200 3950
Wire Wire Line
	4900 4050 5100 4050
Connection ~ 5100 4050
Wire Wire Line
	5000 4150 4900 4150
Connection ~ 5000 4150
Wire Wire Line
	4900 4450 5700 4450
Connection ~ 5700 4450
Wire Wire Line
	5600 4550 4900 4550
Connection ~ 5600 4550
Wire Wire Line
	4900 4650 5500 4650
Connection ~ 5500 4650
Wire Wire Line
	5400 4750 4900 4750
Connection ~ 5400 4750
Wire Wire Line
	4900 4950 5300 4950
Connection ~ 5300 4950
Wire Wire Line
	4900 5050 5200 5050
Connection ~ 5200 5050
Wire Wire Line
	4900 5150 5100 5150
Connection ~ 5100 5150
Wire Wire Line
	4900 5250 5000 5250
Connection ~ 5000 5250
Wire Wire Line
	4900 5550 5700 5550
Connection ~ 5700 5550
Wire Wire Line
	5600 5650 4900 5650
Connection ~ 5600 5650
Wire Wire Line
	4900 5750 5500 5750
Connection ~ 5500 5750
Wire Wire Line
	5400 5850 4900 5850
Connection ~ 5400 5850
Wire Wire Line
	4900 6050 5300 6050
Connection ~ 5300 6050
Wire Wire Line
	5200 6150 4900 6150
Connection ~ 5200 6150
Wire Wire Line
	4900 6250 5100 6250
Connection ~ 5100 6250
Wire Wire Line
	5000 6350 4900 6350
Connection ~ 5000 6350
Wire Wire Line
	4900 6650 5700 6650
Connection ~ 5700 6650
Wire Wire Line
	5600 6750 4900 6750
Connection ~ 5600 6750
Wire Wire Line
	4900 6850 5500 6850
Connection ~ 5500 6850
Wire Wire Line
	5400 6950 4900 6950
Connection ~ 5400 6950
Wire Wire Line
	4900 7150 5300 7150
Connection ~ 5300 7150
Wire Wire Line
	5200 7250 4900 7250
Connection ~ 5200 7250
Wire Wire Line
	4900 7350 5100 7350
Connection ~ 5100 7350
Wire Wire Line
	5000 7450 4900 7450
Connection ~ 5000 7450
Wire Wire Line
	4900 7750 5700 7750
Connection ~ 5700 7750
Wire Wire Line
	5600 7850 4900 7850
Connection ~ 5600 7850
Wire Wire Line
	4900 7950 5500 7950
Connection ~ 5500 7950
Wire Wire Line
	5400 8050 4900 8050
Connection ~ 5400 8050
Wire Wire Line
	4900 8250 5300 8250
Connection ~ 5300 8250
Wire Wire Line
	5200 8350 4900 8350
Connection ~ 5200 8350
Wire Wire Line
	4900 8450 5100 8450
Connection ~ 5100 8450
Wire Wire Line
	5000 8550 4900 8550
Connection ~ 5000 8550
Wire Wire Line
	4900 8850 5700 8850
Connection ~ 5700 8850
Wire Wire Line
	4900 8950 5600 8950
Connection ~ 5600 8950
Wire Wire Line
	4900 9050 5500 9050
Connection ~ 5500 9050
Wire Wire Line
	4900 9150 5400 9150
Connection ~ 5400 9150
Wire Wire Line
	4900 9350 5300 9350
Connection ~ 5300 9350
Wire Wire Line
	4900 9450 5200 9450
Connection ~ 5200 9450
Wire Wire Line
	4900 9550 5100 9550
Connection ~ 5100 9550
Wire Wire Line
	4900 9650 5000 9650
Connection ~ 5000 9650
Text HLabel 5800 8850 2    60   Input ~ 0
D0
Text HLabel 5800 8950 2    60   Input ~ 0
D1
Text HLabel 5800 9050 2    60   Input ~ 0
D2
Text HLabel 5800 9150 2    60   Input ~ 0
D3
Text HLabel 5800 9350 2    60   Input ~ 0
D4
Text HLabel 5800 9450 2    60   Input ~ 0
D5
Text HLabel 5800 9550 2    60   Input ~ 0
D6
Text HLabel 5800 9650 2    60   Input ~ 0
D7
Text HLabel 1750 4750 0    60   Input ~ 0
A0
Text HLabel 1750 4850 0    60   Input ~ 0
A1
Text HLabel 1750 4950 0    60   Input ~ 0
A2
Wire Wire Line
	1750 4750 1850 4750
Wire Wire Line
	1850 4850 1750 4850
Wire Wire Line
	1750 4950 1850 4950
Wire Wire Line
	1750 5250 1850 5250
Wire Wire Line
	1750 5350 1850 5350
Wire Wire Line
	1750 5450 1850 5450
Text HLabel 1750 5250 0    60   Input ~ 0
E3
Text HLabel 1750 5350 0    60   Input ~ 0
~E2
Text HLabel 1750 5450 0    60   Input ~ 0
~E1
Wire Wire Line
	4300 1250 4300 1350
Wire Wire Line
	4300 1350 4300 1450
Wire Wire Line
	4300 1550 4300 1650
Wire Wire Line
	4300 1450 4300 1550
Wire Wire Line
	4300 1650 4300 1750
Wire Wire Line
	4300 1750 4300 1850
Wire Wire Line
	4300 1850 4300 1950
Wire Wire Line
	4300 2350 4300 2450
Wire Wire Line
	4300 2450 4300 2550
Wire Wire Line
	4300 2650 4300 2750
Wire Wire Line
	4300 2550 4300 2650
Wire Wire Line
	4300 2750 4300 2850
Wire Wire Line
	4300 2850 4300 2950
Wire Wire Line
	4300 2950 4300 3050
Wire Wire Line
	4300 3450 4300 3550
Wire Wire Line
	4300 3550 4300 3650
Wire Wire Line
	4300 3750 4300 3850
Wire Wire Line
	4300 3650 4300 3750
Wire Wire Line
	4300 3850 4300 3950
Wire Wire Line
	4300 3950 4300 4050
Wire Wire Line
	4300 4050 4300 4150
Wire Wire Line
	4300 4550 4300 4650
Wire Wire Line
	4300 4650 4300 4750
Wire Wire Line
	4300 4850 4300 4950
Wire Wire Line
	4300 4750 4300 4850
Wire Wire Line
	4300 4950 4300 5050
Wire Wire Line
	4300 5050 4300 5150
Wire Wire Line
	4300 5150 4300 5250
Wire Wire Line
	4300 5650 4300 5750
Wire Wire Line
	4300 5750 4300 5850
Wire Wire Line
	4300 5950 4300 6050
Wire Wire Line
	4300 5850 4300 5950
Wire Wire Line
	4300 6050 4300 6150
Wire Wire Line
	4300 6150 4300 6250
Wire Wire Line
	4300 6250 4300 6350
Wire Wire Line
	4300 6750 4300 6850
Wire Wire Line
	4300 6850 4300 6950
Wire Wire Line
	4300 7050 4300 7150
Wire Wire Line
	4300 6950 4300 7050
Wire Wire Line
	4300 7150 4300 7250
Wire Wire Line
	4300 7250 4300 7350
Wire Wire Line
	4300 7350 4300 7450
Wire Wire Line
	4300 7850 4300 7950
Wire Wire Line
	4300 7950 4300 8050
Wire Wire Line
	4300 8150 4300 8250
Wire Wire Line
	4300 8050 4300 8150
Wire Wire Line
	4300 8250 4300 8350
Wire Wire Line
	4300 8350 4300 8450
Wire Wire Line
	4300 8450 4300 8550
Wire Wire Line
	4300 8950 4300 9050
Wire Wire Line
	4300 9050 4300 9150
Wire Wire Line
	4300 9250 4300 9350
Wire Wire Line
	4300 9150 4300 9250
Wire Wire Line
	4300 9350 4300 9450
Wire Wire Line
	4300 9450 4300 9550
Wire Wire Line
	4300 9550 4300 9650
Wire Wire Line
	5700 2250 5700 3350
Wire Wire Line
	5600 2350 5600 3450
Wire Wire Line
	5500 2450 5500 3550
Wire Wire Line
	5400 2550 5400 3650
Wire Wire Line
	5300 2750 5300 3850
Wire Wire Line
	5200 2850 5200 3950
Wire Wire Line
	5100 2950 5100 4050
Wire Wire Line
	5000 3050 5000 4150
Wire Wire Line
	5700 3350 5700 4450
Wire Wire Line
	5600 3450 5600 4550
Wire Wire Line
	5500 3550 5500 4650
Wire Wire Line
	5400 3650 5400 4750
Wire Wire Line
	5300 3850 5300 4950
Wire Wire Line
	5200 3950 5200 5050
Wire Wire Line
	5100 4050 5100 5150
Wire Wire Line
	5000 4150 5000 5250
Wire Wire Line
	5700 4450 5700 5550
Wire Wire Line
	5600 4550 5600 5650
Wire Wire Line
	5500 4650 5500 5750
Wire Wire Line
	5400 4750 5400 5850
Wire Wire Line
	5300 4950 5300 6050
Wire Wire Line
	5200 5050 5200 6150
Wire Wire Line
	5100 5150 5100 6250
Wire Wire Line
	5000 5250 5000 6350
Wire Wire Line
	5700 5550 5700 6650
Wire Wire Line
	5600 5650 5600 6750
Wire Wire Line
	5500 5750 5500 6850
Wire Wire Line
	5400 5850 5400 6950
Wire Wire Line
	5300 6050 5300 7150
Wire Wire Line
	5200 6150 5200 7250
Wire Wire Line
	5100 6250 5100 7350
Wire Wire Line
	5000 6350 5000 7450
Wire Wire Line
	5700 6650 5700 7750
Wire Wire Line
	5600 6750 5600 7850
Wire Wire Line
	5500 6850 5500 7950
Wire Wire Line
	5400 6950 5400 8050
Wire Wire Line
	5300 7150 5300 8250
Wire Wire Line
	5200 7250 5200 8350
Wire Wire Line
	5100 7350 5100 8450
Wire Wire Line
	5000 7450 5000 8550
Wire Wire Line
	5700 7750 5700 8850
Wire Wire Line
	5600 7850 5600 8950
Wire Wire Line
	5500 7950 5500 9050
Wire Wire Line
	5400 8050 5400 9150
Wire Wire Line
	5300 8250 5300 9350
Wire Wire Line
	5200 8350 5200 9450
Wire Wire Line
	5100 8450 5100 9550
Wire Wire Line
	5000 8550 5000 9650
Wire Wire Line
	5700 8850 5800 8850
Wire Wire Line
	5600 8950 5800 8950
Wire Wire Line
	5500 9050 5800 9050
Wire Wire Line
	5400 9150 5800 9150
Wire Wire Line
	5300 9350 5800 9350
Wire Wire Line
	5200 9450 5800 9450
Wire Wire Line
	5100 9550 5800 9550
Wire Wire Line
	5000 9650 5800 9650
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q1
U 1 1 5BCAB1E1
P 3850 1250
AR Path="/5B37E9AC/5BCAB1E1" Ref="Q1"  Part="1" 
AR Path="/5B388D26/5BCAB1E1" Ref="Q9"  Part="1" 
AR Path="/5B38A092/5BCAB1E1" Ref="Q17"  Part="1" 
AR Path="/5B38A0A2/5BCAB1E1" Ref="Q25"  Part="1" 
AR Path="/5B38E6EA/5BCAB1E1" Ref="Q33"  Part="1" 
AR Path="/5B38E6FA/5BCAB1E1" Ref="Q41"  Part="1" 
AR Path="/5B38E70A/5BCAB1E1" Ref="Q49"  Part="1" 
AR Path="/5B38E71A/5BCAB1E1" Ref="Q57"  Part="1" 
AR Path="/5BCAB1E1" Ref="Q25"  Part="1" 
F 0 "Q57" H 4055 1204 50  0000 L CNN
F 1 "ZVP3306A" H 3450 1100 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 1350 50  0001 C CNN
F 3 "" H 3850 1250 50  0001 C CNN
	1    3850 1250
	1    0    0    1   
$EndComp
Wire Wire Line
	3250 2350 3650 2350
Wire Wire Line
	3350 3450 3650 3450
Wire Wire Line
	3450 4550 3650 4550
Wire Wire Line
	3450 5650 3650 5650
Wire Wire Line
	3350 6750 3650 6750
Wire Wire Line
	3250 7850 3650 7850
Wire Wire Line
	3150 8950 3650 8950
Wire Wire Line
	3150 1250 3650 1250
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q2
U 1 1 5BD1A6D1
P 3850 2350
AR Path="/5B37E9AC/5BD1A6D1" Ref="Q2"  Part="1" 
AR Path="/5B388D26/5BD1A6D1" Ref="Q10"  Part="1" 
AR Path="/5B38A092/5BD1A6D1" Ref="Q18"  Part="1" 
AR Path="/5B38A0A2/5BD1A6D1" Ref="Q26"  Part="1" 
AR Path="/5B38E6EA/5BD1A6D1" Ref="Q34"  Part="1" 
AR Path="/5B38E6FA/5BD1A6D1" Ref="Q42"  Part="1" 
AR Path="/5B38E70A/5BD1A6D1" Ref="Q50"  Part="1" 
AR Path="/5B38E71A/5BD1A6D1" Ref="Q58"  Part="1" 
AR Path="/5BD1A6D1" Ref="Q26"  Part="1" 
F 0 "Q58" H 4055 2304 50  0000 L CNN
F 1 "ZVP3306A" H 3450 2200 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 2450 50  0001 C CNN
F 3 "" H 3850 2350 50  0001 C CNN
	1    3850 2350
	1    0    0    1   
$EndComp
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q3
U 1 1 5BD1A761
P 3850 3450
AR Path="/5B37E9AC/5BD1A761" Ref="Q3"  Part="1" 
AR Path="/5B388D26/5BD1A761" Ref="Q11"  Part="1" 
AR Path="/5B38A092/5BD1A761" Ref="Q19"  Part="1" 
AR Path="/5B38A0A2/5BD1A761" Ref="Q27"  Part="1" 
AR Path="/5B38E6EA/5BD1A761" Ref="Q35"  Part="1" 
AR Path="/5B38E6FA/5BD1A761" Ref="Q43"  Part="1" 
AR Path="/5B38E70A/5BD1A761" Ref="Q51"  Part="1" 
AR Path="/5B38E71A/5BD1A761" Ref="Q59"  Part="1" 
AR Path="/5BD1A761" Ref="Q27"  Part="1" 
F 0 "Q59" H 4055 3404 50  0000 L CNN
F 1 "ZVP3306A" H 3450 3300 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 3550 50  0001 C CNN
F 3 "" H 3850 3450 50  0001 C CNN
	1    3850 3450
	1    0    0    1   
$EndComp
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q4
U 1 1 5BD1A7B5
P 3850 4550
AR Path="/5B37E9AC/5BD1A7B5" Ref="Q4"  Part="1" 
AR Path="/5B388D26/5BD1A7B5" Ref="Q12"  Part="1" 
AR Path="/5B38A092/5BD1A7B5" Ref="Q20"  Part="1" 
AR Path="/5B38A0A2/5BD1A7B5" Ref="Q28"  Part="1" 
AR Path="/5B38E6EA/5BD1A7B5" Ref="Q36"  Part="1" 
AR Path="/5B38E6FA/5BD1A7B5" Ref="Q44"  Part="1" 
AR Path="/5B38E70A/5BD1A7B5" Ref="Q52"  Part="1" 
AR Path="/5B38E71A/5BD1A7B5" Ref="Q60"  Part="1" 
AR Path="/5BD1A7B5" Ref="Q28"  Part="1" 
F 0 "Q60" H 4055 4504 50  0000 L CNN
F 1 "ZVP3306A" H 3450 4400 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 4650 50  0001 C CNN
F 3 "" H 3850 4550 50  0001 C CNN
	1    3850 4550
	1    0    0    1   
$EndComp
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q5
U 1 1 5BD1A839
P 3850 5650
AR Path="/5B37E9AC/5BD1A839" Ref="Q5"  Part="1" 
AR Path="/5B388D26/5BD1A839" Ref="Q13"  Part="1" 
AR Path="/5B38A092/5BD1A839" Ref="Q21"  Part="1" 
AR Path="/5B38A0A2/5BD1A839" Ref="Q29"  Part="1" 
AR Path="/5B38E6EA/5BD1A839" Ref="Q37"  Part="1" 
AR Path="/5B38E6FA/5BD1A839" Ref="Q45"  Part="1" 
AR Path="/5B38E70A/5BD1A839" Ref="Q53"  Part="1" 
AR Path="/5B38E71A/5BD1A839" Ref="Q61"  Part="1" 
AR Path="/5BD1A839" Ref="Q29"  Part="1" 
F 0 "Q61" H 4055 5604 50  0000 L CNN
F 1 "ZVP3306A" H 3450 5500 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 5750 50  0001 C CNN
F 3 "" H 3850 5650 50  0001 C CNN
	1    3850 5650
	1    0    0    1   
$EndComp
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q6
U 1 1 5BD1A89B
P 3850 6750
AR Path="/5B37E9AC/5BD1A89B" Ref="Q6"  Part="1" 
AR Path="/5B388D26/5BD1A89B" Ref="Q14"  Part="1" 
AR Path="/5B38A092/5BD1A89B" Ref="Q22"  Part="1" 
AR Path="/5B38A0A2/5BD1A89B" Ref="Q30"  Part="1" 
AR Path="/5B38E6EA/5BD1A89B" Ref="Q38"  Part="1" 
AR Path="/5B38E6FA/5BD1A89B" Ref="Q46"  Part="1" 
AR Path="/5B38E70A/5BD1A89B" Ref="Q54"  Part="1" 
AR Path="/5B38E71A/5BD1A89B" Ref="Q62"  Part="1" 
AR Path="/5BD1A89B" Ref="Q30"  Part="1" 
F 0 "Q62" H 4055 6704 50  0000 L CNN
F 1 "ZVP3306A" H 3450 6600 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 6850 50  0001 C CNN
F 3 "" H 3850 6750 50  0001 C CNN
	1    3850 6750
	1    0    0    1   
$EndComp
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q7
U 1 1 5BD1A8FF
P 3850 7850
AR Path="/5B37E9AC/5BD1A8FF" Ref="Q7"  Part="1" 
AR Path="/5B388D26/5BD1A8FF" Ref="Q15"  Part="1" 
AR Path="/5B38A092/5BD1A8FF" Ref="Q23"  Part="1" 
AR Path="/5B38A0A2/5BD1A8FF" Ref="Q31"  Part="1" 
AR Path="/5B38E6EA/5BD1A8FF" Ref="Q39"  Part="1" 
AR Path="/5B38E6FA/5BD1A8FF" Ref="Q47"  Part="1" 
AR Path="/5B38E70A/5BD1A8FF" Ref="Q55"  Part="1" 
AR Path="/5B38E71A/5BD1A8FF" Ref="Q63"  Part="1" 
AR Path="/5BD1A8FF" Ref="Q31"  Part="1" 
F 0 "Q63" H 4055 7804 50  0000 L CNN
F 1 "ZVP3306A" H 3450 7700 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 7950 50  0001 C CNN
F 3 "" H 3850 7850 50  0001 C CNN
	1    3850 7850
	1    0    0    1   
$EndComp
$Comp
L ledrom-rescue:Q_PMOS_SGD-device Q8
U 1 1 5BD1A9AD
P 3850 8950
AR Path="/5B37E9AC/5BD1A9AD" Ref="Q8"  Part="1" 
AR Path="/5B388D26/5BD1A9AD" Ref="Q16"  Part="1" 
AR Path="/5B38A092/5BD1A9AD" Ref="Q24"  Part="1" 
AR Path="/5B38A0A2/5BD1A9AD" Ref="Q32"  Part="1" 
AR Path="/5B38E6EA/5BD1A9AD" Ref="Q40"  Part="1" 
AR Path="/5B38E6FA/5BD1A9AD" Ref="Q48"  Part="1" 
AR Path="/5B38E70A/5BD1A9AD" Ref="Q56"  Part="1" 
AR Path="/5B38E71A/5BD1A9AD" Ref="Q64"  Part="1" 
AR Path="/5BD1A9AD" Ref="Q32"  Part="1" 
F 0 "Q64" H 4055 8904 50  0000 L CNN
F 1 "ZVP3306A" H 3450 8800 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Inline_Narrow_Oval" H 4050 9050 50  0001 C CNN
F 3 "" H 3850 8950 50  0001 C CNN
	1    3850 8950
	1    0    0    1   
$EndComp
$EndSCHEMATC
