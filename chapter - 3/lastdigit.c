#include<stdio.h>
int main () {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int ld;
    ld = n%10;
    printf("the last digit is %d",ld);

    return 0;
}