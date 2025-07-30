#include<stdio.h>
int main()
{
	int i;
	float f;
	char c;
	double d;
	short e;
	long l;
	long long ll;
	printf("size of int:%zu\n",sizeof(i));
	printf("size of float:%zu\n",sizeof(f));
	printf("size of char:%zu\n",sizeof(c));
	printf("size of double:%zu\n",sizeof(d));
	printf("size of short:%zu\n",sizeof(e));
	printf("size of long:%zu\n",sizeof(l));
	printf("size of long long:%zu\n",sizeof(ll));
	return 0;
}
