#include<stdio.h>
int main()
{
	unsigned int  n;
	int r;
	printf("enter the number");
	scanf("%u",&n);
	printf("enter the bit to know");
	scanf("%d",&r);
	if(n&(1U<<r))
	{
		printf("the nth bit is set");
	}
	else
	{
		printf("the nth bit is not set");
	}
}

