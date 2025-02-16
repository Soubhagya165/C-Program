#include<stdio.h>
int main () {
    int a[5],i;
    int sum = 0;
    for(i = 0;i<=4;i++)
    {
        printf("Enter %dth number : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i = 0;i<=4;i++)
       { 
        sum += a[i];
       }
        printf("The sum is %d",sum);
    return 0;
}