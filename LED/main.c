#include <reg52.h>
#include <intrins.h>

#define uint unsigned int
#define uchar unsigned char

void delay(int xms)
{
    uint i, j;
    for (i=0; i<xms; i++)
    {
		for (j=0; j<110; j++)
		{
		}
    }	

}
void main()
{
	uint sig = 0x01;
	while(1)
	{
	    P2 = sig;
		delay(100);
		sig = _crol_(sig,1);
	}
}