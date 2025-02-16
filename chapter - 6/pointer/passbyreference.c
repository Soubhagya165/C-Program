#include <stdio.h>
void swap(int*, int*);
void swap(int* a, int* b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    return ;
}
int main()
{
    int a;
    printf("Enter a ");
    scanf("%d", &a);
    int b;
    printf("enter b ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);
    return 0;
}