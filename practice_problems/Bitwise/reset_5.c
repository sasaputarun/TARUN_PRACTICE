#include<stdio.h>
int main()
{
	unsigned int n;
	int r;
	printf("enter a number");
	scanf("%u",&n);
	printf("enter the bit");
	scanf("%d",&r);
	n=n&~(1U<<r);
	printf("%u",n);
}

