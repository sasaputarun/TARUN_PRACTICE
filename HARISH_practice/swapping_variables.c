#include<stdio.h>
int main()
{
	int x=1,y=2,z=3;
	x=x+y+z;
	y=x-(y+z);
	z=x-(y+z);
	x=x-(y+z);
	printf("afetr swapping the values of x:%d\n",x);
	        printf("afetr swapping the values of y:%d\n",y);
		        printf("afetr swapping the values of z:%d\n",z);
			return 0;
}


