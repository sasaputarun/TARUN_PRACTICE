#include<stdio.h>
int main()
{
	int i,flag=0;
	char str1[10]="tArun";
	char str2[10]="tarun";
	for(i=0;i<5;i++)
	{
		if(str1[i]==str2[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("both strings are same:\n");
	}
	else
	{
		printf("both strings are not same:\n");
	}
}


