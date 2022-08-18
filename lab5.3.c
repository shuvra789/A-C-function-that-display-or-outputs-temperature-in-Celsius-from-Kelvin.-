#include<stdio.h>
//function to convert temperature from Celsius into kelvin
float temp(float celsius)
{
float kelvin;
kelvin = celsius + 273.15; //formula to covert temperature from Celsius into kelvin
printf ("\nThe value of temperature in kelvin = %f", kelvin);
}
int main ()
{
float celsius;
printf ("Enter the Temperature in Celsius: ");
scanf ("%f", &celsius);
temp(celsius);
return (0);
}
