#include<stdio.h>
int main () {
    int a;
    printf("Enter an Integer : ");
    scanf("%d",&a);

    if(a<0)
    {
        a = (-1)*a;
    }
        printf("The absolute value is %d",a);
    
    
    return 0;
}
