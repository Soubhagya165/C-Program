#include<stdio.h>
void increasing(int n,int x)
{
    printf("%d  ",x);
    if(x>=n) 
    {
    return ;
    }
    increasing(n,x+1);
    return ;
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    increasing(n,1);
    return 0;

}