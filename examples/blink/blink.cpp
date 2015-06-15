/*
 * blink.cpp
 * Example project for the Arduino debugger.
 * Blinks the LED on Arduino Uno board.
 * For instructions on use please see doc\avr_debug.pdf
 *
 *  Created on: 11. 6. 2015
 *  Author: Jan Dolinay
 */
#include "arduino.h"
#include "avr8-stub.h"

void setup(void)
{
	debug_init();	// initialize the debugger
	pinMode(13, OUTPUT);
}

void loop(void)
{
	breakpoint();		// stop execution here
	digitalWrite(13, HIGH);
	delay(200);
	digitalWrite(13, LOW);
	delay(500);
}
