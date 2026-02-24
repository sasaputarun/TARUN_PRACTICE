#include<stdio.h>
void twin_prime(int n,int end)
{
	int count1=0,count2=0;
	for(int i=2;i<=(n/2);i++)
	{
		if((n%i)==0)
		{
			count1++;
		}
	}
	if(count1==0)
	{
		
		int t=n+2;
		if(t<end)
		{
		for(int j=2;j<=(t/2);j++)
		{
			if((t%j)==0)
			{
				count2++;
			}
		}
		if(count2==0)
		{
			printf("twin prime:%d %d:\n",n,t);
		}
		}
	}
	
}
int main()
{
	int start,end;
	printf("enter the starting range:\n");
	scanf("%d",&start);
	printf("enter the ending range:\n");
	scanf("%d",&end);
	for(int i=start;i<end;i++)
	{
		twin_prime(i,end);
	}
}
