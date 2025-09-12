#include<stdio.h>
int main()
{
	int m=0,n;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		if((n&1)==1)
		{
			m++;
		}
		n=n>>2;
	}
	if(m==1)
	{
		printf("the given number is power of 4");
	}
	else
	{
		printf("the given numberis not power of 4");
	}
	return 0;
}
	
			
	
