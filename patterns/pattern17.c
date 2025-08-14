#include<stdio.h>
int main(){
	int i,j,rows,colouns;
	printf("enter the no of rows:");
	scanf("%d",&rows);
	printf("enter the no of colouns");
	scanf("%d",&colouns);
	for(i=1;i<=rows;i++){
		for(j=1;j<=colouns;j++){
			if(i==1||i==rows||j==1||j==colouns){
				printf(" *");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
