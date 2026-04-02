#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number:");
	scanf("%u",&n);
	int r;
	printf("enter no of rotations");
	scanf("%d",&r);
	int size=sizeof(unsigned int)*8;
	r=r%size;
	n=(n<<r)|(n>>(size-r));
	printf("after rotation :%u\n",n);
}



