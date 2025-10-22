#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the array size\n");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	printf("enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	int ch;
	printf("enter the element you want to search");
	scanf("%d",&ch);
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)==ch)
		{
		 printf("the entered element is found\n");
		 count++;
		 break;
		}

	}
	if(count==0)
	{
		printf("the element is not found\n");
	}
        

	return 0;
}

