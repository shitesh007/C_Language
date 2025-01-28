/*Write a program to convert temperature. (Fahrenheit-centigrade and vice-versa.. */

#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("enter the temprature in celcius:");
    scanf("%f", &celcius);

    fahrenheit = (9.0 / 5.0) * (celcius) + 32;

    printf("the fahrenhiet in fahrenhiet:%.2f\n", fahrenheit);

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) * (5.0 / 9.0);

    printf("the celcius is in temprature %.2f\n", celcius);

    
    return 0;
}
