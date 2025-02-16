#include<stdio.h>
int main () {
    for(int i = 1;i<=100;i++)
    {
        if(i == 10)
        {
            goto end;
        }
        printf("%d  ",i);
    }
    end:
    {
        printf("Exit");
    }
    return 0;
}