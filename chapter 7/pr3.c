#include<stdio.h>
int main () {
    int arr[5];
    int product = 1;
    for(int i = 0;i<= 4;i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<= 4;i++)
    {
        product = product * arr[i];
    }
    printf("%d",product);
    return 0;
}