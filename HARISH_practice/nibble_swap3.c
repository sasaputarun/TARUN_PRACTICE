#include<stdio.h>
int main()
{
	unsigned int n=0x12;
	n=(n&0xF0)>>4|(n&0x0F)<<4;
	printf("after swapping:%x\n",n);
	return 0;
}
