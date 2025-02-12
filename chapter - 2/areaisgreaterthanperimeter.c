#include<stdio.h>
int main () {
    int length;
    printf("Enter Length of the Rectangle : ");
    scanf("%d",&length);

    int breadth;
    printf("Enter Breadth of the Rectangle : ");
    scanf("%d",&breadth);

    int area,perimeter;
    area = length*breadth;
    perimeter = 2*(length+breadth);

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
