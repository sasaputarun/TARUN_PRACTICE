#include<stdio.h>
int main()
{
	int n,arr[6]={1,2,3,4,5};
	int *ptr=arr;
	int found=0;
	printf("enter a key number");
	scanf("%d",&n);
	for(int i=0;i<6;i++)
	{
		if(*(ptr+i)==n)
		{
			found++;
			printf("the given number found in array:%d\n",n);
			break;
		}

	}
	if(!found)
	{
		printf("the given number is not found");
	}
	return 0;
}


