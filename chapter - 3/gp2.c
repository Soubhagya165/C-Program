#include<stdio.h>
int main () {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a = 100;
    for(int i = 1;i<=n;i = i+1)
    {
        printf("%d  ",a);
        a = a-3;
    }
    return 0;
}