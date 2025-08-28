#include <stdio.h>
int *getarray()
{
	static int arr[6]={1,3,4,5,6,7};
	return arr;
}
int main()
{
	int i;
	int *ptr=getarray();
	for (i = 0; i < 5; i++)
       	{
        printf("%d ", ptr[i]);
	}
	return 0;
}
