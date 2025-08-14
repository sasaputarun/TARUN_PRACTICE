#include<stdio.h>
int main(){
	int m,n,rows;
	printf("enter the rows");
	scanf("%d",&rows);
	for(m=rows;m>=1;m--){
		for(n=1;n<=m;n++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
