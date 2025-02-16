#include<stdio.h>
int main () {

    char c;
    printf("Enter + to add\n");
    printf("Enter - to Substract\n");
    printf("Enter * to Multiply\n");
    printf("Enter / to division\n");
    scanf("%c",&c);

    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int b;
    printf("Enter another number : ");
    scanf("%d",&b);

    switch(c)
    {
        case '+':
        printf("The addition is %d",a+b);
        break;

        case '-':
        printf("The substraction is %d",a-b);
        break;

        case '*':
        printf("The Multiplication is %d",a*b);
        break;

        case '/':
        printf("The division is %d",a/b);
        break;

        default:
        printf("Enter a Valid statement");
    }
    return 0;
}