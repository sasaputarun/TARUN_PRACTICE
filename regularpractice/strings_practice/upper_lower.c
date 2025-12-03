#include<stdio.h>
#include<string.h>
int main()
{
	char str[58];
	printf("enter a string:\n");
	fgets(str,58,stdin);
	str[strcspn(str,"\n")]='\0';
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
		str[i]=str[i]+32;
		}
	
	}
	printf("the string after conversion from upper to lower:\n");
	printf("%s\n",str);
	return 0;
}
