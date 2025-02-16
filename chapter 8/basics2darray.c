#include<stdio.h>
int main () {
    int arr[4][0];
    arr[0][0] = 4;
    arr[0][1] = 7;
    arr[1][0] = 2;
    arr[1][1] = 9;
    printf("%d",arr[1][1]);

    return 0;
}