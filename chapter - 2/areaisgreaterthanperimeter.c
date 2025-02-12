#include<stdio.h>
int main () {
    int l;
    printf("Enter Length of the Rectangle : ");
    scanf("%d",&l);

    int b;
    printf("Enter Breadth of the Rectangle : ");
    scanf("%d",&b);

    int area,perimeter;
    area = l*b;
    perimeter = 2*(l+b);

    if(area>perimeter)
    {
        printf("area is greater %d",area-perimeter);
    }
    else
    {
        printf("perimeter is greater %d",perimeter-area);
    }
    return 0;
}