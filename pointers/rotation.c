#include<stdio.h>
int main()
{
	int n,i,k;
	printf("enter the array size:\n");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	int arr1[n];
	int *ptr1=arr1;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("enter the position");
	scanf("%d",&k);
	k=k%n;
	for(i=0;i<k;i++)
	{
		*(ptr1+i)=*(ptr+i);
	}
	for(i=0;i<n-k;i++)
	{
		*(ptr+i)=*(ptr+(k+i));
	}
	for(i=0;i<k;i++)
	{
		*(ptr+(n-k+i))=*(ptr1+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
	return 0;
}

