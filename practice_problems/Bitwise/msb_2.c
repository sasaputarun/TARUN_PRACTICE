#include<stdio.h>
int main()
{
	unsigned int  n;
	printf("enter the number:");
	scanf("%u",&n);
	if(n&(1U<<31))
	{
		printf("msb is set");
	}
	else
	{
		printf("msb is not set");
	}

}
