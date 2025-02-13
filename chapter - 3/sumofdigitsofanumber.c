#include<stdio.h>
int main () {
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    // for(int i = 1;i<=500;i++)
    int r = 0;
    while(n>0)
    {
       r = r + n%10;
       n = n/10;
    }
        printf("the sum is %d\n",r);
    
    return 0;
}