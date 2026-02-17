#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	printf("enter the lowercase string:\n");
	fgets(str,30,stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			continue;
		}
		else
		{
			str[i]=str[i]-32;
		}
	}
	printf("the uppercase string:%s\n",str);
}

