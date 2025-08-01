#include<stdio.h>
int main()
{
	int n,i,leftshift,rightshift;
	printf("enter a number:");
	scanf("%d",&n);
	printf("enter the shift count(i)");
	scanf("%d",&i);
	leftshift=n<<i;
	rightshift=n>>i;
	printf("leftshift:%d\n",leftshift);
	printf("rightshift:%d\n",rightshift);
}

