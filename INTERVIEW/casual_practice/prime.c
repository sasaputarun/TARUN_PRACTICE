#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if((n%i)==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("the given number is prime:\n");
	}
	else
	{
		printf("the given number is not primne:\n");
	}
}

