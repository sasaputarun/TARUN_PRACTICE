#include<stdio.h>
doublevalue(int *ptr)
{
	*ptr=(*ptr)*2;
	return *ptr;
}
int main()
{
	int n=2,t;
	t=doublevalue(&n);
	printf("after doubling:%d\n",n);
	return 0;
}

