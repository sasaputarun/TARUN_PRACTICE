#include<stdio.h>
int main()
{
	int i=0,count=0;
	char str[20];
	printf("enter a string\n");
	gets(str);
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	printf("length of a string:%d\n",count);
	return 0;
}
