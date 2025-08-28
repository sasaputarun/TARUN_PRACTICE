#include<stdio.h>
int main()
{
	int i,a[6],sum=0;
	printf("enter array elements:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++){
		sum= (sum+a[i]);
	}
	printf("the sum of the array:%d",sum);
	return 0;
}

