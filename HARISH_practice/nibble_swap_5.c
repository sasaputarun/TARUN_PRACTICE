#include<stdio.h>
int main()
{
	unsigned int n=0x1234;
	n=(n&0x000F)<<12|(n&0x00F0)<<4|(n&0x0F00)>>4|(n&0xF000)>>12;
	printf("after swapping:%X",n);
}

