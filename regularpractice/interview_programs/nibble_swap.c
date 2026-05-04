#include<stdio.h>
int main()
{
	unsigned int n=0x1234;
	n=(n>>12)&0x000F|(n<<12)&0xF000|n&0x0FF0;
	printf("%x",n);
	return 0;
}

