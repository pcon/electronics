EESchema Schematic File Version 4
EELAYER 30 0
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
L Connector_Generic:Conn_01x08 J2
U 1 1 61993EA7
P 3650 2400
F 0 "J2" H 3750 2700 50  0000 L CNN
F 1 "D1 Mini" H 3750 2600 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x08_P2.54mm_Vertical" H 3650 2400 50  0001 C CNN
F 3 "~" H 3650 2400 50  0001 C CNN
	1    3650 2400
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x08 J3
U 1 1 619943AB
P 4300 2400
F 0 "J3" H 4400 2100 50  0000 C CNN
F 1 "D1 Mini" H 4500 2000 50  0000 C CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x08_P2.54mm_Vertical" H 4300 2400 50  0001 C CNN
F 3 "~" H 4300 2400 50  0001 C CNN
	1    4300 2400
	-1   0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x04 J1
U 1 1 6199572C
P 3650 3350
F 0 "J1" H 3750 3450 50  0000 L CNN
F 1 "0.91 OLED" H 3750 3350 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x04_P2.54mm_Vertical" H 3650 3350 50  0001 C CNN
F 3 "~" H 3650 3350 50  0001 C CNN
	1    3650 3350
	1    0    0    -1  
$EndComp
$Comp
L Connector_Generic:Conn_01x04 J4
U 1 1 61995AF2
P 4450 3250
F 0 "J4" V 4450 2950 50  0000 R CNN
F 1 "0.96 OLED" V 4350 2950 50  0000 R CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x04_P2.54mm_Vertical" H 4450 3250 50  0001 C CNN
F 3 "~" H 4450 3250 50  0001 C CNN
	1    4450 3250
	0    -1   -1   0   
$EndComp
$Comp
L Mechanical:MountingHole_Pad H1
U 1 1 6199AA0F
P 5400 2200
F 0 "H1" H 5500 2249 50  0000 L CNN
F 1 "MountingHole_Pad" H 5500 2158 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_Pad" H 5400 2200 50  0001 C CNN
F 3 "~" H 5400 2200 50  0001 C CNN
	1    5400 2200
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0101
U 1 1 6199B6F1
P 3050 2200
F 0 "#PWR0101" H 3050 1950 50  0001 C CNN
F 1 "GND" H 3055 2027 50  0000 C CNN
F 2 "" H 3050 2200 50  0001 C CNN
F 3 "" H 3050 2200 50  0001 C CNN
	1    3050 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	3450 2200 3050 2200
$Comp
L Mechanical:MountingHole_Pad H2
U 1 1 6199E120
P 5400 2500
F 0 "H2" H 5500 2549 50  0000 L CNN
F 1 "MountingHole_Pad" H 5500 2458 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_Pad" H 5400 2500 50  0001 C CNN
F 3 "~" H 5400 2500 50  0001 C CNN
	1    5400 2500
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H3
U 1 1 619A0244
P 6300 2200
F 0 "H3" H 6400 2249 50  0000 L CNN
F 1 "MountingHole_Pad" H 6400 2158 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_Pad" H 6300 2200 50  0001 C CNN
F 3 "~" H 6300 2200 50  0001 C CNN
	1    6300 2200
	1    0    0    -1  
$EndComp
$Comp
L Mechanical:MountingHole_Pad H4
U 1 1 619A2170
P 6300 2500
F 0 "H4" H 6400 2549 50  0000 L CNN
F 1 "MountingHole_Pad" H 6400 2458 50  0000 L CNN
F 2 "MountingHole:MountingHole_3.2mm_M3_Pad" H 6300 2500 50  0001 C CNN
F 3 "~" H 6300 2500 50  0001 C CNN
	1    6300 2500
	1    0    0    -1  
$EndComp
NoConn ~ 6300 2300
NoConn ~ 6300 2600
NoConn ~ 5400 2600
NoConn ~ 5400 2300
Text GLabel 3450 2100 0    50   Input ~ 0
5V
Text GLabel 3450 3450 0    50   Input ~ 0
5V
$Comp
L power:GND #PWR0102
U 1 1 619A52E0
P 3450 3550
F 0 "#PWR0102" H 3450 3300 50  0001 C CNN
F 1 "GND" H 3455 3377 50  0000 C CNN
F 2 "" H 3450 3550 50  0001 C CNN
F 3 "" H 3450 3550 50  0001 C CNN
	1    3450 3550
	1    0    0    -1  
$EndComp
Text GLabel 4350 3450 3    50   Input ~ 0
5V
$Comp
L power:GND #PWR0103
U 1 1 619A6374
P 4450 3450
F 0 "#PWR0103" H 4450 3200 50  0001 C CNN
F 1 "GND" H 4455 3277 50  0000 C CNN
F 2 "" H 4450 3450 50  0001 C CNN
F 3 "" H 4450 3450 50  0001 C CNN
	1    4450 3450
	1    0    0    -1  
$EndComp
Text GLabel 3450 2400 0    50   Input ~ 0
D3
Text GLabel 3450 2500 0    50   Input ~ 0
D2
Text GLabel 3450 2600 0    50   Input ~ 0
D1
Text GLabel 3450 3250 0    50   Input ~ 0
D1
Text GLabel 4650 3450 3    50   Input ~ 0
D1
Text GLabel 3450 3350 0    50   Input ~ 0
D2
Text GLabel 4550 3450 3    50   Input ~ 0
D2
$Comp
L Connector_Generic:Conn_01x03 J5
U 1 1 619B8627
P 2950 3350
F 0 "J5" H 3030 3392 50  0000 L CNN
F 1 "DHT11" H 3030 3301 50  0000 L CNN
F 2 "Connector_PinSocket_2.54mm:PinSocket_1x03_P2.54mm_Vertical" H 2950 3350 50  0001 C CNN
F 3 "~" H 2950 3350 50  0001 C CNN
	1    2950 3350
	1    0    0    -1  
$EndComp
Text GLabel 2750 3250 0    50   Input ~ 0
5V
$Comp
L power:GND #PWR0104
U 1 1 619BB65E
P 2750 3450
F 0 "#PWR0104" H 2750 3200 50  0001 C CNN
F 1 "GND" H 2755 3277 50  0000 C CNN
F 2 "" H 2750 3450 50  0001 C CNN
F 3 "" H 2750 3450 50  0001 C CNN
	1    2750 3450
	1    0    0    -1  
$EndComp
Text GLabel 2750 3350 0    50   Input ~ 0
D3
$EndSCHEMATC
