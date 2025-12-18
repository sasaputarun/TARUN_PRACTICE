#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the bit ,want to toggle:\n");
	scanf("%d",&p);
	n=(n^(1<<p));
	printf("after toggling:%d\n",n);
	return 0;
}
