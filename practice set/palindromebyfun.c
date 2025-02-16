#include <stdio.h>
int palindrome(int n)
{
    int a = n;
    int r = 0;
    while(n>0)
    {
        r = r * 10;
        r = r + n % 10;
        n = n / 10;
    }
    if (a == r)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }
    return 0;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    palindrome(n);

    return 0;
}