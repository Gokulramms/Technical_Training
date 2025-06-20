#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    if (a == 0 && b == 0 && c == 0) {
        printf("It is not a figure\n");
    }
    else if (a + b > c && a + c > b && b + c > a) {
        // It's a triangle, now check type
        if (a == b && b == c) {
            printf("Equilateral triangle\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles triangle\n");
        } else {
            printf("Scalene triangle\n");
        }
    }
    else {
        printf("Not a triangle\n");
    }

    return 0;
}
