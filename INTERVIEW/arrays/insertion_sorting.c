#include<stdio.h>
int main()
{
	int i;
	int arr[6]={5,3,7,2,9,8};
	for(i=1;i<6;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	for(i=0;i<6;i++)
	{
		printf("%d",arr[i]);
	}
}
