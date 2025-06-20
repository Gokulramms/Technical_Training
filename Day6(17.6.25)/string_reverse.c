#include <stdio.h>

void transform(char *str, char *final) {
    int index = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {  
            char next = str[i] + 1;
            if (str[i] == 'z') next = 'a';
            else if (str[i] == 'Z') next = 'A';

            if (str[i] >= 'a' && str[i] <= 'z') {
                next -= 32;
            } else {
                next += 32;
            }
            final[index++] = next;
        } else {
            final[index++] = str[i];
        }
    }
    
}

int main() {
    char str[] = "aBcdEf#K$";  
    char final[100];

    transform(str, final);

    printf("%s\n", final);

    return 0;
}
