// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("Number:");
    scanf("%d",&a);
    for (int i = 1;i<=a;i++){
        int temp=i;
        int count=a-1;
        for(int j=1;j<=i;j++){
            if (j>1){
                temp=temp+count;
                count=count-1;
            }
            printf("%d\t",temp);
        }
        printf("\n");
    }

    return 0;
}

// INPUT:
// 5
// OUTPUT:
// 1	
// 2	6	
// 3	7	10	
// 4	8	11	13	
// 5	9	12	14	15	
