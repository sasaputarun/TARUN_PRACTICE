#include<stdio.h>
int main()
{
	int n,rem;
	printf("enter the number");
	scanf("%d",&n);
	int original=n,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(rev==original)
	{
		printf("the given number is palindrome");
	}
	else
	{
		printf("the given number is not palindrome");
	}
	return 0;
}


