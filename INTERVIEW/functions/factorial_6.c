#include<stdio.h>
int factorial(int);
int main()
{
	int n;
	printf("enter the number you want to find factorial:\n");
	scanf("%d",&n);
	printf("the factorial of a given number:%d\n",factorial(n));
	return 0;
}
int factorial(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

