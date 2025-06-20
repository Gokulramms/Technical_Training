#include <stdio.h>
#include<string.h>
// int main()
// {
//     char str[]="H1e2l3l4o";
//     char str2[]=" ";
//     for(int i=0;i<5;i++){
//         printf("%c",str[i]);
//     }
//     return 0;
// }

int main(){
    char str[]="H1e2l3l4o";
    char str2[100]=" ";
    for (int i = 0; i < strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            printf("%c", str[i]); 
            int len = strlen(str2);
            str2[len] = str[i];       
            str2[len + 1] = '\0';     
        }
    }
    printf("\nstr2: %s\n", str2);
    return 0;
}

