#include<stdio.h>
int main()
{
	int i,j,n,num=1;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",num);
			num++;
		}
		printf("\n");
	}
}
