#include<stdio.h>
#include<string.h>
int main()
{
	int len1,len2;
	char str1[20];
	printf("enter the first string\n");
	fgets(str1,20,stdin);
	str1[strcspn(str1,"\n")]='\0';
	char str2[20];
	printf("enter the second string\n");
	fgets(str2,20,stdin);
	len1=strlen(str1);
	len2=strlen(str2);
	for(int i=0;i<=len2;i++)
	{
		str1[len1+i]=str2[i];
	}
	printf("after string concatenation\n");
	printf("%s",str1);
	return 0;
}


	
