#include<stdio.h>
int main () {
    int arr[5];
    int sum = 0;
    for(int i = 0;i<=4;i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=4;i++)
    {
        sum += arr[i];
    }
    printf("%d",sum);
    return 0;
}