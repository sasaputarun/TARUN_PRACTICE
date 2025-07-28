#include<stdio.h>
int main(){
	float radius,diameter,circumference,area;
	printf("enter the radius");
	scanf("%f",&radius);
	diameter=2*radius;
	circumference=(2*3.14)*(radius);
	area=3.14*(radius*radius);
	printf("diameter:%2f,circumference:%2f,area:%2f",diameter,circumference,area);
	return 0;
}
