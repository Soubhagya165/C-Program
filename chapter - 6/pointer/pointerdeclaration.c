#include<stdio.h>
int main () {
    int a = 55;
    printf("the address of a is %p\n",&a);
    int* b = &a;
    printf("the value stored in b is %p\n",b);
    printf("the address of b is %p\n",&b);
    printf("the value stored in b is %d\n",*b);
    return 0;
}