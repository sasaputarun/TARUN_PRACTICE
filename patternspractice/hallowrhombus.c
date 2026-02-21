#include<stdio.h>
int main()
{
        int i,j,n,k;
        printf("enter the row size");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
                for(k=1;k<=n;k++)
                {
			if(i==1||i==n|k==1||k==n)
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
                }
                printf("\n");
        }
}

