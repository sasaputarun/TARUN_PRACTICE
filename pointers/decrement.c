#include<stdio.h>
int main()
{
        int a[]={1,2,3,45,5};
        int *p;
        p=&a[2];
        //p--;
        printf("%d\n",*p);
        printf("%d  %d\n",*--p,*--p);
       
}

