#include<stdio.h>
int main()
{
	float w,heightsquared,BMI;
	printf("enter weight and height(in meter squared)");
	scanf("%f %f",&w, &heightsquared);
	BMI=w/(heightsquared);
	printf("BMI:%.2f",BMI);
	return 0;
}
