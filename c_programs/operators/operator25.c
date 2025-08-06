#include<stdio.h>
int main()
{
	int a,b,temp,product;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	product=a*b;
	while(b!=0){
		temp=b;
		b=a%b;
		a=temp;
	}
	int LCM=product/a;
	printf("LCM  of and b:%d",LCM);
	return 0;
}

