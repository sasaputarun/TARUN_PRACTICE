#include<stdio.h>
int main(){
	int a[6],i;
	int sum=0,avg;
	printf("enter array elements");
	for(i=0;i<=5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++){
		sum=sum+a[i];
	}
	avg=(sum/6);
		printf("sum:%d\n avg:%d\n",sum,avg);
}
