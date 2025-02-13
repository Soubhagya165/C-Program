#include <stdio.h>
int main()
{
    int a, b, i;
    printf("enter two numbers ");
    scanf("%d%d", &a, &b);
    int power = 1;
    for (i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("%d", power);
    return 0;
}