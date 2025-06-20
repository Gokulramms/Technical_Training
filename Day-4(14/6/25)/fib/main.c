/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num=5,pre=0,cur=1,temp=0;
    printf("%d",pre);
    for(int i=1;i<=num;i++){
        printf("%d",cur);
        temp=pre+cur;
        pre=cur;
        cur=temp;
    }

    return 0;
}