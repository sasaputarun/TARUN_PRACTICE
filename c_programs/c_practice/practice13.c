#include<stdio.h>
#include<math.h>
int main()
{
	float a,b=0.5,result;
	printf("enter a number:");
	scanf("%f",&a);
	result=pow(a,b);
	printf("result:%.2f",result);
	return 0;
}

