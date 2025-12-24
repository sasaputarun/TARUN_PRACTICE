#include<stdio.h>
int main()
{
	int n,r;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the bit ,need to toggle:\n");
	scanf("%d",&r);
	n=(n^(1<<r));
	printf("after toggling the bit:%d\n",n);
	return 0;
}
