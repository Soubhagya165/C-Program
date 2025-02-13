#include<stdio.h>
int main () {
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    int count = 0;
    while(a!=0)
    {
        a = a/10;
        count++;
    }
    printf("the number of digits are %d",count);
    return 0;
}