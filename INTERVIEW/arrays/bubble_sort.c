#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter array size:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf(" %d",&arr[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-1-i);j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}

		}
	}
	for(j=0;j<n;j++)
	{
		printf(" %d",arr[j]);
	}

}
