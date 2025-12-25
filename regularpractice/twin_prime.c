#include<stdio.h>
void twin(int i,int end)
{
        int flag=1;
        for(int j=2;j<i;j++)
        {
                if((i%j)==0)
                {
                        flag=0;
                }
        }
        if(flag==1)
        {
                int t=i+2;
                int flag=1;
		if(t<end)
		{
                for(int p=2;p<t;p++)
                {
                        if((t%p)==0)
                        {
                                flag=0;
                        }
                }
                if(flag==1)
                {
                        printf("the twin primes");
                        printf(" %d  %d",i,t);
                        printf("\n");
                }
		}
        }
}
int main()
{
        int end;
        printf("enter the limit :\n");
        scanf("%d",&end);
        for(int i=2;i<end;i++)
        {
                twin(i,end);
        }
        return 0;
}

