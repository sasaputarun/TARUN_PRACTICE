#include<stdio.h>
int main()
{
	int n,i,j,r;
	printf("enter array size");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter no of roations:");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		int temp=arr[n-1];
		for(j=(n-1);j>0;j--)
		{
			arr[j]=arr[j-1];
		}
		arr[0]=temp;
	}
	printf("after right rotation:\n");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	printf("\n");
	return 0;
}


