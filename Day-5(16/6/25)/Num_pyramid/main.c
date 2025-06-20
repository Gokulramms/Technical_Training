
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int s=0;s<(n-i)-1;s++)
        {
            printf(" ");
        }
        for(int j=0;j<(i*2)+1;j++){
            if(j<=i){
                printf("%d",(i-j));
            }
            else{
                printf("%d",j-i);
            }
                            
        }
        printf("\n");
    }
    return 0;
}