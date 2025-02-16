#include<stdio.h>
int add(int c,int d)
{
    return c+d;
}
int difference(int x,int y)
{
    return x-y;
}
int multiplying(int x,int y)
{
    return x*y;
}
float divide(float x,float y)
{
    return x/y;
}
int main () {
    int a;
    printf("Enter a number ");
    scanf("%d",&a);

    int b;
    printf("Enter another number ");
    scanf("%d",&b);

    int sum = add(a,b);
    printf("the sum is %d\n",sum);

    int diff = difference(a,b);
    printf("the diff is %d\n",diff);

    int multiply = multiplying(a,b);
    printf("the mul is %d\n",multiply);

    float division = divide(a,b);
    printf("the div is %f\n",division);




    return 0;
}