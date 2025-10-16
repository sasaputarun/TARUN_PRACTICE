#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the array size");
	scanf("%d",&n);
	int arr[n];
  	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int neg[15];
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			neg[count]=arr[i];
			count++;
		}
	}
	printf("printing the negative elements\n");
	for(i=0;i<count;i++)
	{
		printf("%d ",neg[i]);
	}
	return 0;
}

