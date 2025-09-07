#include<stdio.h>
#include<string.h>
int main()
{
	int len,count=0;
       	char str[30];
	char ch;
	printf("enter a string:");
	fgets(str,30,stdin);
	str[strcspn(str,"\n")]='\0';
	printf("enter a letter");
	scanf("%c",&ch);
	len=strlen(str);
	for(int i=0;i<len;i++)
	{
		if(str[i]==ch)
		{
		//	printf("given character is in a string");
			count++;
			break;
		}
	}
	if(count==1)
		printf("given character is in a string");
	else
		printf("given character is not in a string");
	return 0;
}
