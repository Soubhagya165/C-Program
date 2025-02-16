#include<stdio.h>
int main () {
    int arr[5],i;
    for(int i = 0;i<5;i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<5;i++)
    {
        if(i%2 == 0)
        {
            arr[i] = arr[i]+10;
        }
        if(i%2 != 0)
        {
            arr[i] = arr[i] *2;
        }
    printf("%d  ",arr[i]);
    }
    return 0;
}