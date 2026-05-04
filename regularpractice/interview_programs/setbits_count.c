#include<stdio.h>
int main()
{
	unsigned int n;
	int count=0;
	printf("enter the number");
	scanf("%u",&n);
	while(n>0)
	{
		if(n&1)
		{
			count++;
		}
		n=n>>1;
	}
	printf("no of set bits:%d\n",count);
}

