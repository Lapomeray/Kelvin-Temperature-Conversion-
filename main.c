#include <stdio.h>

/*
 * This program reads in a temperature in degrees Kelvin
 * and then prints the same temperature expressed in
 * degrees Celsius and degrees Fahrenheit
 *
 * Input - Temperature in degrees Kelvin
 * Outputs - Temperatures in degrees Celsius and Fahrenheit

 */

int main(void) {

    float kelvin;
    float celsius;
    float fahrenheit;

    /* Ask the user for a temperature in degrees Kelvin */

    printf("Enter a temperature in degrees Kelvin \n");
    scanf("%f",&kelvin);



    /*Output the Degrees Kelvin into Celsius and Fahrenheit */

    celsius = kelvin - 273.15;
    fahrenheit = (celsius * 9/5) + 32;
    printf("Celsius is %f \n", celsius);
    printf("Fahrenheit is %f \n", fahrenheit);

    return 0;
}

