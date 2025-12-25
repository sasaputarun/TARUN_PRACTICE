#include<stdio.h>
int main()
{
	int a=1,b=1,c,n;
	printf("enter the limit:\n");
	scanf("%d",&n);
	while(a<n)
	{
		printf(" %d",a);
		c=a+b;
		a=b;
		b=c;
	}
}

