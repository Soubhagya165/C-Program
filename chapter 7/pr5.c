#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i = 0;i<=4;i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("The minimum number is : %d",min);
    return 0;
}