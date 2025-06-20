#include <stdio.h> // Include standard input/output library

int main() {
    int x = 10; // Declare and initialize integer variable x
    int y = 5;  // Declare and initialize integer variable y
    int z = 10; // Declare and initialize integer variable z

    printf("--- Comparing x and y ---\n");
    if (x == y) { // Check if x is equal to y
        printf("x is equal to y\n");
    } else {
        printf("x is NOT equal to y\n");
    }

    printf("\n--- Comparing x and z ---\n");
    if (x == z) { // Check if x is equal to z
        printf("x is equal to z\n");
    } else {
        printf("x is NOT equal to z\n");
    }

    printf("\n--- Another comparison example ---\n");
    // You can also use other comparison operators:
    if (x > y) { // Check if x is greater than y
        printf("x is greater than y\n");
    }

    if (y < z) { // Check if y is less than z
        printf("y is less than z\n");
    }

    if (x >= 10) { // Check if x is greater than or equal to 10
        printf("x is greater than or equal to 10\n");
    }

    if (y <= 5) { // Check if y is less than or equal to 5
        printf("y is less than or equal to 5\n");
    }

    if (x != y) { // Check if x is NOT equal to y
        printf("x is not equal to y (using != operator)\n");
    }

    return 0; // Indicate successful program execution
}
