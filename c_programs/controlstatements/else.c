#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("num = %d",&num);
	if(num>0)
		printf("positive number");
	else
		printf("negative number");
	return 0;
}
