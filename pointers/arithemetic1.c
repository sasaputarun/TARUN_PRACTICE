#include<stdio.h>
int main()
{
	int i;
	int arr[6]={1,2,4,5,6,7};
	int *p=arr;
	for(i=0;i<6;i++){
		printf("%d\n",*(p+i));
	}
}
