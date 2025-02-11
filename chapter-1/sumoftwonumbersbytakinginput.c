#include<stdio.h>
int main () {
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);

    int y;
    printf("Enter another number : ");
    scanf("%d",&y);

    int z;
    z = x+y;
    printf("The sum is %d",z);
    return 0;
}