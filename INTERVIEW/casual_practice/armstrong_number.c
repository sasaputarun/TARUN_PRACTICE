#include<stdio.h>
#include<math.h>
int main()
{
	int n,digits=0,sum=0,rem=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	int x=n;
	while(n>0)
	{
		digits++;
		n=n/10;
	}
	n=x;
	printf("no of digits in a number:%d\n",digits);
	while(n>0)
	{
		rem=n%10;
		sum+=pow(rem,digits);
		n=n/10;
	}
	printf("%d",sum);
	if(sum==x)
	{
		printf("the given number is armstrong number:\n");
	}
	else
	{
		printf("the given number is not armstrong number:\n");
	}
	return 0;
}
