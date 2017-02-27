/*
 * trafficLight.c
 *
 * Created: 02/12/2017 12:26:50 PM
 * Author : mahir
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0xff;    // Set all Port D pins as outputs

	while(1)
	{
		PORTD = 0b00000100;	// Only PD2 (RED) Active HIGH
		_delay_ms(1000);	// delay 1 sec
		PORTD = 0b00001000;	// Only PD3 (YELLOW) Active HIGH
		_delay_ms(1000);
		PORTD = 0b00010000;	// Only PD4 (GREEN) Active HIGH
		_delay_ms(1000);
		PORTD = 0b00001000;	// Only PD3 (YELLOW) Active HIGH
		_delay_ms(1000);
	}
    return 0;
}
