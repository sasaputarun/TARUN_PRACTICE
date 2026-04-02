#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n&1)
	{
		printf("lsb is set bit");
	}
	else
	{
	printf("lsb is not set");
	}
}	
