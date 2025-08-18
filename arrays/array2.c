#include<stdio.h>
int main(){

	int a[4]={5, 6, 3, 8};
	printf("%p\n",&a);
	printf("%d %p\n",*(a+3),a+3);//&a[i]=base address+(index*size of array)
}
