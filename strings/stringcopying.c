#include<stdio.h>
#include<string.h>
int main()
{
	int i,len;
	char str1[30];
	char str2[30];
	printf("enter the string");
	fgets(str1,sizeof(str1),stdin);
	len=strlen(str1);
	for(i=0;i<=len;i++)
	{
		str2[i]=str1[i];

	}
	printf("copy string to another string\n");
	printf("%s",str2);
}
