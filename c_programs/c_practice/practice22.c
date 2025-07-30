#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,CI;
	printf("enter the principle amount(P)");
	scanf("%f",&P);
	printf("enter the rate of interest(R)");
	scanf("%f",&R);
	printf("enter the time (Tin years)");
	scanf("%f",&T);
	CI=P*pow((1+R/100),T)-P;
	printf("compound interest:%.2f\n",CI);
	return 0;
}

