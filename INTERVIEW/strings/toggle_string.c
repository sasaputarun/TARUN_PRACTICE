#include<stdio.h>
#include<string.h>
int main()
{
	char str[48];
	printf("enter the string:\n");
	fgets(str,48,stdin);
	str[strcspn(str,"\n")]='\0';
	for(int j=0;str[j]!='\0';j++)
	{
		if(str[j]==' ')
		{
			continue;
		}
		else if(str[j]>='A' && str[j]<='Z')
		{
			str[j]=str[j]+32;
		}
		else
		{
			str[j]=str[j]-32;
		}
	}
	printf("after toggling the string:%s\n",str);
}		
