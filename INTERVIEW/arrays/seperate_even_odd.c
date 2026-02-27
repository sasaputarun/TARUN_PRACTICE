#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter array size:\n");
	scanf("%d",&n);
	int arr[n],even[n],odd[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count1=0,count2=0;
	for(i=0;i<n;i++)
	{
		if((arr[i]%2)==0)
		{
			even[count1]=arr[i];
			count1++;
		}
		else
		{
			odd[count2]=arr[i];
			count2++;
		}
	}
	printf("print even array:\n");
	for(i=0;i<count1;i++)
	{
		printf(" %d",even[i]);
	}
	printf("printing odd array:\n");
	for(j=0;j<count2;j++)
	{
		printf(" %d",odd[j]);
	}
}
