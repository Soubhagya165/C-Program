#include<stdio.h>
int main () {
    int x = 10;
    int *ptr =  &x;
    
    printf("The address of x = %p\n",&x);
    printf("The value of x = %d\n",x);

    printf("The address of ptr = %p\n",ptr);
    printf("Value stored at pointer = %d\n",*ptr);
    ptr++;
    printf("The address of ptr = %p\n",ptr);
    printf("Value stored at pointer = %d\n",*ptr);
    ptr--;
    printf("The address of ptr = %p\n",ptr);
    printf("Value stored at pointer = %d\n",*ptr);
    ptr += 2;
    printf("The address of ptr = %p\n",ptr);
    printf("Value stored at pointer = %d\n",*ptr);
    ptr += 2;
    printf("The address of ptr = %p\n",ptr);
    printf("Value stored at pointer = %d\n",*ptr);
    ptr -= 4;
    printf("The address of ptr = %p\n",ptr);
    printf("Value stored at pointer = %d\n",*ptr);
    int y = *ptr+5;
    printf("The address of ptr = %p\n",&y);
    printf("Value stored at pointer = %d\n",y);
    y = *ptr-10;
    printf("The address of ptr = %p\n",&y);
    printf("Value stored at pointer = %d\n",y);

    return 0;
}