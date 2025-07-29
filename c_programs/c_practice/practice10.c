#include<stdio.h>
#include<math.h>
int main()
{
	float base,exponent,result;
	printf("enter base number:");
	scanf("%f",&base);
	printf("enter the exponent:");
	scanf("%f",&exponent);
	result= pow(base,exponent);
	printf("result:%.2f\n",result);
		return 0;
}

