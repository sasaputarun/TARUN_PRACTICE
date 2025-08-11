#include<stdio.h>
int sum();
int main(){
        printf("%d",sum());
        return 0;
}
int sum(){
        int a,b,total=0;
        printf("enter two numbers");
        scanf("%d %d",&a,&b);
        total=a+b;
	return total;
}	                 
