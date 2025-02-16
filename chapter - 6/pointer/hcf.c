#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
int hcf(int a,int b)
{
    int hcf;
   for(int i = 1;i<=min(a,b);i++)
   {
if(a%i == 0 && b%i == 0)
{
    hcf = i;
}
   }
   return hcf;
}
int main () {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    int b;
    printf("Enter another number : ");
    scanf("%d",&b);
    int c = hcf(a,b);
    printf("Hcf of %d and %d is %d",a,b,c);
    return 0;
}