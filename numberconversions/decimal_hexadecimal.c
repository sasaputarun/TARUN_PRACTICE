#include<stdio.h>
int main()
{
	int i=0,n,j,hexa[32];
	printf("enter a decimal number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("hexa:%d\n",n);
		return 0;
	}
	while(n>0)
	{
		hexa[i]=n%16;
		n=n/16;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",hexa[j]);
	}
	printf("\n");
	return 0;
}

