#include<stdio.h>
int main () {
    int a[7],i;
    int max = -1;
    for( i = 0;i<=6;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i =0;i<=7;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
}