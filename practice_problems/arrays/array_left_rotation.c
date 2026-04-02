#include<stdio.h>
int main()
{
	int n,i,r,j;
	printf("enter array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter no of rotations to left");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		int temp=arr[0];
		for(j=0;j<(n-1);j++)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}
	printf("after array rotation to left,the array will be");
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
}

