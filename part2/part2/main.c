/*
 * part2.c
 *
 * Created: 7/31/2018 2:08:25 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA=0x00; PORTA=0xFF;
	DDRC=0xFF;	PORTC=0x00;
	
	unsigned char cntavail=4;// total sapce
	
    /* Replace with your application code */
    while (1) 
    {
		if(PINA==0x01){cntavail=cntavail-1;}
		if(PINA==0x02){cntavail=cntavail-1;}
		if(PINA==0x04){cntavail=cntavail-1;}
		if(PINA==0x08){cntavail=cntavail-1;}
			PORTC=cntavail;
		return 0;
    }
}

