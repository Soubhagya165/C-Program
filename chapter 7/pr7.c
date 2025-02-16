#include<stdio.h>
int main () {
    int arr[6];
    for(int i =0 ;i<= 5;i++)
    {
        printf("Enter %dth number of elements : ",i+1);
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i = 0;i<=5;i++)
    {
        if(arr[i]>40)
        {
            count += 1;
        }
    }
            printf("the number of elements greater than 40 = %d  ",count);
    return 0;
}