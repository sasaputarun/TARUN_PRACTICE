#include <stdio.h>

// Function that returns pointer to array (actually first element address)
int* getArray() {
    static int arr[] = {1, 2, 3, 4, 5};  
    // static is used so that array is not destroyed after function ends
    return arr;  
}

int main() {
    int *p;
    int n = 5, i;

    p = getArray();   // function returns base address of array

    // Print array elements in main
    for (i = 0; i < n; i++) {
        printf("%d\n", *(p + i));
    }

    return 0;
}

