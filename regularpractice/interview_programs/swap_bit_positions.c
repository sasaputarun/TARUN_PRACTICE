#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number:");
	scanf("%u",&n);
	int bitpos1=1,bitpos2=3;
	int bit_val1=(n>>bitpos1)&1;
	int bit_val2=(n>>bitpos2)&1;
	if(bit_val1!=bit_val2)
	{
		n=n^(1U<<bitpos1);
		n=n^(1U<<bitpos2);
	}
	printf("%u",n);
}

