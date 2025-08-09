#include<stdio.h>
int main(){
	int n,i;
	printf("enter a number and shift");
	scanf("%d %d",&n,&i);
	n=n&~(1<<i);
	printf("the reset ith bit is:%d",n);
	return 0;
}

