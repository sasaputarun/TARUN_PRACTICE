#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number");
	scanf("%u",&n);
	int r;
	printf("enter the bit");
	scanf("%d",&r);
	n=n^(1U<<r);
	printf("%u",n);
}

