#include<stdio.h>
int main () {
    int a = 10;
    int b = 10;
    printf("%p\n",&b);
    printf("%p",&a); //%p is the format specifier to print the address of a variable
    return 0;
}