#include<stdio.h>
void increase(int);
void increase(int a)
{
    if(a == 0)
    {
        return;
    }
     increase(a-1);
     printf("%d  ",a);
     return ;
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    increase(n);
    return 0;
}