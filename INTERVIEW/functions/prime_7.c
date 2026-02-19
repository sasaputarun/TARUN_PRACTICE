#include<stdio.h>
int prime(int);
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if(prime(n))
	{
		printf("the given number is prime:\n");
	}
	else
	{
		printf("the given number is not prime:\n");
	}
}
int prime(int n)
{
	int count=0;
	for(int i=2;i<n;i++)
	{
		if((n%i)==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

