#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char s1[]="tarun";
	char s2[]="Tarun";
	value=strcmp(s1,s2);
		if(value==0)
		{
			printf("both the strings are same:");
		}
		else
		{
			printf("both the strings are not same:%d\n",value);
		}

}


