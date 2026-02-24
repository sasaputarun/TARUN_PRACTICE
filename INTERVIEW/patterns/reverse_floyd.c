#include<stdio.h>
int main()
{
	int n,i,j,r=10;
	printf("enter row size:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",r);
			r--;
		}
		printf("\n");
	}
}
