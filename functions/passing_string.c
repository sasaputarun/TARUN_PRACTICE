#include<stdio.h>
void modify(char[],char[]);
int main()
{
	char str1[]="sasapu";
	char str2[]="TaRUN";
	modify(str1,str2);
}
void modify(char str1[],char str2[])
{
	int i,length=0;
	for(i=0;str1[i]!='\0';i++)
	{
		length+=1;
	}
	str2[1]='A';
	printf("printing the both string\n");
                printf("%s %s",str1,str2);
}

