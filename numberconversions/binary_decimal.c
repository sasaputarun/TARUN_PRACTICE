#include<stdio.h>
int main()
{
	int decimal=0,remainder,base=1;
	long long n;
	printf("enter a binary number");
	scanf("%lld",&n);
	while(n>0)
	{
		remainder=n%10;
		decimal=decimal+remainder*base;
		n=n/10;
		base=base*2;
	}
	printf("%d",decimal);
	return 0;
}

