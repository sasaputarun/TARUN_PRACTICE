#include<stdio.h>
int main()
{
	unsigned int n,rev=0;
	printf("enter a number");
	scanf("%u",&n);
	int size=8;
	for(int i=0;i<size;i++)
	{
		rev=(rev<<1)|(n&1);
		n=n>>1;
	}
	printf("%u",rev);
}
