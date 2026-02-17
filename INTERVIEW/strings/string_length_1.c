#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,len=0;
	char string[20];
//	char str[10]="hello";
	printf("enter the string:\n");
	fgets(string,20,stdin);
	string[strcspn(string,"\n")]='\0';
	while(string[i]!='\0')
	{
		len++;
		i++;
	}
	printf("the length of the string:%d\n",len);
}
