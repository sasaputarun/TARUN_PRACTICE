#include<stdio.h>
int main()
{
	int i=0,n,j,octal[32];
	printf("enter a decimal number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("octal:%d\n",n);
		return 0;
	}
	while(n>0)
	{
		octal[i]=n%8;
		n=n/8;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",octal[j]);
	}
	printf("\n");
	return 0;
}
	

