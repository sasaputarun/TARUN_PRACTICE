#include<stdio.h>
int main(){
	int num,digit,original,rev=0;
	printf("enter a number");
	scanf("%d",&num);
	original=num;
	while(num>0){
		digit = num % 10;         
        rev = rev * 10 + digit;  
        num = num / 10;           
    }

    if (original == rev)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
