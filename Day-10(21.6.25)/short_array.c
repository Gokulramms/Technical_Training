// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[]={2,5,1,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i =0;i<n-1;i++){
        for (int j =0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");
    return 0;
}

// OUTPUT:
// Sorted array: [1, 2, 4, 5, 6]