#include<stdio.h>
int main()
{
	int i,sum=0;
	int arr[5]={1,2,3,4,8};
	int *ptr=arr;
	for(i=0;i<5;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("sum of array elements:%d\n",sum);
	return 0;
}

