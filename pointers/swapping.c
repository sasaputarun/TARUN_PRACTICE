#include<stdio.h>
int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}

int main()
{
	int a=9,b=7;
	swap(&a,&b);
	printf("a:%d\n",a);
	printf("b:%d\n",b);
}
