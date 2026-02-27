#include<stdio.h>
int main()
{
	int n,i;
	printf("enter array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0],sec_max=-1;
	for(i=1;i<6;i++)
	{
		if(arr[i]>max)
		{
			sec_max=max;
			max=arr[i];
		}
		else if(arr[i]>sec_max && arr[i]!=max)
		{
			sec_max=arr[i];
		}
	}
	printf("max element:%d\n",max);
	printf("second max element:%d\n",sec_max);

}
