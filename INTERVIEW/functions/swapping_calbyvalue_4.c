#include<stdio.h>
int cal_by_value(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping:\n");
	printf("the value of a:%d\n",a);
	printf("the value of b:%d\n",b);
}
int main()
{
	int a=4,b=8;
	cal_by_value(a,b);
}

