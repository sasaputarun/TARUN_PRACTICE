#include<stdio.h>
//#include<string.h>
int main()
{
	int i;
	int k=1;
	char str1[10],str2[10];
	printf("enter the string:\n");
	fgets(str1,10,stdin);
//	str1[strcspn(str1,"\n")]='\0';
//	int l=strlen(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("%s",str2);
}



