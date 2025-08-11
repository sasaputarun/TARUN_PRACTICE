#include<stdio.h>

int sum() { 
    int a, b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b; 
}

int main() {
    int result1 = sum();
    int result2 = sum();

    printf("First sum: %d\n", result1);
    printf("Second sum: %d\n", result2);

    return 0;
}

