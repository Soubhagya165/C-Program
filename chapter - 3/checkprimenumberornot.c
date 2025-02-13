#include <stdio.h>
int primenumber(int n)
{
    int i;
    for(i = 2;i<=n;i++)
    {
        if(n%i == 0)
        {
            break;
        }
    }
    if(i==n)
    {
        printf("prime number");
    }
    else
    {
        printf("composite number");
    }
    return 0;
}
int main()
{
    int i, n;
    printf("enter a number : ");
    scanf("%d", &n);
    
    primenumber(n);
    return 0;
}