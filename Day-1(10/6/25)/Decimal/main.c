#include <stdio.h>

int main() {
    int binary = 1001, decimal = 0, base = 1, rem;

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal: %d", decimal);
    return 0;
}