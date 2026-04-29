#include<stdio.h>
int main()
{
	char str[12]="tarun kumar";
	int i=0,j,k=0;
	while(str[k]!='\0')
	{
		k++;
	}
	printf("string_length: %d\n",k);
	j=k-1;
	while(i<j)
	{
		char temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("after string reversal: %s",str);
	return 0;
}
