#include <stdio.h>
int main() {
    int n;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &n);   // scanf automatically interprets hex
    printf("Decimal number: %d\n", n);
    return 0;
}

