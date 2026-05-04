#include<stdio.h>
int main()
{
	unsigned int n=0x6789;
	n=((n>>8)&0x00FF)|((n<<8)&0xFF00);
	printf("after byte swapping:%x\n",n);
}

