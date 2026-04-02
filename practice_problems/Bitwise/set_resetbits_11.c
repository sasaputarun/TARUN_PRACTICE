#include<stdio.h>
int main()
{
	int setbits=0,resetbits=0;
	unsigned int n;
	printf("enter the number:");
	scanf("%u",&n);
	while(n>0)
	{
		if(n&1)
		{
			setbits++;
		}
		else
		{
			resetbits++;
		}
		n=n>>1;
	}
	printf("no of set bits:%d\n",setbits);
	printf("no of resetbits:%d\n",resetbits);
	return 0;
}
