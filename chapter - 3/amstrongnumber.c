#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);

    int reverse = 0;
    int b;
    while (n > 0)
    {
        b = n%10;
        reverse = b*b*b + reverse;
        n = n / 10;
    }
    printf("%d",reverse);

    return 0;
}
