#include<stdio.h>
int main () {
    int arr[5];
    printf("Enter an array : ");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int search;
    printf("Enter number to search : ");
    scanf("%d",&search);
    int is_array = 0;
    for(int i = 0;i<5;i++)
    {
        if(search == arr[i])
        {
            is_array = 1;
            break;
        }
    }
    if(is_array)
    {
        printf("The number is present in the array");
    }
    else
    {
        printf("The number is not present in the array");
    }
    return 0;
}