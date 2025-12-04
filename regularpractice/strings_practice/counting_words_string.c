#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	printf("enter a string:\n");
	fgets(str,100,stdin);
	str[strcspn(str,"\n")]='\0';
	int j,count=1;
	int l=strlen(str);
	for(j=0;j<l;j++)
	{
		if(str[j]!='\0'&&str[j]==' ')
		{
			count++;

		}
		
	}
	printf("no of words in a string:%d\n",count);
	return 0;
}


