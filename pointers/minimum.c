#include<stdio.h>

void minmax(int, int, int*, int*); 

int main()
{
    int a = 8, b = 4;
    int min, max;

    minmax(a, b, &min, &max);   

    printf("maximum number: %d\n", max);
    printf("minimum number: %d\n", min);

    return 0;
}

void minmax(int a, int b, int *min, int *max)
{
    if(a > b)
    {
        *max = a;
        *min = b;
    }
    else
    {
        *max = b;
        *min = a;
    }
}

