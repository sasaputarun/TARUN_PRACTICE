#include<stdio.h>
int main()
{
	int i=10,temp;
	int j=5;
	int *ptr1=&i;
	int *ptr2=&j;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("after swapping\n");
	printf("the value of i:%d\n",i);
	printf("the value of j:%d\n",j);
}

