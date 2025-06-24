#include <stdio.h>

int main() {
    int arr[] = {1, 1, 1, 2, 2, 2, 3, 3,4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        int is_first_time = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_first_time = 0;
                break;
            }
        }
        if (is_first_time) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i] == arr[k]) {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }
    return 0;
}
