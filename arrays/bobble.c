#include<stdio.h>
int main(){
        int i,j,temp,a[5]={1,3,9,4,6};
        printf("after sorting");
        for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                        if(a[i]>a[j]){
                                temp=a[i];
                                a[i]=a[j];
                                a[j]=temp;
                        }

                }
                printf("%d\t",a[i]);
        }

        return 0;
}

