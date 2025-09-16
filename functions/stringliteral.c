#include<stdio.h>
char* literal();
int main()
{
	char *p1;
	p1=literal();
	printf("the returned string:%s\n",p1);
}
char* literal()
{
	return "embedded";
}
