#include<stdio.h>
int main()
{
	int i,a[6],max;
	printf("enter array elements\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<5;i++){
		if((a[i]>max))
				max=a[i];
				}
				printf("max element in array:%d\n",max);
}
				

