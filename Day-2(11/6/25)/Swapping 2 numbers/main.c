#include <stdio.h>

int main() 
{
   int a=10, b=6;
   a=a+b;//temp=a;  //a=a^b;
   b=a-b;//a=b;     //b=a^b;
   a=a-b;//b=temp;  //a=a^b;
   printf("a = %d\n",a);
   printf("b = %d",b);
}