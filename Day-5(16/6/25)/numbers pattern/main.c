#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            printf("%d",j+1);
            printf("%d",i+1);
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}