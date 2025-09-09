#include<stdio.h>
int main()
{
	int decimal=0,n,remainder,base=1;
	int octal;
	printf("enter a octal number");
	scanf("%o",&octal);
	while(octal>0)
	{
		remainder=octal%10;
		decimal=decimal+remainder*base;
		octal=octal/10;
		base=base*8;
	}
	printf("%d",decimal);
	return 0;
}

