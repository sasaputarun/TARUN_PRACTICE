#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the bit,which is need clear:\n");
	scanf("%d",&p);
	n=(n&(~(1<<p)));
	printf("%d",n);
	return 0;
}

