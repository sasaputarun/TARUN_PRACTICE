#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=(n-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",k);
		}
		for(int p=(k-2);p>=1;p--)
		{
			printf("%d",p);
		}
		
		printf("\n");
	}
}
