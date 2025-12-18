#include<stdio.h>
int main()
{
	int n,count=-1;
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		n=n>>1;
		count++;
	}
	printf("the highest set bit of a number:%d\n",count);
	return 0;
}
