#include <stdio.h>
int multiply(int a, int b) {
    int result = 0;

    while (b > 0) {
        if (b & 1)
            result += a;

        a <<= 1;
        b >>= 1;
    }

    return result;
}

int main() {
    int n, i, fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    for (i = 2; i <= n; i++) {
        fact = multiply(fact, i);
    }

    printf("Factorial of %d is: %d\n", n, fact);

    return 0;
}

