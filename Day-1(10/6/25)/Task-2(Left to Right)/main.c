#include <stdio.h>

int main()
{
    int num,div=1;
    printf("Enter the number:");
    scanf("%d",&num);
    for(int temp=num;temp>=10;temp/=10)
    div*=10;
    while(div>0){
        printf("%d\n",num/div);
        num%=div;
        div/=10;
    }

    return 0;
}
