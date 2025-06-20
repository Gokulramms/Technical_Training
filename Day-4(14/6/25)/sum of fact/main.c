#include <stdio.h>

int main()
{
    int n,factorial=1,sum=0;
    printf("Enter the value:");
    scanf("%d",&n);
    for(int i=2;i<=n+1;i++){
        factorial *=i;
        sum+=factorial;
    }
    printf("Factorial of %d = %d\n",n,sum);

    return 0;
}