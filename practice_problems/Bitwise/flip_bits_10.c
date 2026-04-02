#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number");
	scanf("%u",&n);
	n=~(n);
	printf("after flipping the bits:%u\n",n);
}
