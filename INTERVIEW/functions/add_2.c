#include<stdio.h>
int add(int,int);
int main()
{
	int a=8,b=3;
	int result=add(a,b);
	printf("the addition of two numbers:%d\n",result);
}
int add(int a,int b)
{
	return a+b;
}
