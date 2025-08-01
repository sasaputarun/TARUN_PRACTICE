#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num&1==1){
		printf("it is odd");
	}
	else
	{
		printf("it is even");
	}
	return 0;
}

