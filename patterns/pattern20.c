#include<stdio.h>
int main(){
	int i,j,k,rows,columns;
	printf("enter the rows and columns:");
	scanf("%d %d",&rows,&columns);
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}
		for(k=1;k<=columns;k++){
			if(i==1||k==1||i==rows||k==columns){
				printf(" *");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
		
