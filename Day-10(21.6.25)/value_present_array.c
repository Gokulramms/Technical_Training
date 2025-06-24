
#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    int a,present=0;
    printf("Enter The Value To Find:");
    scanf("%d",&a);
    for (int i =0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if (arr[i]==a){
            present=1;
        }
    }
    printf("%s",(present)?"Present":"Not Present");
    return 0;
}
// OUTPUT:
// Enter The Value To Find:3
// Present
// Enter The Value To Find:6
// Not Present