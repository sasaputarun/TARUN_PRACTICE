#include<stdio.h>
#include<string.h>
void string_reversal(int start,int end ,char *ptr)
{
	while(start<end)
	{
		char temp=*(ptr+start);
		*(ptr+start)=*(ptr+end);
		*(ptr+end)=temp;
		start++;
		end--;
	}
}
int main()
{
	int n,i=0;
	printf("enter the string size");
	scanf("%d",&n);
	getchar();
	char str[n];
	printf("enter the string");
	fgets(str,n,stdin);
	str[strcspn(str,"\n")]='\0';
	while(str[i]!='\0')
	{
		i++;
	}
	int start=0,end=i-1;
	string_reversal(start,end,str);
	printf("after string reversal:%s",str);
}

