#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            break;
        }
    }
    if (i == n)
    {
        printf("prime number");
    }
    // else
    // {
    //     printf("composite number ");
    // }

    return 0;
}