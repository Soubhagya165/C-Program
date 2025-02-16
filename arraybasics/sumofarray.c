#include<stdio.h>
int main () {
    int arr[5];
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<5;i++)
    {
        sum += arr[i];
    }
    printf("The sum of all the elements = %d",sum);
    return 0;
}