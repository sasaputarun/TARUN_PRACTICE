#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if(n&(1<<31))
	{
		printf("the MSB of a given number is set:\n");
	}
	else
	{
		printf("the MSB of a given number is reset:\n");
	}
}

