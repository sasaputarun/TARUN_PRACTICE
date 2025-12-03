#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40],str2[40];;
	printf("enter a string:\n");
	fgets(str1,40,stdin);
	str1[strcspn(str1,"\n")]='\0';
	printf("enter second string:\n");
	fgets(str2,40,stdin);
	str2[strcspn(str2,"\n")]='\0';
	int l1,l2;
	l1=strlen(str1);
	l2=strlen(str2);
	int i;
	for(i=0;i<l2;i++)
	{
		str1[l1+i]=str2[i];
	}
	str1[l1+i]='\0';
	printf("%s",str1);
}


	

