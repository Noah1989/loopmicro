EESchema Schematic File Version 4
EELAYER 26 0
EELAYER END
$Descr A4 11693 8268
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
L Connector:SD_Card J?
U 1 1 5D811C15
P 5250 3050
F 0 "J?" H 5250 3715 50  0000 C CNN
F 1 "10067847-001RLF" H 5250 3624 50  0000 C CNN
F 2 "" H 5250 3050 50  0001 C CNN
F 3 "http://portal.fciconnect.com/Comergent//fci/drawing/10067847.pdf" H 5250 3050 50  0001 C CNN
	1    5250 3050
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5D811D2A
P 4250 3600
F 0 "#PWR?" H 4250 3350 50  0001 C CNN
F 1 "GND" H 4255 3427 50  0000 C CNN
F 2 "" H 4250 3600 50  0001 C CNN
F 3 "" H 4250 3600 50  0001 C CNN
	1    4250 3600
	1    0    0    -1  
$EndComp
Wire Wire Line
	4350 3250 4250 3250
Wire Wire Line
	4250 3250 4250 3600
Wire Wire Line
	4350 2950 4250 2950
Wire Wire Line
	4250 2950 4250 3250
Connection ~ 4250 3250
Wire Wire Line
	6150 3250 6250 3250
Wire Wire Line
	6250 3250 6250 3350
Wire Wire Line
	6150 3150 6250 3150
Wire Wire Line
	6250 3150 6250 3250
Connection ~ 6250 3250
$Comp
L power:GND #PWR?
U 1 1 5D811E7D
P 6250 3350
F 0 "#PWR?" H 6250 3100 50  0001 C CNN
F 1 "GND" H 6255 3177 50  0000 C CNN
F 2 "" H 6250 3350 50  0001 C CNN
F 3 "" H 6250 3350 50  0001 C CNN
	1    6250 3350
	1    0    0    -1  
$EndComp
$EndSCHEMATC
