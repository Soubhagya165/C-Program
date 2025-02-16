#include<stdio.h>
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = n;
    int r = 0;
    while(n>0){
    for(int i = 1;i <= n;i++)
    {
        r = r*10;
        r = r + n%10;
        n = n/10;
    }
    }
    printf("The reverse is %d\n",r);

    if(a == r)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not palindrome");
    }

    return 0;
}