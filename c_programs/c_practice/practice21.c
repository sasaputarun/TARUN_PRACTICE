#include<stdio.h>
int main()
{
	float total,average,percentage;
	float sub1,sub2,sub3,sub4,sub5;
	printf("enter marks of all five subjects");
	scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
	total=sub1+sub2+sub3+sub4+sub5;
	average=total/5;
	percentage=(total/500)*100;
	printf("total:%.2f average:%.2f percentage:%.2f",total,average,percentage);
	return 0;
}


