#include<stdio.h>
int primenum(int,int);
int primenum(int a,int b)
{
    if(a%b == 0)
    {
        return 0;
    }
    if(a<b*b)
    {
        return 1;
    }
    return primenum(a,b+1);
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(primenum(n,2))
    {
        printf("The number is prime ");
    }
    else 
    {
        printf("the number is composite");
    }
    return 0;
}