#include<stdio.h>
int  sum(int n)
{
    int s = 0;
    for(int i = 1;i<=n;i++)
    {
        s += i;
    }
    printf("%d ",s);
    return 0;
}
int main () {
    int n;
    printf("Enter a number ");
    scanf("%d",&n);

    sum(n);
    printf("\n");
    return 0;
}