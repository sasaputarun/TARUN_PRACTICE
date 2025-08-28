#include<stdio.h>
int main(){
	int i;
	int arr1[5]={1,5,8,9,2};
	int arr2[5]={4,5,9,2,1};
	int arr3[5];
        printf("array of elements:");
	for(i=0;i<5;i++){
		arr3[i]=(arr1[i]+arr2[i]);
		printf("the sum element in third array:%d\n",arr3[i]);
	}
}
