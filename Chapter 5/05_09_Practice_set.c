#include <stdio.h>
/*
Q2. Write a function to convert celcius temperatur to fahrenhiat
Formula :- (0°C × 9/5) + 32 = 32°F
*/
float temp(float celcius);

int main()
{
    float c, f;
    printf("Enter the temprature\n");
    scanf("%f", &c);
    printf("%f Celcius = %f Fahrenheit\n", c, temp(c));
    return 0;
}

float temp(float celcius)
{
    float fahrenheit;
    fahrenheit = (celcius*9/5) + 32;
    return fahrenheit;
}