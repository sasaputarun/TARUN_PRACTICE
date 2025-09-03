#include<stdio.h>
#include<string.h>
int main()
{
	int len1,len2;
	char s1[30]="embedded";
	char s2[9]="systems";
	len1=strlen(s1);
	len2=strlen(s2);
	for(int i=0;i<=len2;i++)
	{
		s1[len1+i]=s2[i];
	}
	printf("%s",s1);
	printf("\n");
}

