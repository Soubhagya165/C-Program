#include<stdio.h>
int fibonacci (int);
int fibonacci (int n)
{
int a = 0;
    int b = 1;
    int next;
    for(int i = 1;i<= n;i++)
    {
        printf("%d  ",a);
        next = a+b;
        a = b;
        b = next;
    }
    return 0;
}
int main () {
    
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
    
    return 0;
}