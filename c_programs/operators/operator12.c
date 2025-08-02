#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num%5==0 && num%11==0){
		printf("number is divisible by both numbers");
	}
			else{
				printf("number is not divisible by both numbers");
			}
			return 0;
}
			
