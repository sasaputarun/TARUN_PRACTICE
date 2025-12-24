#include<stdio.h>
int main()
{
	int n,r;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the bit which is need to set(bit starts from 0)");
	scanf("%d",&r);
	n=(n|(1<<r));
	printf("the after set nth bit of a number:%d\n",n);
	return 0;
}

	


