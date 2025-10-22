#include<stdio.h>
#include<string.h>
int main()
{
	int i,n1,n2;
	printf("enter the two string sizes\n");
	scanf("%d %d",&n1,&n2);
	getchar();
	char str1[n1];
	char str2[n2];
	printf("enter a string in  first string\n");
	fgets(str1,n1,stdin);
	str1[strcspn(str1,"\n")]='\0';
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];

	}
	str2[i]='\0';
	printf("the copied string is\n");
	printf("%s",str2);

	return 0;
}

