#include<stdio.h>
#include<math.h>
int prime(int);
int armstrong(int);
int perfect(int);
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	prime(n);
	armstrong(n);
	perfect(n);
}
int prime(int n)
{
	if(n<=0)
	{
		printf("invalid number\n");
		return 0;
	}
	int count=0;
	for(int i=2;i<n;i++)
	{
		if((n%i)==0)
		{
		 count++;
		}
	}
	if(count==0)
	{
		printf("the given number is prime number:%d\n",n);
	}
	else
	{
	       printf("the given number is not prime number:%d\n",n);
	}
}
int armstrong(int n)
{
	int sum=0,temp=n,digit=0,temp1=n;
	while(temp!=0)
	{
		temp=temp/10;
		digit++;
	}
	while(temp1!=0)
	{
		int remainder=temp1%10;
		sum=sum+pow(remainder,digit);
		temp1=temp1/10;
	}
	if(n==sum)
	{
		printf("the given number is armstrong\n");
	}
	else
	{
                printf("the given number is not armstrong\n");
	}
}
int perfect(int n)
{
	int count=0,divisors[100];
	for(int i=1;i<n;i++)
	{
		if((n%i)==0)
		{

		divisors[count]=i;
		count++;
		}
	}
	int sum=0;
	for(int i=0;i<count;i++)
	{

		sum=sum+divisors[i];
	}
	if(n==sum)
	{
		printf("the given number is perfect\n" );
	}
	else
	{
               printf("the given number is not perfect\n" );
	}
}





		




