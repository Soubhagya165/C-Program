#include<stdio.h>
int main () {
    float temp;
    printf("Enter the temperature in celcius : ");
    scanf("%f",&temp);

    float farenheit = (1.8*temp) +32;
    printf("The temperature in farenheit = %f",farenheit);
    return 0;
}