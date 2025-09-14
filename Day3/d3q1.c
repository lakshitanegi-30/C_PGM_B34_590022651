//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float cel, fah;

    //Enter the temperature
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    //Covert temperature from celsius to fahrenheit
    fah = (cel * 9.0 / 5.0) + 32.0;

    printf("%f Celsius = %f Fahrenheit\n", cel, fah);

    return 0;
}
