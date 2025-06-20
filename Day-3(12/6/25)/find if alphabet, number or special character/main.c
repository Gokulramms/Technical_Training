
#include <stdio.h>
int main() {
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	(ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ?printf("It's an alphabet") :(ch >= '0' && ch <= '9') ?
	printf("It's a number") :printf("It's a special character");
	return 0;
}

