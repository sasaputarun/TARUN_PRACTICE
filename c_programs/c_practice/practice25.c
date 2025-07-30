#include<stdio.h>
int main()
{
	float a,b,sum,average;
	printf("enter a and b");
	scanf("%f %f",&a, &b);
	sum=a+b;
	average=(sum)/2;
	printf("sum:%.2f\n",sum);
	printf("average:%.2f\n",average);
	return 0;
}


