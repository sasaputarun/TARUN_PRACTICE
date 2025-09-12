#include <stdio.h>
#include <math.h> 

int main() {
    int decimal = 0, remainder, position = 0;
    long long n;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n > 0) {
        remainder = n % 10;
        decimal = decimal + remainder * pow(2, position);
        n = n / 10;
        position++;  
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}

