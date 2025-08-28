#include<stdio.h>
int main(){
	int a[6],i;
	printf("enter the array elements:");
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		printf("enter the array elements:%d",a[i]);
	}
		for(i=5;i>=0;i--){
			printf("array index:%d array element:%d\n",i,a[i]);
		}
		return 0;
}
	


                        

                        

