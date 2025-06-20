#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value for n:");
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            int num=i+j+1;
            if(num>n){
                printf("%d",num-n);                
            }

            else{
                printf("%d",num);
            }
            
            
        }
        printf("\n");
        
    }
    return 0;
}