#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter 16 bit number");
	scanf("%u",&n);
	if(n&(0x8000))
	{
		printf("msb is set");
	}
	else
	{
		printf("msb is not set");
	}
	return 0;
}
