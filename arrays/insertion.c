#include<stdio.h>
int main()
{
	int i,n,pos,element;
	printf("enter array size:");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("enter position and element to insert an element");
	scanf("%d %d",&pos,&element);
	for(i=n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=element;
	n++;
	printf("array after insertion");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}



