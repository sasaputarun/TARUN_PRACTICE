#include<stdio.h>
int main()
{
	unsigned int n,temp;
	printf("enter the number");
	scanf("%u",&n);
	temp=n;
	int bits=0;
	while(temp != 0){
		bits++;
		temp >>=1;
	}
	bits--;
	while(bits >= 0){
		n = n ^ (1U<<bits);
		bits--;
	}
	printf("%u \n",n);
}

