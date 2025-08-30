#include<stdio.h>
int main()
{
	int i=0,j=4;
	int arr[5]={1,2,3,4,5};
	int *p =arr;	
	while(i<j)
	{
		int temp=*(p+i);
		*(p+i)=*(p+j);
		*(p+j)=temp;
		i++;
		j--;
	}
	printf("array reversal\n");
	for(i=0;i<5;i++)
	{
	printf("%d ",*(p+i));
	}
	return 0;
}
