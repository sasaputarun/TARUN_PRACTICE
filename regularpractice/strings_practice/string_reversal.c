#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter a string:\n");
	fgets(str,50,stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0,j=strlen(str)-1;
	while(i<j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("the reversed string:%s\n",str);
	return 0;
}
	

