#include<stdio.h>
int function(int *a)
{
    printf("%d",*a);
    return 0;
}
int main () {
    int a = 58;
    printf("%p\n",&a);
    function(&a);
    return 0;
}