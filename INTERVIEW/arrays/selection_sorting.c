#include<stdio.h>
int main()
{
	int i,j;
	int arr[6]={3,5,7,4,2,6};
	for(i=0;i<(6-1);i++)
	{
		int min=i;
		for(j=i+1;j<6;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf(" %d",arr[i]);
	}
}
