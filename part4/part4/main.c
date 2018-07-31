/*
 * part4.c
 *
 * Created: 7/31/2018 2:35:02 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
  DDRA=0x00;	PORTA=0xFF;
  DDRB=0x00;	PORTB=0xFF;
  DDRC-0x00;	PORTC=0xFF;
  DDRD=0xFF;	PORTD=0x00;
  
  unsigned char weightA =0x00;
  unsigned char weightB =0x00;
  unsigned char weightC =0x00;
  unsigned char tempD1 =0x00;
  unsigned char	tempD2 =0x00;
  unsigned char estimate =0x00;
while (1) 
	{
	weightA = PINA;
	weightB = PINB;
	weightC = PINC;
	
	unsigned sum = weightA+weightB+weightC;
	if (sum>140){tempD1 =0x01;}
	if ((weightA-weightC)>80||(weightC-weightA)>80){tempD2=0x02;)	
	
	estimate=sum/4;
	estimate=estimate<<2;
	PORTD=estimate|tempD1|tempD2;
	
    }
	return 0;
	
}

