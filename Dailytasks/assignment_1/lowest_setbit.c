#include<stdio.h>
int main()
{
	int n,bit=0;
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n>0)
	{
		if(n&1)
		{
			printf("the lowest set bit is at :%d bit",bit);
			break;
		
		}
		else
		{
			n=n>>1;
		}
		bit++;
	}
}

