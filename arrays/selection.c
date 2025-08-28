#include<stdio.h>
int main()
{
	int i,j,temp,a[5];
	printf("before sorting\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("after sorting\n");
	for(i=0;i<(5-1);i++)
	{
		int min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[min]>a[j])
			{
				min=j;
			}
		}


		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

	for(i=0;i<5;i++) printf("%d ",a[i]);
	return 0;

}






