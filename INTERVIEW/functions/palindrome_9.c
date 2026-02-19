#include<stdio.h>
void palindrome(int);
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	palindrome(n);
}
void palindrome(int n)
{
	int rem,rev=0;
	int original=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(original==rev)
	{
		printf("the given number is palindrome:\n");
	}
	else
	{
		printf("the given number is not a palindrome:\n");
	}
}
