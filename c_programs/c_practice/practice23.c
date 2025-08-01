#include<stdio.h>
#include<math.h>
int main()
{
	float P,T,R,SI;
	printf("enter principle amount(P)");
	scanf("%f",&P);
	printf("enter rate of interest(R)");
	scanf("%f",&R);
	printf("enter time(T in years)");
	scanf("%f",&T);
	SI=(P*R*T)/100;
	printf("simple interest:%.2f",SI);
	return 0;
}


