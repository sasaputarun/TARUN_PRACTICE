#include<stdio.h>
void add(int *p,int *q,int *r)
{
	*r=*p+*q;
}
int main()
{
	int a=10,b=20,sum=0;
	add(&a,&b,&sum);
	printf("the sum of two numbers:%d\n",sum);
}
