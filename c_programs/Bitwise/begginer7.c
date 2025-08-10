#include<stdio.h>
int main(){
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num>0&&(num&(num-1))==0){
			printf("num is power of two:%d",num);
			}
			else
			{
			printf("num is not a power of two:%d",num);
			}
			return 0;
}
	
