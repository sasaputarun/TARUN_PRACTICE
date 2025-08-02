#include<stdio.h>
int main()
{
	int n,i,rotateleftshift,rotaterightshift;
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter the shift count(i)");
	scanf("%d",&i);
	rotateleftshift=(n<<i)|(n>>(32-i))&0xFFFFFFFF;
	rotaterightshift=(n>>i)|(n<<(32-i))&0xFFFFFFFF;
	printf("leftshift:%d\n",rotateleftshift);
	printf("rightshift:%d\n",rotaterightshift);
}

