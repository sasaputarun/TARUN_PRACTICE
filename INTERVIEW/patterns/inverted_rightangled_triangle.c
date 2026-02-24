#include<stdio.h>
int main()
{
	int n;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	for(int j=n;j>0;j--)
	{
		for(int i=1;i<=j;i++)
		{
			printf("*");
		}
		printf("\n");
	}
}
