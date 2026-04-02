#include<stdio.h>
int main()
{
	unsigned int n,count=0;
	printf("enter the number");
	scanf("%u",&n);
	if((n&(n-1))==0)
	{
		while(n>0)
		{
			if((n&1)==0)
			{
				count++;
			}
			n=n>>1;
		}
		if((count%2)==0)
		{
			printf("it is power of 4");
		}
		else
		{
			printf("it is not power of 4");
		}
	}
	else
	{
		printf("it is not power of 4");
	}
	return 0;
}

