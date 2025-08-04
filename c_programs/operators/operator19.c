#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("it is uppercase letter");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("it is lowercase letter");
	}
	else{
		printf("it is not a alphabet letter");
	}
		
	return 0;
}

