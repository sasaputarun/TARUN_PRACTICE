#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number and shift");
	scanf("%d %d",&n,&i);
	n=n^(1<<i);
	printf("toggle the ith bit:%d",n);
	return 0;
}


