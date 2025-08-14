#include<stdio.h>
int main(){
        int i,j,rows;
        printf("enter the no of rows:");
        scanf("%d",&rows);
        for(i=0;i<=rows;i++){
                for(j=65;j<=(65+i);j++){
                        printf("%c",j);
                }
                printf("\n");
        }
        return 0;
}
           
