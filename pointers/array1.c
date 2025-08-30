#include<stdio.h>
int main()
{
	int i,n;
	printf("enter array size\n");
	scanf("%d\n",&n);
	int arr[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int *p=arr;
	printf("printing array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}
				
	




