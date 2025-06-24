// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for (int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        sum =sum + arr[i];
        
    }
    printf("%d",sum);
    return 0;
}

// OUTPUT:
// 15