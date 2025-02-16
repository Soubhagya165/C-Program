#include<stdio.h>
int main () {
    int a = 10;
    printf("%p\n",&a);
    int* b = &a;
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}