#include<stdio.h>
int main()
{
	int i,n,even=0,odd=0;
	printf("enter the array size:");
	scanf("%d",&n);
	int arr[n];
	int *ptr=arr;
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("no of even elements:%d\n",even);
	printf("no of odd elements:%d\n",odd);
	return 0;
}



	
