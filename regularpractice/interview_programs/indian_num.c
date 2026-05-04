#include<stdio.h>
int main()
{
	unsigned int n=1;
	char *ptr=(char*)&n;
	if(*ptr)
	{
		printf("system is little indian");
	}
	else
	{
		printf("sytem is big indian");
	}
	return 0;
}
