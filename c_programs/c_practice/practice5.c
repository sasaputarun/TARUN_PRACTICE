#include<stdio.h>
int main()
{
	float length,breadth,area;
	printf("enter the length and breadth of a rectangle");
	scanf("%f %f", &length,&breadth);
	area=length*breadth;
	printf("area:%2f\n" , area );
	return 0;
}
	
