#include<stdio.h>
int fun (int arr[])
{
    printf("%d",arr[3]);
    return 0;
}
int main () {
    int arr[5] = {2,5,6,7,4};
    fun(arr);
    return 0;
}