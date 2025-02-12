#include<stdio.h>
int main () {
    float cp;
    printf("Enter the cost price : ");
    scanf("%f",&cp);

    float sp;
    printf("Enter the selling price : ");
    scanf("%f",&sp);

    if(sp>cp)
    {
        printf("The profit is %f",sp-cp);
    }
    if(cp>sp)
    {
        printf("The Loss is %f",cp-sp);
    }
    if(cp==sp)
    {
        printf("no profit no loss");
    }
    return 0;
}