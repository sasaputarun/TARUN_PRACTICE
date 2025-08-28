#include<stdio.h>
int main()
{
	int temp,n,i;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int start=0,end=(n-1);
	while(start<end){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}


