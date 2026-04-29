#include<stdio.h>
int main()
{
	unsigned int n;
	int bit1_pos,bit2_pos;
	printf("enter the exa decimal number:");
	scanf("%x",&n);
	printf("enter the bit positions");
	scanf("%d %d",&bit1_pos,&bit2_pos);
	int bit1_val=(n>>bit1_pos)&1;
	int bit2_val=(n>>bit2_pos)&1;
	if(bit1_val!=bit2_val)
	{
		 n=n^(1U<<bit1_pos);
		n=n^(1U<<bit2_pos);
	}
	printf("after swapping:%x",n);
	return 0;

}
