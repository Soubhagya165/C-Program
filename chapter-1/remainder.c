#include<stdio.h>
int main () {
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    int c;
    c = a%b;
    printf("the remainder is %d",c);
    return 0;
}