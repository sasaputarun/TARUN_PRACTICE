#include<stdio.h>
int main()
{
	int n,r;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter bit want to reset(bit satrts from 0):\n");
	scanf("%d",&r);
	n=n&(~(1<<r));
	printf("after reset the bit,the number will be:%d\n",n);
}

