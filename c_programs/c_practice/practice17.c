#include<stdio.h>
#include<math.h>
int main()
{
	float b,h,area;
	printf("enter the base of a triangle");
	scanf("%f",&b);
	printf("enter the height of a triangle");
	scanf("%f",&h);
	area=0.5*b*h;
	printf("area of a triangle:%.2f",area);
	return 0;
}
