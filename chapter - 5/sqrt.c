#include<stdio.h>
#include<math.h>
int min(int x,int y)
{
    if(x<y)
    {
        printf("%d is minimum",x);
    }
    else
    {
        printf("%d is minimum",y);
    }
    return 0;
}
int main (){
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int b = sqrt(a);
    printf("the square root is %d\n",b);
    int c = pow(3,4);
    printf("the power is %d\n",c);
    int m = min(9,8);
    return 0;
}