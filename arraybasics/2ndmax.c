#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int max2;
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i]; 
        }
    }
    printf("%d  ", max2);
    return 0;
}