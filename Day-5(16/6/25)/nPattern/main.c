#include <stdio.h>

int main()
{
    // int n;
    // printf("Enter the value for n:");
    // scanf("%d",&n);
    for (int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++){
            printf("%d",((i+j)+1));
        }
        printf("\n");
        
    }
    return 0;
}