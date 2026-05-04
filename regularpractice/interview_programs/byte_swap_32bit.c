#include<stdio.h>
int main()
{
	unsigned int n=0x12345678;
	n=((n>>16)&0x000000FF)|((n<<16)&0x00FF0000)|n&(0xFF00FF00);
	printf("%x",n);
}
