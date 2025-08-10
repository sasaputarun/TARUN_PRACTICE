#include <stdio.h>

int main() {
    int n, pos = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("No set bits\n");
        return 0;
    }

    int rsb = n & -n; 

    while (rsb > 1) { 
        rsb = rsb >> 1;
        pos++;
    }

    printf("Rightmost set bit position: %d\n", pos);
    return 0;
}

