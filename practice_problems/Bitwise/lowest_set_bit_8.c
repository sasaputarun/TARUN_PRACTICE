#include<stdio.h>
int main()
{
	unsigned int n;
	int bits=0;
	printf("enter the number");
	scanf("%u",&n);
	while(n>0)
	{
		if(n&1)
		{
			printf("the lowest set bit at position:%d\n",bits);
			break;
		}
		else
		{
			n=n>>1;
			bits++;
		}
	}

}
