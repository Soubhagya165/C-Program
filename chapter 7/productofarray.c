#include<stdio.h>
int main () {
    int a[3],i;
    int product = 1;
    for(i = 0;i<=2;i++)
    {
        printf("Enter %dth number : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 0;i<=2;i++)
    {
        product = product*a[i];
    }
    printf("the product is %d",a[i]);
    return 0;
}