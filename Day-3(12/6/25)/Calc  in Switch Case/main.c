#include <stdio.h>

int main() {
    int a,b;
    char ch;
    printf("enter 2 numbers with space:");
    scanf("%d %d", &a,&b);
    printf("enter the operator:");
    scanf(" %c",&ch);
    switch(ch){
        case '+': printf("%d",a+b); break;
        case '-': printf("%d",a-b); break;
        case '*': printf("%d",a*b); break;
        case '/': printf("%d",a/b); break;
        default: printf("Invalid");
    }
   
    
}