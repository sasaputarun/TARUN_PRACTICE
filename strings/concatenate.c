#include<stdio.h>
#include<string.h>
int main()
{
	char s1[25]="embedded";
	char s2[8]="systems";
	strcat(s1,s2);
	printf("%s",s1);
	return 0;
}

