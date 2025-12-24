#include<stdio.h>
int main()
{
	int n,setbits=0,resetbits=0;
	printf("enter the number:\n");
	scanf("%d",&n);
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
	printf("no of ones in binary:%d\n",setbits);
	printf("no of zeroes in binary:%d\n",resetbits);
	return 0;
}
