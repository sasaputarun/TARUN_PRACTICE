#include<stdio.h>
unsigned int make_setbits(unsigned int n,int start,int end)
{
	n=((1U<<(end-start+1))-1)<<start;
	return n;
}
int main()
{
	unsigned int n;
	printf("enter hexa decimal number");
	scanf("%x",&n);
	int start,end;
	printf("enter start bit and end bit");
	scanf("%d %d",&start,&end);
	n=make_setbits(n,start,end);
	printf("%x",n);
}
