#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number:\n");
	scanf("%u",&n);
	if(n&1)
	{
		printf("the given number is odd");
	}
	else
	{
		printf("the given number is even");
	}
	return 0;
}
