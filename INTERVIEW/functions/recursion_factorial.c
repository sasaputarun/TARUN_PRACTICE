#include<stdio.h>
int factorial(int n)
{
	if((n==0)||(n==1))
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}

}
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("the factorial of a given number:%d\n",factorial(n));
}

