#include<stdio.h>
void decreasing(int n)
{
    printf("%d  ",n);
    if(n==1) 
    return ;
    decreasing(n-1);
    return ;
}
int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    decreasing(n);
    return 0;

}