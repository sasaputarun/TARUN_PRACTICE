#include<stdio.h>
int main()
	
{
	int num,count=0;
	printf("enter a number");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2){
		printf("number is prime:%d",num);
	}
		else{
			printf("number is not prime:%d",num);
		}
		return 0;
}


		
		

