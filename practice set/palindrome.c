#include<stdio.h>
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
int r = 0;
int a = n;
    while(n>0)
    {
r = r*10;
r = r+n%10;
n = n/10;
    }
    printf("The reverse is %d\n",r);
    if(r==a )
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}