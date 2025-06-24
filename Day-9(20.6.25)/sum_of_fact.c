#include <stdio.h>

int fac(int a){
    int value=1;
    for (int i=1; i<=a; i++) {
        value*=i;
    }
    return value;
}

int digit(int num) {
    int n=1;
    while (num/n>=10){
        n*=10;
    }
    return n;
}

int main(){
    int a,digits,sum=0;
    scanf("%d",&a);

    int divd=digit(a);

    while (divd > 0) {
        digits = a / divd;
        printf("%d!", digits);

        a-=digits*divd;
        divd/=10;

        sum+=fac(digits);

        if (divd == 0)
            printf(" = ");
        else
            printf(" + ");
    }

    printf("%d\n", sum);
    return 0;
}
// OUTPUT:
// 1234
// 1! + 2! + 3! + 4! = 33