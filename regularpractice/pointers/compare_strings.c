#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="embedded";
	char str2[20]="embedded";
	char *ptr1=NULL,*ptr2=NULL;
	ptr1=str1;
	ptr2=str2;
	int i=0,found;
	while(*(ptr1+i)!='\0'&&*(ptr2+i)!='\0')
	{
		found=0;
		if(*(ptr1+i)==*(ptr2+i))
		{
			i++;
			found=1;
		}
		else
		{
			break;
		}
	}
	if(found==1)
	{
		printf("both strings are equal:\n");
	}
	else
	{
		printf("both strings are not equal:\n");
	}
	return 0;
}
	
