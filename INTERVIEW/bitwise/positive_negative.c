#include<stdio.h>
int main()
{
	short int n;
	printf("enter the 16bit number:\n");
	scanf("%hd",&n);
	if(n&0x8000)
	{
		printf("negative number:\n");
	}
	else
	{
		printf("positive number:\n");
	}
}
