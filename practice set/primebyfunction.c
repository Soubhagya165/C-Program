#include<stdio.h>
int primenumber(int x)
{
    int i,n;
    for(i = 1;i<=x;i++)
    {
        
        for(n = 2;n<=x;n++)
        {
            if(i%n == 0)
            {
                break;
            }
        }
        if (i == n)
        {
            printf("%d  ",i);
        }
    }
    return i;
}
int main () {
    int a = primenumber(50);
    printf("\n");
    int b = primenumber(100);
    printf("\n");
    int c = primenumber(300);
}