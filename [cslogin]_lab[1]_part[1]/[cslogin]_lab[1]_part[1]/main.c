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
	
	unsigned char tempB = 0x00;
	unsigned char tempA = 0x00;
	while (1) 
    {
		//1 read inputs
		tempA = PINA & 0x01;
		//2 perform computation
		//if PA0 is set PB1PB0=01, else=10
		if (tempA==0x01)
			{tempB=(tempB & 0xFC)|0x01;}
		else {
			tempB = (tempB & 0xFC)| 0x01;
		}
		PORTB = tempB;
	}
	return 0;
}

