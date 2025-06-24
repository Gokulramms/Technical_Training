// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a=1234,b=1;
    while(a>0){
        b=b*(a%10);
        a=a/10;
    }
    printf("%d",b);
}