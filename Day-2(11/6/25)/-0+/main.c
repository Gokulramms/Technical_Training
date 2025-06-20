#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    (num>0)?printf("The given number is Positive.\n"):
    (num<0)?printf("The given number is Negative.\n"):
    printf("The given number is Zero.\n");
    return 0;
}
