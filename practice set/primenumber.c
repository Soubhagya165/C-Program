#include<stdio.h>
int main () {
    int n;
    for(int i = 1;i<=200;i++)
    {
        for(n = 2;n<=200;n++)
        {
            if(i%n == 0)
            {
                break;
            }
        }
        if(i == n)
        {
            printf("%d  ",i);
        }
    }
    return 0;
}