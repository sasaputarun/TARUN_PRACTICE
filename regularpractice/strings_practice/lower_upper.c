#include<stdio.h>
int main()
{
	int n;
	printf("enter the string size:\n");
	scanf("%d",&n);
	getchar();
	char str[n];
	printf("enter a string:\n");
	fgets(str,50,stdin);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	for(int j=0;str[j]!='\0';j++)
	{
		printf("%c",str[j]);
	}
}
