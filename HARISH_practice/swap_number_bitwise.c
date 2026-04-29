#include<stdio.h>
int main()
{
	unsigned int x=4,y=6,z=8;
	x=x^y^z;
	y=x^y^z;
	z=x^y^z;
	x=x^y^z;
	printf("after swapping:\n");
	printf("the value of x:%d\n",x);
	printf("the value of y:%d\n",y);
	printf("the value of z:%d\n",z);
	return 0;
}
