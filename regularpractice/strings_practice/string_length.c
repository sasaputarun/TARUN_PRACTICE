#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("enter a string:\n");
	fgets(str,40,stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0,count=0;
	while(str[i] != '\0')
	{
		count++;
		i++;
	}
	printf("length of a string:%d\n",count);
	return 0;
}

