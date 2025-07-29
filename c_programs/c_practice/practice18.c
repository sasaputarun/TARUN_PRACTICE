#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	float angleA,angleB,angleC;
	printf("enter all sides" );
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b){
		angleA=acos((b*b+c*c-a*a)/(2*b*c));
		angleB=acos((a*a+c*c-b*b)/(2*a*c));
		angleC=acos((a*a+b*b-c*c)/(2*a*b));
		 angleA = angleA * (180.0 / M_PI);
        angleB = angleB * (180.0 / M_PI);
        angleC = angleC * (180.0 / M_PI);
	printf("Angle A :%.2f",angleA);
	printf("Angle B :%.2f",angleB);
	printf("Angle C:%.2f",angleC);
	}
	else
	{
		printf("invalid triangle,the sum of any two sides must be greater than the third");
	}
	return 0;
}
