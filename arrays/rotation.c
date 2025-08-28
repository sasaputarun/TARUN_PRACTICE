#include<stdio.h>
int main()
{
	int i,r,a[6],temp;
	printf("enter array elements");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;i<5;i++){
		a[i]=a[i+1];
	}
	a[5]=temp;
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
}




