#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,count=0;
	char str[38];
	printf("enter a string:\n");
	fgets(str,38,stdin);
	str[strcspn(str,"\n")]='\0';
	char *ptr=NULL;
	ptr=str;
	while(*(ptr+i)!='\0')
	{
		count++;
		i++;
	}
	printf("the length of string:%d\n",count);
}
