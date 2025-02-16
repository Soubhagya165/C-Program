#include<stdio.h>
int main () {
    int arr[5];
    for(int i = 0;i<5;i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int i = 0;i<5;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    printf("the maximum number is %d",max);
    return 0;
}