/*
 * trafficLight.c
 *
 * Created: 02/14/2017 02:24:55 AM
 * Author : mahir
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0xff;	// Set all Port D pins as outputs
	
	while(1)
	{
		PORTD = 0b11111011;   // PD2 Active LOW
		_delay_ms(1000);
		PORTD = 0b11110111;   // PD3 Active LOW
		_delay_ms(1000);
		PORTD = 0b11101111;   // PD4 Active LOW
		_delay_ms(1000);
	}
    
    return 0;
}
