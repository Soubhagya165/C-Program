#include<stdio.h>
int main () {
    int arr[5];
    int counteven = 0;
    int countodd = 0;
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<5;i++)
    {
        if(arr[i] % 2 == 0)
        {
            counteven++;
        }
        if(arr[i] % 2 != 0)
        {
            countodd++;
        }
    }
    printf("%d  ",counteven);
    printf("%d  ",countodd);
    return 0;
}