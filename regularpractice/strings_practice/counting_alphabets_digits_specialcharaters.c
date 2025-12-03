#include<stdio.h>
#include<string.h>
int main()
{
	char str[58];
	printf("enter the string:\n");
	fgets(str,58,stdin);
	str[strcspn(str,"\n")]='\0';
	int i,digits=0,count1=0,count2=0,specialchars=0;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			count1++;
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			count2++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			digits++;
		}
		else
		{
			specialchars++;
		}
	}
	int l=count1+count2;
	printf("no of aplhabets:%d\n",l);
	printf("no of digits:%d\n",digits);
	printf("no of special characters:%d\n",specialchars);
}
