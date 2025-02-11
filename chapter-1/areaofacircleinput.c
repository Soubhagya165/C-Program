#include<stdio.h>
int main () {
    int n;
    printf("Enter the Radius : ");
    scanf("%d",&n);

    float area;
    area = 3.14*n*n;
    printf("%f",area);
    return 0;
}
