#include<stdio.h>
int main()
{
	unsigned int n=0x1234;
	n=(((n<<8)&(0xff00))|((n>>8)&(0x00ff)));
	printf("after byte swapping: %x",n);
	return 0;
}
