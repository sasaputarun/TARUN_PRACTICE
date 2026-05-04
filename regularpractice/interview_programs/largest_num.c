#include<stdio.h>
#define largest(x,y,z) ((x>y && x>z)? x:(y>z)?y:z)
int main()
{
	int x,y,z;
	printf("enter three numbers");
	scanf("%d %d %d",&x,&y,&z);
	printf("the largest num:%d\n",largest(x,y,z));
	return 0;	
}

