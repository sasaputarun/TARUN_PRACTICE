#include<stdio.h>
#include<string.h>
int main()
{
	char str[80];
	printf("enter a string:\n");
	fgets(str,80,stdin);
	str[strcspn(str,"\n")]='\0';
	int i,vowels=0,consonants=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
		{

		if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			vowels++;
		}
		else
		{
			consonants++;
		}
		}
		
	
	}
	printf("no of vowels in a string:%d\n",vowels);
	printf("no of consonants in a string :%d\n",consonants);
	return 0;
}

