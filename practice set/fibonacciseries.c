#include<stdio.h>
int main () {
    int a = 0;
    int b = 1;
    int next;
    for(int i = 1;i<= 15;i++)
    {
        printf("%d  ",a);
        next = a+b;
        a = b;
        b = next;
    }
    return 0;
}