#include<stdio.h>
int main () {
    int a;
    printf("Enter a year : ");
    scanf("%d",a);

    if(a%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}

