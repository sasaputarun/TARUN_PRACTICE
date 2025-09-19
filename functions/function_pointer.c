#include<stdio.h>
void add(int a, int b)
{
	printf("add:%d\n",a+b);

}
void sub(int a, int b)
{
        printf("sub:%d\n",a-b);
}
void mul(int a, int b)
{
        printf("mul:%d\n",a*b);
}
void div(int a, int b)
{
        printf("div:%d\n",a/b);
}


int main()
{
	int ch,a,b;
	void (*fptr[10])(int,int)={add,sub,mul,div};
	printf("0 for add\n 1 for sub\n 2 for mul\n 3 for div\n");
	printf("enter choice");
	scanf("%d",&ch);
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	(*fptr[ch])(a,b);
	return 0;
}

