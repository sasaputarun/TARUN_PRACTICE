#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter first array elements\n");
	int *ptr=(int*)malloc(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	int *ptr1=(int*)malloc(n);
	printf("copying first array elements into second array\n");
	for(i=0;i<n;i++)
	{
		 *(ptr1+i)=*(ptr+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr1+i));
	}
	free(ptr);
	free(ptr1);
	return 0;
}
              
		



