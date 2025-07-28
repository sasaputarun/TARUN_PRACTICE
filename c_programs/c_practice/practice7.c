#include<stdio.h>

int main()
{
	float cm,meters,kilometers;
	printf("enter the length in centtimeter");
	scanf("%f",&cm);
	meters=cm/100;
	kilometers=cm/100000;
	printf("meters:%2f\n,kilometers:%5f\n",meters,kilometers);
	return 0;
}

	     	

