//Binary to decimal

#include <stdio.h>

int main()
{
    int b1,b2,b3,b4,decimal;
    printf("Enter 4-bit binary value(Start with 1):");
    scanf("%d%d%d%d",&b1,&b2,&b3,&b4);
    if((b1!=0&&b1!=1)||(b2!=0&&b2!=1)||(b3!=0&&b3!=1)||(b4!=0&&b4!=1)){
        printf("Only 0 or 1 allowed.\n");
        return 1;
    }
    if(b1!=1){
        printf("First bit must Starts from 1.\n");
        return 1;
    }
    decimal=b1*8+b2*4+b3*2+b4*1;
    printf("Decimal:%d\n",decimal);

    return 0;
}
