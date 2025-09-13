#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	int remainder,decimal=0,base=1,power=0;
	int hexa[16],i=0;
	printf("enter a binary number");
	scanf("%lld",&n);
	while(n>0)
	{
		remainder=n%10;
		decimal=decimal+remainder*pow(2,power);
		n=n/10;
		power++;
	}
	while(decimal>0)
	{
		hexa[i]=decimal%16;
		decimal=decimal/16;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
	printf("%d",hexa[j]);
	}
	printf("\n");
	return 0;
}
