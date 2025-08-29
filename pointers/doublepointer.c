#include<stdio.h>
int main()
{
	int c=10;
	int *p=&c;
	int **q=&p;
	int ***r=&q;
	printf("a:%d %d %d\n ",c,*p,**q);
	printf("address of q:%p\n",&q);
}
