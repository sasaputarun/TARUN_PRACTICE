#include <stdio.h>

void printBinary8(int num) {
    int i; 
    for (i = 7; i >= 0; i--) {  
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); 
    }
    printf("\n");
}

int main() {
    int n, i;
    printf("Enter a number and bit position to set: ");
    scanf("%d %d", &n, &i);

    printf("Original number in binary: ");
    printBinary8(n);

    n = n | (1 << i); 

    printf("After setting %dth bit:\n", i);
    printf("Updated number: %d\n", n);
    printf("Binary: ");
    printBinary8(n);

    return 0;
}

		
