#include <stdio.h>
int main()
{
    // int n;
    // printf("enter a number : ");
    // scanf("%d", &n);
    int i;
    for ( i = 1; i <= 100; i++)
    {
        if(i%2==0)
        {
        continue;
        }
    
    printf("%d\n", i);
    }
    return 0;
}