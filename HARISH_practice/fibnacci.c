#include<stdio.h>
int fibnacci(int n)
{
	if(n<=1)
	{
		return n;
	}
	return fibnacci(n-1)+fibnacci(n-2);
}
int main()
{
	int n;
	printf("enter no of terms");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	printf(" %d",fibnacci(i));
	return 0;
}
