#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,count=0,j;
	char str1[10];
	char str2[10];
	printf("enter the first string:\n");
	fgets(str1,10,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter the second string:\n");
	fgets(str2,10,stdin);
	str2[strcspn(str2,"\n")]='\0';
	int l=strlen(str1);
	for(j=0;str2[j]!='\0';j++)
	{

		str1[l+j]=str2[j];
	}
	str1[l+j]='\0';
	printf("after concatenation:%s\n",str1);
}
	
