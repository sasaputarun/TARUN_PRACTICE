#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char temp;
	char s1[30];
	printf("enter a string");
	fgets(s1,sizeof(s1),stdin);
	l=strlen(s1);
	for(int i=0;i<(l/2);i++)
	{
		temp=s1[i];
		s1[i]=s1[l-1-i];
		s1[l-1-i]=temp;
	}
	printf("the reversable string is :%s\n",s1);
	return 0;

}

