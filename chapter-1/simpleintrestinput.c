#include<stdio.h>
int main () {
    int p;
    printf("Enter principal : ");
    scanf("%d",&p);

    int t;
    printf("Enter time : ");
    scanf("%d",&t);

    int r;
    printf("Enter rate : ");
    scanf("%d",&r);

    float si = p*t*r/100;
    printf("The intrest is %f",si);
    return 0;
}