/*
 * trafficLight.c
 *
 * Created: 02/12/2017 12:36:50 PM
 * Author : mahir
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0xff;	// Set all Port D pins as outputs
	
	while(1)
	{
		PORTD = (1 << PD2);
		_delay_ms(1000);
		PORTD = (1 << PD3);
		_delay_ms(1000);
		PORTD = (1 << PD4);
		_delay_ms(1000);
		PORTD = (1 << PD3);
		_delay_ms(1000);
	}
  
    return 0;
}
