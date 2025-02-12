#include<stdio.h>
int main () {
    int length;
    printf("Enter Length of the Rectangle : ");
    scanf("%d",&length);

    int breadth;
    printf("Enter Breadth of the Rectangle : ");
    scanf("%d",&breadth);

    int isarea,perimeter;
    isarea = length*breadth;
    perimeter = 2*(length+breadth);

    if(isarea>perimeter)
    {
        printf("area is greater %d",isarea-perimeter);
    }
    else
    {
        printf("perimeter is greater %d",perimeter-isarea);
    }
    return 0;
}
