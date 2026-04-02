#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number");
	scanf("%u",&n);
	if((n&(n-1))==0)
	{
		printf("it is power of 2");
	}
	else
	{
		printf("it is not power of 2");
	}
	return 0;

}
