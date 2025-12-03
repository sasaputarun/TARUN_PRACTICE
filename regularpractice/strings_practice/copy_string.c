#include<stdio.h>
#include<string.h>
int main()
{
	char str1[30],str2[30];
	printf("enter the string:\n");
	fgets(str1,30,stdin);
	str1[strcspn(str1,"\n")]='\0';
	int i,l=strlen(str1);
	for(i=0;i<l;i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("%s",str2);
	return 0;
}

