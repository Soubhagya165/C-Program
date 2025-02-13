#include<stdio.h>
int main () {
    int n;
    printf("enter an integer : ");
    scanf("%d",&n);
    for(int i = 1;i<=10;i=i+1)
    {
        printf("%d * %d = %d\n ",n,i,i*n);
    }
    return 0;
}