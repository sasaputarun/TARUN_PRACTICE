#include<stdio.h>
int main()
{
	float grams,kilograms;
	printf("enter mass in kilograms");
      scanf("%f",&kilograms);
grams=kilograms*1000;
printf("mass in grams:%.2f",grams);
return 0;
}
