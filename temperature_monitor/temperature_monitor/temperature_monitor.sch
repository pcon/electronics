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
L Device:R R1
U 1 1 601ABC5A
P 3850 2600
F 0 "R1" V 3643 2600 50  0000 C CNN
F 1 "330" V 3734 2600 50  0000 C CNN
F 2 "" V 3780 2600 50  0001 C CNN
F 3 "~" H 3850 2600 50  0001 C CNN
	1    3850 2600
	0    1    1    0   
$EndComp
$Comp
L Device:R R1
U 1 1 601AC3CF
P 5900 2600
F 0 "R1" V 5693 2600 50  0000 C CNN
F 1 "330" V 5784 2600 50  0000 C CNN
F 2 "" V 5830 2600 50  0001 C CNN
F 3 "~" H 5900 2600 50  0001 C CNN
	1    5900 2600
	0    1    1    0   
$EndComp
$Comp
L Device:R R2
U 1 1 601AC76A
P 5650 2200
F 0 "R2" H 5720 2246 50  0000 L CNN
F 1 "4.7K" H 5720 2155 50  0000 L CNN
F 2 "" V 5580 2200 50  0001 C CNN
F 3 "~" H 5650 2200 50  0001 C CNN
	1    5650 2200
	1    0    0    -1  
$EndComp
$Comp
L MCU_Module:WeMos_D1_mini U?
U 1 1 601AF2C0
P 4800 3100
F 0 "U?" H 4800 2211 50  0000 C CNN
F 1 "WeMos_D1_mini" H 4800 2120 50  0000 C CNN
F 2 "Module:WEMOS_D1_mini_light" H 4800 1950 50  0001 C CNN
F 3 "https://wiki.wemos.cc/products:d1:d1_mini#documentation" H 2950 1950 50  0001 C CNN
	1    4800 3100
	1    0    0    -1  
$EndComp
$Comp
L Sensor_Temperature:DS18B20 U?
U 1 1 601B03CB
P 6450 3500
F 0 "U?" H 6220 3546 50  0000 R CNN
F 1 "DS18B20" H 6220 3455 50  0000 R CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 5450 3250 50  0001 C CNN
F 3 "http://datasheets.maximintegrated.com/en/ds/DS18B20.pdf" H 6300 3750 50  0001 C CNN
	1    6450 3500
	-1   0    0    -1  
$EndComp
$Comp
L Sensor_Temperature:DS18B20 U?
U 1 1 601B0B55
P 3300 3400
F 0 "U?" H 3070 3446 50  0000 R CNN
F 1 "DS18B20" H 3070 3355 50  0000 R CNN
F 2 "Package_TO_SOT_THT:TO-92_Inline" H 2300 3150 50  0001 C CNN
F 3 "http://datasheets.maximintegrated.com/en/ds/DS18B20.pdf" H 3150 3650 50  0001 C CNN
	1    3300 3400
	1    0    0    -1  
$EndComp
$Comp
L LED:WS2812B D?
U 1 1 601B1A02
P 6450 2600
F 0 "D?" H 6794 2646 50  0000 L CNN
F 1 "WS2812B" H 6794 2555 50  0000 L CNN
F 2 "LED_SMD:LED_WS2812B_PLCC4_5.0x5.0mm_P3.2mm" H 6500 2300 50  0001 L TNN
F 3 "https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf" H 6550 2225 50  0001 L TNN
	1    6450 2600
	1    0    0    -1  
$EndComp
$Comp
L LED:WS2812B D?
U 1 1 601B241D
P 3300 2600
F 0 "D?" H 3700 3000 50  0000 R CNN
F 1 "WS2812B" H 3800 2900 50  0000 R CNN
F 2 "LED_SMD:LED_WS2812B_PLCC4_5.0x5.0mm_P3.2mm" H 3350 2300 50  0001 L TNN
F 3 "https://cdn-shop.adafruit.com/datasheets/WS2812B.pdf" H 3400 2225 50  0001 L TNN
	1    3300 2600
	-1   0    0    -1  
$EndComp
Wire Wire Line
	6050 2600 6150 2600
Wire Wire Line
	4700 2300 4700 1950
Wire Wire Line
	4700 1950 5650 1950
Wire Wire Line
	6450 1950 6450 2300
Wire Wire Line
	6450 3200 6900 3200
Wire Wire Line
	6900 3200 6900 1950
Wire Wire Line
	6900 1950 6450 1950
Connection ~ 6450 1950
Wire Wire Line
	6450 2900 6000 2900
Wire Wire Line
	6000 2900 6000 3900
Wire Wire Line
	6000 3900 4800 3900
Wire Wire Line
	6450 3800 6450 3900
Wire Wire Line
	6450 3900 6000 3900
Connection ~ 6000 3900
Wire Wire Line
	5750 2600 5500 2600
Wire Wire Line
	5500 2600 5500 3400
Wire Wire Line
	5500 3400 5200 3400
Wire Wire Line
	5650 2050 5650 1950
Connection ~ 5650 1950
Wire Wire Line
	5650 1950 6450 1950
Wire Wire Line
	5200 3300 5650 3300
Wire Wire Line
	5650 3300 5650 2350
Wire Wire Line
	5650 3300 6150 3300
Wire Wire Line
	6150 3300 6150 3500
Connection ~ 5650 3300
Wire Wire Line
	3600 2600 3700 2600
Wire Wire Line
	4000 2600 4150 2600
Wire Wire Line
	4150 2600 4150 2200
Wire Wire Line
	4150 2200 5400 2200
Wire Wire Line
	5400 2200 5400 3200
Wire Wire Line
	5400 3200 5200 3200
Wire Wire Line
	4700 1950 3300 1950
Wire Wire Line
	3300 1950 3300 2300
Connection ~ 4700 1950
Wire Wire Line
	3600 3400 4300 3400
Wire Wire Line
	4300 3400 4300 4200
Wire Wire Line
	4300 4200 5650 4200
Wire Wire Line
	5650 4200 5650 3300
Wire Wire Line
	3300 2900 3900 2900
Wire Wire Line
	3900 2900 3900 3900
Wire Wire Line
	3900 3900 4800 3900
Connection ~ 4800 3900
Wire Wire Line
	3300 3700 3300 3900
Wire Wire Line
	3300 3900 3900 3900
Connection ~ 3900 3900
Wire Wire Line
	3300 3100 2750 3100
Wire Wire Line
	2750 3100 2750 1950
Wire Wire Line
	2750 1950 3300 1950
Connection ~ 3300 1950
$EndSCHEMATC
