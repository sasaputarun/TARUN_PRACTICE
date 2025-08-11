#include<stdio.h>
void disp(){
	int a=7;
	printf("%d\n",a);
}
int main(){
	int a=10;
	printf("%d\n",a);
	{
		int a;
		printf("%d\n",a);
		disp();
	}
	int b=36;
	printf("%d\n",b);
}
