/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool prime=true;
    printf("Enter the value:");
    scanf("%d",&num);
    for(int i=2;i<num;i++){
        if(num%i==0){
            prime=false;
            break;
        }
    }
    if(prime){
        printf("It is a prime\n");    
    }
    else{
        printf("It is not a prime\n");
    }
    

    return 0;
}