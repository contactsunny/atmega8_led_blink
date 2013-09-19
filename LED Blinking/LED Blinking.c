#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 1000000UL

void wait(float x)
{
	for(int i=0;i<(int)(x*1302);i++)
	_delay_loop_1(0);
}


main()
{
	DDRD=0xFF;// PORT B as output port
	while(1)
	{
		PORTD=0b0000000;
		wait(1);
		PORTD=0b00000010;
		wait(1);
	}
}