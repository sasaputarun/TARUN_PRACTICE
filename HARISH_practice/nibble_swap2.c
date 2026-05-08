#include<stdio.h>
int main()
{
	unsigned int n=0xBA;
	n=(n&0xF0)>>4|(n&0x0F)<<4;
	printf("nibble swap:%x\n",n);
	return 0;
}
