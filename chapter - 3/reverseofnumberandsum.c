#include <stdio.h>
int main()
{
    int sum = 0;
    int n;
    printf("the number is ");
    scanf("%d", &n);
    int r = 0;
    int a = n;
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    printf("the reverse is %d\n", r);
   printf("the sum is %d + %d = %d",r,a,r+a);
    return 0;
}