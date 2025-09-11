#include<stdio.h>
#include<string.h>
int main()
{
	char hex[20];
	int i,decimal=0,base=1,len=0;
	printf("enter a hexadecimal number");
	scanf("%s",hex);
	len=strlen(hex);
	for(i=len-1;i>=0;i--)
	{
		char ch=hex[i];
		if(ch>='0'&&ch<='9')
		{
			decimal+=(ch-'0')*base;
		}
		else if(ch>='A'&&ch<='F')
		{
			decimal+=(ch-'A'+10)*base;
		}
		else if(ch>='a'&& ch<='f')
		{
			decimal+=(ch-'a'+10)*base;
		}

		else{
			printf("invalid number");
			return 1;
		}
		base=base*16;
	}
	printf("decimal number:%d\n",decimal);
	return 0;
}
	 

