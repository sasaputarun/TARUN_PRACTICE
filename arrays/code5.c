#include<stdio.h>
int main()
{
	int i,arr2[5];
	int arr1[5]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
	arr2[i]=arr1[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr2[i]);
	}
}

