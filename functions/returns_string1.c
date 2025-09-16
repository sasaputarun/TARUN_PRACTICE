#include<stdio.h>
char* screen();
int main()
{
	char *p1;
	p1=screen();
	printf("returned string:%s\n",p1);
	p1[1]='A';
	p1[2]='R';
	printf("modified string:%s\n",p1);
}
char* screen()
{
	static char str[]="tarun";
	return str;
}
	

