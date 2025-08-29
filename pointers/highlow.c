#include<stdio.h>
int built(int* ,int*,int*,int*);
int main()
{
	int a=16,b=8,max,min;
	built(&a,&b,&max,&min);
	printf("maximum value:%d\n",max);
	printf("minumin value:%d\n",min);
}
int built(int *p,int *q,int *max,int *min)
{
	if(*p>*q)
	{
		*max=*p;
		*min=*q;
	}
	else
	{
		*max=*q;
		*min=*p;
	}
}
