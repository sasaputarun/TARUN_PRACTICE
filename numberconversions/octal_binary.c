#include<stdio.h>
int main()
{

	int i=0,decimal=0,base=1,n,j;
	int lastdigit;
	int binary[20];
	printf("enter a octal number");
	scanf("%d",&n);
	while(n>0){
	lastdigit=n%10;//to get the last digit
	decimal=decimal+(lastdigit*base);
	base=base*8;
	n=n/10;
	}
	while(decimal!=0){
	binary[i]=decimal%2;
	decimal=decimal/2;
	i++;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
}
	
