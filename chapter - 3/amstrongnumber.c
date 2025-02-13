#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);

    int r = 0;
    int b;
    while (n > 0)
    {
        b = n%10;
        r = b*b*b + r;
        n = n / 10;
    }
    printf("%d",r);

    return 0;
}