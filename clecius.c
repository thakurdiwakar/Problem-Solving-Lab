#include <stdio.h>

float celsius_to_fahrenheit(float N)
{
return ((N * 9.0 / 5.0) + 32.0);
}

int main()
{
float N = 20.0;

printf("Temperature in Fahrenheit : %0.2f",
celsius_to_fahrenheit(N));
return 0;
}
