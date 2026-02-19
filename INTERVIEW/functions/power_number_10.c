#include<stdio.h>
int power(int,int);
int main()
{
	int base=2,expo=5;
	int finalvalue=power(base,expo);
	printf("the power of number:%d\n",finalvalue);
}
int power(int base,int expo)
{
	int j=base,result=base;
	for(int i=0;i<expo;i++)
	{
		result=result*j;
	}
	return result;
}
