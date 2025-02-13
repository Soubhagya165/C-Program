#include<stdio.h>
int main () {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    int d = n;

    int r = 0;
    while(n>0)
    {
        r = r*10;
        r= r+(n%10);
        n = n/10;

    
    }
    printf("the reverse is %d\n",r);

    if(r == d)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }
    return 0;
}