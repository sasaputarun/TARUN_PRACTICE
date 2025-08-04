#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i < num && isPrime; i++) {
            if (num % i == 0) {
                isPrime =0; // Not a prime
            }
        }
    }

    if (isPrime && num > 1)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

