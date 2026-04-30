#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("enter array size");
	scanf("%d",&n);
	int *arr=malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("memory allocation failed");
		return 1;
	}
	printf("enter array elemnts");
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	printf("displaying array created using dynamic allocation:");
	for(i=0;i<n;i++)
	{
		printf(" %d",*(arr+i));
	}
	free(arr);
	printf("\n");
	return 0;
}


