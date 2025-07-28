#include<stdio.h>
int main()
{
	float length,breadth,perimeter;
	printf("enter the length of a rectangle");
	scanf("%f",&length);
	printf("enter the breadth of a rectangle");
	scanf("%f" ,&breadth);
	perimeter=2*(length+breadth);
	printf("perimeter of a rectangle:%2f\n",perimeter);
	return 0;
}

