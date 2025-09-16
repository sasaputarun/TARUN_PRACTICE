#include<stdio.h>
int* returnpointer(int*);
int main()
{
	int *ptr;
	int a[]={1,2,3,4,5};
	ptr=returnpointer(a);
	printf("the value at returned pointer:%d\n",*ptr);
}
int* returnpointer(int* a)
{
	a=a+2;
	return a;
}

