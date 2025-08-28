#include<stdio.h>
int main(){
	int arr[5],i,even=0,odd=0;
	printf("enter array elements");
	for(i=0;i<=4;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++){
		if(arr[i]%2==0){
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("no of even elements:%d\n",even);
	printf("no of odd elements:%d",odd);
	return 0;
}
			

