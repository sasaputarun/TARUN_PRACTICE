#include<stdio.h>
void fun(int,int);
int main()
{
	int x=9,y=4;
	fun(x,y);
	printf("x:%d  y:%d",x,y);
}
void fun(int x,int y)
{
	x=8,y=3;
	printf("x:%d y:%d\n",x,y);
}
	
