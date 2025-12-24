#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if(n&(1<<31))
	{
		printf("the nth bit of a number is set:\n");
	}
	else
	{
		printf("the nth bit of a number is reset:\n");
	}
}
