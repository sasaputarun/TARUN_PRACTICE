#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter row size:\n");
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		int r=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",r);
			r--;
		}
		printf("\n");
	}
}
