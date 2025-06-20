// Online C compiler to run C program online
#include <stdio.h>
 int palindrome(int a){
        int rev=0,temp;
        temp=a;
        while(temp>0){
            rev=(rev*10)+temp%10;
            temp=temp/10;
        }
        return rev==a;
}
int main() {
   int a,lower,upper;
   printf("Number:");
   scanf("%d",&a);
   if (palindrome(a)){
       printf("The Number %d is Palindrome.",a);
   }else{
       lower=a-1;
       upper=a+1;
       while(1){
           if(palindrome(upper++)){
               printf("The %d Nearest Palindrome:%d",a,upper-1);
               break;
           }
           if(palindrome(lower--)){
               printf("The %d Nearest Palindrome:%d",a,lower+1);
               break;
           }
       }
   }
        return 0;
    }