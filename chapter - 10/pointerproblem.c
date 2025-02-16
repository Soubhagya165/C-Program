#include<stdio.h>
int swapping(int* a,int* b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return 0;
}
int main () {
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    int b;
    printf("Enter b : ");
    scanf("%d",&b);

    swapping(&a,&b);
    printf("After swapping a = %d\n",a);
    printf("After swapping b = %d",b);
    return 0;
}