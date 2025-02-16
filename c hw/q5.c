#include<stdio.h>
int main () {
    int a;
    printf("Enter the first number : ");
    scanf("%d",&a);

    int b;
    printf("Enter the second number : ");
    scanf("%d",&b);

    int c;
    printf("Enter the third number : ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("%d is greater ",a);
        }
        else
        {
            printf("%d is greater",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is greater",b);
        }
        else
        {
            printf("%d is greater",c);
        }
    }
    return 0;
}