#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter two angles of a triangle");
	scanf("%f %f",&a , &b);
	c=(180-(a+b));
	printf("third angle:%.2f",c);
	return 0;
	}
