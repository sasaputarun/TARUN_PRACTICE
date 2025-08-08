#include<stdio.h>
int main()
{
	int n,i;
	printf("enter a number");
	scanf("%d",&n);
	printf("enter the shift");
	scanf("%d",&i);
	if(n&(1<<i)){
		printf("ith bit is set:%d",i);
	}
	else
	{
		printf("ith bit is not set:%d",i);
	}
	return 0;
}
