#include<stdio.h>
#include<string.h>
int main()
{
	char str[200];
	printf("enter a string");
	fgets(str,200,stdin);
	str[strcspn(str,"\n")]='\0';
	char word[50];
	printf("enter a word");
	fgets(word,50,stdin);
	word[strcspn(word,"\n")]='\0';
	if(strstr(str,word)!=NULL)
	{
		printf("the given word is found in string:%s\n",word);
	}
	else
	{
		printf("the given word is not found in string:%s\n",word);
	}
	return 0;
}

