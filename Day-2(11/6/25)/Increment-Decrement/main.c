#include <stdio.h>

int main() {
    int a = 2, b = 6, c = -1;
    int d = a++ + ++a + --a - b++ - ++b + b + a - --a + b++ + a++ - b + a - c + --c;
    printf("%d", d);
    return 0;
}

