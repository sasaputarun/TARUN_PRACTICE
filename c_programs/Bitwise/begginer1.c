#include <stdio.h>

int main() {
    int num, lsb;
    printf("Enter a number: ");
    scanf("%d", &num);

    lsb = num & 1;  // extract the lsb only

    printf("LSB (Least Significant Bit) of %d is: %d\n", num, lsb);

    if (lsb == 1)
        printf("The number is Odd\n");
    else
        printf("The number is Even\n");

    return 0;
}

	
