#include<stdio.h>
int main()
{
	int count=0,n;
	printf("enter the number");
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
		printf("given num is prime");
	}
	else
	{
		printf("given num is not prime");
	}
	return 0;
}
		
