#include <stdio.h>

int a=10;
int *ptr=&a;
printf("%p\n",ptr);
printf("%p\n",&a);
printf("%d\n",*ptr);
printf("%d\n",a);