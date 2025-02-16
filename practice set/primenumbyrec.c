#include<stdio.h>
int primenum(int n,int i)
{
    if(n%i == 0)
    {
        return 0;
    }
    if(i*i>n)
    {
        return 1;
    }
    return primenum(n,i+1);
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(primenum(n,2))
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is composite");
    }
    return 0;
}