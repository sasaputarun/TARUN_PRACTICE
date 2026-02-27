#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}

		}
		int freq=count;
		int count2=0;

		for(j=1;j<i;j++)
		{
			
			if(arr[j]==arr[i])
			{
				count2++;
			}
		}
		if(count2==0)
		{
			printf("number :%d frequency:%d\n",arr[i],freq);
		}
	}
}




