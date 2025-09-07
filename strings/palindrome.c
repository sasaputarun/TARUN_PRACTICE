#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str[20];
	printf("enter a string\n");
	fgets(str,20,stdin);
	str[strcspn(str,"\n")]='\0';
	int start=0;
        len=strlen(str);
	int end=len-1;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			printf("given string is not a palindrome");
			return 0;
		}
		start++;
		end--;
	}
	printf("the given string is a palindrome");
}

