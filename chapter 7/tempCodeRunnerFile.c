#include<stdio.h>
int main () {
    int a[5];
    for(int i = 0;i<= 4;i++)
    {
        printf("enter %dth element : ",i+1);
        scanf("%d",&a[i]);
    }
    return 0;
}