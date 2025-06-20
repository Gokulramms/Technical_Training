#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    char next;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        if (ch == 'z' || ch == 'Z') {
            next = ch - 25;
        } else {
            next = ch + 1;
        }
        printf("The next alphabet is: %c\n", next);
    }
    else{
        printf("it is not an alphabet");
    }
    return 0;
}