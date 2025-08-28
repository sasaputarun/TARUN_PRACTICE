#include<stdio.h>
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter the value - %d\n",i+1);
		scanf("%d",&a[i]);
	}

	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	
	}
	printf("\n");

	int *p=& a[1];
	printf("The pointer value is %d\n",*p);

	
}
