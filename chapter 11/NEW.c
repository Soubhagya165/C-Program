#include<stdio.h>
int main () {
    for(int i = 1;i<=100;i++)
    {
        if(i == 5)
        {
            continue;
        }
        if(i == 10)
        {
            break;
        }
        printf("%d  ",i);
    }
    return 0;
}