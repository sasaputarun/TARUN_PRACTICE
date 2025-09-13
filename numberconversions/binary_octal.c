#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	int remainder,decimal=0,base=1,power=0;
	int octal[10],i=0;
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
		octal[i]=decimal%8;
		decimal=decimal/8;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
	printf("%d",octal[j]);
	}
	printf("\n");
	return 0;
}


		


	
