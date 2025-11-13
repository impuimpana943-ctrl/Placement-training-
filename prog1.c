Here’s a simple weather program in C that lets the user enter a temperature (in °C) and gives a basic weather description.


---

Simple Weather Program in C

#include <stdio.h>

int main() {
    float temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0)
        printf("Weather: Freezing cold \n");
    else if (temp >= 0 && temp < 10)
        printf("Weather: Very Cold \n");
    else if (temp >= 10 && temp < 20)
        printf("Weather: Cold \n");
    else if (temp >= 20 && temp < 30)
        printf("Weather: Normal \n");
    else if (temp >= 30 && temp < 40)
        printf("Weather: Hot \n");
    else
        printf("Weather: Very Hot \n");

    return 0;
}
