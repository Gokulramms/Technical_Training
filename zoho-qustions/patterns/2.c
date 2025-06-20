#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for (int i =1;i<=a;i++){
        for (int j = 1;j<=a;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

// INPUT:
// 5
// OUTPUT:
// 11111
// 22222
// 33333
// 44444
// 55555