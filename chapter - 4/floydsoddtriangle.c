#include<stdio.h>
int main () {
    int n;
    printf("Enter number of lines : ");
    scanf("%d",&n);

    int a = 1;
    for(int i = 1;i<=n;i++)
    {
        for(int j=1;j<=2*i;j++)
        {
            if(a%2 != 0)
            {
                printf("%d ",a);
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}