#include <stdio.h>
int main()
{
    int arr[5];
    int i;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Enter number to search : ");
    scanf("%d", &search);
    for (i = 0; i < 5; i++)
    {
        if (search == arr[i])
        {
            printf("The number exists in the array");
            break;
        }
    }
    if(search != arr[i])
    {
        printf("The number did not exists in the array");
    }

    return 0;
}