#include<stdio.h>
int main()
{
	int n,bit=-1;
	printf("enter the given number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n>>1;
		bit++;
	}
	printf("the highest set bit at %d bit",bit);
}


