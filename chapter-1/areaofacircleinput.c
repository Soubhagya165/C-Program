#include<stdio.h>
int main () {
    int r;
    printf("Enter the Radius : ");
    scanf("%d",&r);

    float area;
    area = 3.14*r*r;
    printf("%f",area);
    return 0;
}