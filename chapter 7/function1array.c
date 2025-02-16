#include<stdio.h>
void function(int arr[])
{
    arr[2] = 21;
}
int main () {
    int arr[5] = {2,5,7,9,3};
    function(arr);
    printf("%d",arr[2]);
    return 0;
}