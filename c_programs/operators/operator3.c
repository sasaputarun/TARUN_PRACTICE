#include<stdio.h>
int main(){
	int num1,num2,AND,OR,XOR;
	printf("enter two numbers:");
	scanf("%d %d",&num1,&num2);
	AND=num1&num2;
	OR=num1|num2;
	XOR=num1^num2;
	printf("AND OPERATION:%d\n",AND);
	printf("OR OPERATION:%d\n",OR);
	printf("XOR OPERATION:%d\n",XOR);
	return 0;
}

