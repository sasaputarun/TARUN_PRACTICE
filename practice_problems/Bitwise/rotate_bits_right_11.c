#include<stdio.h>
int main()
{
	unsigned int n;
	printf("enter the number");
	scanf("%u",&n);
	int r;
	printf("enter no of roations to right");
	scanf("%d",&r);
	int size=sizeof(unsigned int)*8;
	r=r%size;
	if(r!=0)
	{

		n=(n>>r)|(n<<(size-r));
	}
	printf("after right rotation:%u\n",n);
}

