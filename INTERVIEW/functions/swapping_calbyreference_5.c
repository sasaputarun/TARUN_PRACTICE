#include<stdio.h>
void cal_by_reference(int*,int*);
int main()
{
	int a=5,b=6;
	int *ptr1=&a,*ptr2=&b;
	cal_by_reference(&a,&b);
	printf("after swapping:\n");
	printf("the value of a :%d\n",a);
	printf("the value of b:%d\n",b);
}
void cal_by_reference(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
