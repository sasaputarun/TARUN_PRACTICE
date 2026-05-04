#include<stdio.h>
#include<string.h>
int main()
{
	int n,k=0;
	printf("enter string size:");
	scanf("%d",&n);
	getchar();
	char str[n];
	printf("enter the string:");
	fgets(str,n,stdin);
//	str[strcspn(str,"\n")]='\0';
	while(str[k]!='\0')
	{
		if(str[k]=='\n')
		{
			str[k]='\0';
			break;
		}
		k++;
	}
	int i=0,j=strlen(str)-1;
	while(i<j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("after string reversal:%s\n",str);
}
