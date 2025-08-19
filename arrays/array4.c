#include<stdio.h>
int main(){
	int a[6],i;
	int sum=0;
	float avg;
	printf("enter array elements");
	for(i=0;i<=5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<=5;i++){
		sum=sum+a[i];
	}
	avg=(sum/6);
		printf("sum:%d\n avg:%.2f\n",sum,avg);
}
