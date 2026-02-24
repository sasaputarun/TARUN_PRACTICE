#include<stdio.h>
int main()
{
	int i,j,n,p=1;
	printf("enter row size:\n");
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

	
