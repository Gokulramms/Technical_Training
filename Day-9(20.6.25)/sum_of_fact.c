#include <stdio.h>
int fac(int a){
    int value=1;
    for (int i =1;i<=a;i++){
        value*=i;
    }
    return value;
}
int main() {
    int a,tem,pro=0,divd=100;
    scanf("%d",&a);
    while(a>0){
        tem=a/divd;
        printf("%d!",tem);
        if (divd==1){
            printf(" = ");
        }else{
            printf(" + ");
        }
        pro+=fac(tem);
        a=a-(tem*divd);
        divd=divd/10;
    }
    printf("%d",pro);
    return 0;
}