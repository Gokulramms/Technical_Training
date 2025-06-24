#include <stdio.h>

int main() {
    char matrix[5][5] = {
        {'a','m','c','e','r'},
        {'r','d','z','m','t'},
        {'a','q','o','t','c'},
        {'l','p','c','b','b'},
        {'s','a','x','a','e'}
    };

    char a[20];
    printf("Enter the Word: ");
    scanf("%s", a);
    int len = 0, found = 0;
    while (a[len] != '\0') len++;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= 5 - len; j++) {
            int k = 0;
            while (k < len && matrix[i][j + k] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nHorizontal\n", i, j);
                found = 1;
            }
        }
        if (found==0){
            for (int j = len - 1; j < 5; j++) {
            int k = 0;
            while (k < len && matrix[i][j - k] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nHorizontal Reverse\n", i, j);
                found = 1;
            }
        }
            
        }
    }
if (found==0){
    // Vertical T↓B
    for (int i = 0; i <= 5 - len; i++) {
        for (int j = 0; j < 5; j++) {
            int k = 0;
            while (k < len && matrix[i + k][j] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nVertical\n", i, j);
                found = 1;
            }
        }
    }
}
    // Vertical B↑T
    if (found==0){
    for (int i = len - 1; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int k = 0;
            while (k < len && matrix[i - k][j] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nVertical Reverse\n", i, j);
                found = 1;
            }
        }
    }
    }

    // Diagonal TL→BR
if (found==0){
    for (int i = 0; i <= 5 - len; i++) {
        for (int j = 0; j <= 5 - len; j++) {
            int k = 0;
            while (k < len && matrix[i + k][j + k] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nDiagonal TL→BR\n", i, j);
                found = 1;
            }
        }
    }
}

    // Diagonal BR→TL
if (found==0){
    for (int i = len - 1; i < 5; i++) {
        for (int j = len - 1; j < 5; j++) {
            int k = 0;
            while (k < len && matrix[i - k][j - k] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nDiagonal BR→TL\n", i, j);
                found = 1;
            }
        }
    }
}

    // Diagonal TR→BL
    if (found==0){
    for (int i = 0; i <= 5 - len; i++) {
        for (int j = len - 1; j < 5; j++) {
            int k = 0;
            while (k < len && matrix[i + k][j - k] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nDiagonal TR→BL\n", i, j);
                found = 1;
            }
        }
    }
    }

    // Diagonal BL→TR
    if (found==0){
    for (int i = len - 1; i < 5; i++) {
        for (int j = 0; j <= 5 - len; j++) {
            int k = 0;
            while (k < len && matrix[i - k][j + k] == a[k]) k++;
            if (k == len) {
                printf("%d : %d\nDiagonal BL→TR\n", i, j);
                found = 1;
            }
        }
    }
    }

    if (!found) {
        printf("Word not found.\n");
    }

    return 0;
}