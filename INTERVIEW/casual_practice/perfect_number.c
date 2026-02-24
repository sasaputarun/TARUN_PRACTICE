#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if((n%i)==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("given number is perfect number:\n");
	}
	else
	{
		printf("the given number is not perfect number:\n");
	}
}
