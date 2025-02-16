#include<stdio.h>
void function(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d  ",n);
    function(n-1);
    printf("%d  ",n);
    return;
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    function(n);
    return 0;
}