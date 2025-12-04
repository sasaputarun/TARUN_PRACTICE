#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	printf("enter a string:\n");
	fgets(str,80,stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0,l,found;
	l=strlen(str)-1;
	while(i<l)
	{
		found=0;
		if(str[i]==str[l])
		{
			found=1;
			i++;
			l--;
		}
		else
		{
			break;
		}
	}
	if(found==1)
	{
		printf("the given string is palindrome:\n");
	}
	else
	{
		printf("the given string is not a palindrome:\n");
	}
	return 0;
}

