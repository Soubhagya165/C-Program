#include<stdio.h>
int main () {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int b;
    printf("Enter another number : ");
    scanf("%d",&b);

    printf("The sum is : %d\n",a+b);
    printf("The substraction is : %d\n",a-b);
    printf("The multiplication is : %d \n",a*b);
    printf("The division is : %d\n",a/b);
    printf("The remainder is : %d \n",a%b);
    return 0;
}