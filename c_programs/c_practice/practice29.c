#include<stdio.h>
int main()
{
        int a,b,hcf,LCM;
        printf("enter a and b");
        scanf("%d %d",&a,&b);
        int min=(a<b)?a:b;
        for(int i=1;i<=min;i++){
                if(a%i==0&&b%i==0){
                        hcf=i;
                }
        }
	LCM=(a*b)/hcf;
	printf("LCM:%d",LCM);
	return 0;
}

