#include<stdio.h>
int main(){
	int i,j,rows,columns,k;
	printf("enter the rows:");
	scanf("%d",&rows);
	printf("enter the columns:");
	scanf("%d",&columns);
	for(i=1;i<=rows;i++){
		for(k=1;k<=rows-i;k++){
			printf(" ");
		}
		for(j=1;j<=columns;j++){
			if(j==1||j==i||i==rows){
				printf("*");
			}else{
				printf(" ");
			}
		}
			printf("\n");
		}
		return 0;
	}
