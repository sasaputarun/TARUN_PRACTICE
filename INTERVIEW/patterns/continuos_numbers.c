#include<stdio.h>
int main()
{
	int n,i,j,p=1;
	printf("enter no of rows:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",p);
			p++;
		}
		printf("\n");
	}
}

