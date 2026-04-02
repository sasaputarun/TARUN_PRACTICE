#include<stdio.h>
int main()
{
	int bits=-1;
	unsigned int n;
	printf("enter the number");
	scanf("%u",&n);
	while(n>0)
	{
		bits++;
		n=n>>1;
	}
	printf("the highest set bit at position:%d\n",bits);
}

