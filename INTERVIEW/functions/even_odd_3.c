#include<stdio.h>
void checking(int n);
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	checking(n);
}
void checking(int n)
{
	if((n%2)==0)
	{
		printf("the given number is even:\n");
	}
	else
	{
		printf("the given number is odd:\n");
	}
}
