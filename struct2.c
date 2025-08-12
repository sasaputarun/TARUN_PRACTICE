#include <stdio.h>
#pragma pack(2)

struct Example  {
    int i;
    float f;
    char ch;
    double d; // 4 bytes
    char c;    // 1 byte
};

int main() {
	struct Example ex;
    printf("Size of struct Example: %zu\n", sizeof(ex));

    return 0;
}

