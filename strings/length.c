#include<stdio.h>
#include<string.h>
int main()
{
	int i,count=0;
	char name[30];
	printf("enter a string");
	gets(name);
	count=strlen(name);
	printf("string length:%d\n",count);
	return 0;
}
	
