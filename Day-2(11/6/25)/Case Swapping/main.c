#include <stdio.h>

int main()
{
    char str[100];
    int i=0;
    printf("Enter the String:");
    scanf("%s",str);
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
        else if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
        i++;
    }
    printf("Swapped Case:%s\n",str);
    return 0;
}
