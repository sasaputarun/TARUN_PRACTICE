#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	int original=n,rem=0,rev=0;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(original==rev)
	{
		printf("the given num is palindrome");
	}
	else
	{
		printf("the given num is not palindrome");
	}
	return 0;
}
