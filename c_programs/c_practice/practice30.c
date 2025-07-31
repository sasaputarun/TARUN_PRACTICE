#include<stdio.h>
int main()
{
	int a,b,mul;
	printf("enter two numbers to multiply:");
       scanf("%d %d",&a,&b);
       mul=0;
       for(int i=1;i<=a;i++){
	       mul=mul+b;
       }
       printf("multiply of two numbers:%d",mul);
       return 0;
}


