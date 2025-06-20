#include <stdio.h>

int main()
{
    int a=12345,sum=0;
    while(a>0){
        sum=sum+(a%10);
        a=a/10;
        printf("%d\n",sum);
    }
    

    return 0;
}
