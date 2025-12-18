#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	while((n&1)==0)
	{
		n=n>>1;
		count++;
	}
	printf("lowest set bit of a number :%d\n",count);
	return 0;	
}
