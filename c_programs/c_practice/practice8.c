#include<stdio.h>
int main() {
	float celcius,fahrenheit;
	printf("enter the temperature in celcius");
	scanf("%f",&celcius);
	fahrenheit=(celcius*9/5)+32;
	printf("temperature in fahrenheit:%2f\n",fahrenheit);
	return 0;
}
