#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("enter the string size");\
	scanf("%d",&n);
	getchar();
	char str[n];
	printf("enter the string");
	fgets(str,n,stdin);
	str[strcspn(str,"\n")]='\0';
	char *start =str,*end=str+(strlen(str)-1);
	while(start<end)
	{
		char temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;
	}
	printf("after string reversal:%s\n",str);
}
