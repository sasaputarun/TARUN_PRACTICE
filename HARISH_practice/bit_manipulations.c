#include<stdio.h>
int main()
{
	unsigned int n;
	int r;
	printf("enter the number");
	scanf("%u",&n);
	printf("enter the bit to change");
	scanf("%d",&r);
//	n=n|(1U<<r);
//	n=n&~(1U<<r);
	n=n^(1U<<r);
	printf("after bit manipulation:%u\n",n);
	return 0;
}
