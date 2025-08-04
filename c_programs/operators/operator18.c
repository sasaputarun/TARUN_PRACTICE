#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	(num>0)?printf("the number is positive"):
	(num<0)?printf("the number is negative"):printf("the number is zero");
	return 0;
}
