#include<stdio.h>
int main()
{
	int num,count=0;
	printf("enter a number");
	scanf("%d",&num);
	while(num>0){
		if(num&1){
			count++;

		}
	num=num>>1;
	}
	printf("number of set bits:%d",count);
	return 0;
}

