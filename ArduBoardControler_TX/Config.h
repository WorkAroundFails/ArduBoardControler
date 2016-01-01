// Config.h

/*
Copyright 2015 - 2017 Andreas Chaitidis Andreas.Chaitidis@gmail.com

This program is free software : you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.If not, see <http://www.gnu.org/licenses/>.

*/

// Config TX

#ifndef _CONFIG_h
#define _CONFIG_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

// Definition of Pipe

const uint64_t pipe = 0xE8E8F0F0E1LL;

//Pin definition

//**for Mega2560
#ifdef __AVR_ATmega2560__ 

#define JOY_X				A0
#define JOY_Y				A1
#define UPPER_BUTTON		6	
#define LOWER_BUTTON		5

#endif

//**for Arduino ATmega328p (Nano)

#ifdef ARDUINO_AVR_NANO
#define JOY_X				A0
#define JOY_Y				A1
#define UPPER_BUTTON		2	
#define LOWER_BUTTON		3
#define VOLTAGE_PIN				A2
#define LED_PIN				4
#define VIBRATOR_PIN		5
#define DEBUGSERIAL Serial
#define SERIALIO Serial
#endif

#define DEBUG

//Define voltage controll setting

#define LIPO

#ifdef LIPO

#define MINVOLRANGE 3.3
#define MAXVOLRANGE 4.25
#define MAXNUMBERCELLS	10

#endif

//TX Voltage measurement
#define VOLTAGE_DIVISOR_TX	102.5

//WS2812 settings

#define NUM2812		4
#define BRIGHTNESS	10
#define LED_TX		0
#define LED_TRANS	1	//Transmission
#define LED_VOLTAGE	2

//setting Vibrator

#define STRENGTH	255	//0-255
#define PULS		150 //ms



////Define remote Package
//
//struct remotePackage {
//	
//	int		valXJoy;
//	int		valYJoy;
//	boolean	valUpperButton;
//	boolean	valLowerButton;
//	
//} ; >> moved to datatypes.h in lib VescUartControl

struct calcValues {
	int numberCellsVesc = 0;
	int numberCellsTx = 0;
};

#endif


