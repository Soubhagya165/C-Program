#include<stdio.h>
int main () {
    int a = 5;
    printf("%d\n",a);
    int* b = &a;
    *b = 10;
    printf("%d\n",a);
    return 0;
}