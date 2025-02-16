#include<stdio.h>
int main () {
    char d;
    printf("Enter a character : ");
    scanf("%c",&d);

    float b;
    printf("Enter a float value : ");
    scanf("%f",&b);

    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);

    double c;
    printf("Enter a double value : ");
    scanf("%lf",&c);

    printf("the character is : %c\n",d);
    printf("the integer is : %d\n",a);
    printf("the float value is : %f\n",b);
    printf("the double value is : %lf\n",c);
    return 0;
}