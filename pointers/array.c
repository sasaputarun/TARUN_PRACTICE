#include<stdio.h>
int main()
{	
	int *p=NULL;
	int i=8;
    	p=&i;
	printf("the addres of i:%p\n",&i);
	printf("the value of i:%d\n",i);
	printf("the value of *p:%d\n",*p);
	printf("the addres of value p:%p\n",p);
	printf("the address of p:%p\n",&p);

}


