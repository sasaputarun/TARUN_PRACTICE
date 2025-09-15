#include<stdio.h>
char* display();
void main()
{
	char *s1;
	s1=display();
	printf("string:%s\n",s1);
}
char* display()
{
	static char str[]="tarun";
	return str;
}
