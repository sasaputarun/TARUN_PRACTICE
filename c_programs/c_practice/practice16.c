#include<stdio.h>
#include<math.h>
int main()
{
	float a,area;
	printf("enter side of a triangle");
	scanf("%f",&a);
	area=(sqrt(3)/4)*a*a;
	printf("area of equilateral triangle:%.2f",area);
	return 0;
}
