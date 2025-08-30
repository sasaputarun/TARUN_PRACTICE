#include<stdio.h>
int main()
{
	int i,j,arr[5]={2,6,8,33,9};
	int *ptr=arr;
	int max=*ptr;
	int *ptr1=&arr[4];
	int min=*ptr1;
	for(j=1;j<5;j++)
	{
		ptr++;
		if(max<*ptr)
		{
			int temp=max;
			max=*ptr;
			*ptr=temp;
		}

	}
	printf("maximum element:%d\n",max);
	for(i=3;i>=0;i--)
	{
		ptr1--;
		if(min>*ptr1)
		{
			int temp1=min;
			min=*ptr1;
			*ptr1=min;
		}
	}
	printf("minimum element:%d\n",min);
	return 0;
}


