#include<stdio.h>
int main()
{
        int n,remainder,original,reverse=0;
        printf("enter a number");
        scanf("%d",&n);
        original=n;
        while(n>0){
                remainder=n%10;
                reverse=(reverse*10)+remainder;
                n=n/10;
        }
        if(original==reverse){
                printf("given number is palindrome");
        }
        else{
                printf("given number is not a palindrome");
        }
        return 0;
}
 

