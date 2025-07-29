#include<stdio.h>
int main()
{
	float cm,meters,kilometers;
	printf("enter length in centimeters:");
	scanf("%f",&cm);
	meters=cm/100;
	kilometers=cm/100000;
	printf("length in meters:%2f",meters);
	printf("length in kilometers:%2f",kilometers);
	return 0;
}

