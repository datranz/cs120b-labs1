/*
 * [cslogin]_lab[1]_part[1].c
 *
 * Created: 7/30/2018 2:00:45 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA = 0X00;//INTITAT PORT A OUT=0000
	PORTA=0xFF;//CONFIG PORT A AS INPUTS
  	
	DDRB = 0xFF;//CONFIG PROT B'S 8 PINS AS OUTPUTS
	PORTB= 0x00;//INITIALIZE PORTB OUTP TO 0'S
	
	unsigned char garage = 0x00;
	unsigned char lightsensor = 0x00;
	unsigned char led=0x00;
	
	while (1) 
    {
			
		garage = PINA & 0x01;
		lightsensor = PINA & 0x02;
		led = PINB & 0x01;
		//if PA0 is set PB1PB0=01, else=10
		if ((garage==0x01){led=0x01};
			else {led=0x00};
		PORTB = led;
	}
	return 0;
}

