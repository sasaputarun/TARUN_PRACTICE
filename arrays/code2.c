#include<stdio.h>
int main()
{
        int a[5]={1,2,3,4,5};
	int *p=&a[4];
        printf("value at pointer:%d\n",*p);
        printf("address of pointer:%p\n",&p);
        p--;
        printf("value at pointer:%d\n",*p);
        printf("address of pointer:%p\n",&p);
        p--;
        printf(" value at pointer:%d\n",*p);
        printf("address of pointer:%p\n",&p);
        p--;
        printf("value at pointer:%d\n",*p);
        printf("address of pointer:%p\n",&p);
        p--;
        printf("value at pointer:%d\n",*p);
        printf("address of pointer:%p\n",&p);
}


