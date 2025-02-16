#include<stdio.h>
int main () {
    int n;
    printf("Enter numnber of lines : ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++)
    {
        char ch = 'A';
        int a = 1;
        for(int j = 1;j<=i;j++)
        {
            if(i%2 != 0)
            {
                printf("%d ",a);
                a++;
            }
            else
            {
                printf("%c ",ch);
                ch++;
            }
        }
        printf("\n");
    }
    return 0;
}