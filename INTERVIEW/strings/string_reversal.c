#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("enter the string:\n");
	fgets(str,10,stdin);
	str[strcspn(str,"\n")]='\0';
	int i=0,j=(strlen(str)-1);
	while(i<j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("after reverse the string:%s\n",str);
}
