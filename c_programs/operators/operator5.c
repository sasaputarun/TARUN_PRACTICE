#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n>0){
		if((n&(n-1))==0){
			printf("%d is power of two:",n);
		}
			else{
				printf("%d is not a power of two",n);
			}
	}
			else {
				printf("invalid input");
			}
			return 0;
}
