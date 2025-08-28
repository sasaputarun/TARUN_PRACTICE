#include<stdio.h>
int main(){
	int n,pos,element,i;
	printf("enter array size");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the pos");
	scanf("%d",&pos);
	if(pos<0||pos>=n)
		printf("invalid position");
	else
	{
		for(i=pos;i<n;i++){
			a[i]=a[i+1];
		}

	}
	printf("\n");
	for(i = 0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
	

