#include<stdio.h>
int main()
{
	int i=0,n,j,binary[32];
	printf("enter a decimal number");
	scanf("%d",&n);
	if(n==0)
	{
		printf("binary:%d\n",n);
		return 0;
	}
	while(n>0)
	{
		binary[i]=n%2;
		n=n/2;
		i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
	printf("\n");
}
	

