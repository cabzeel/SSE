//exercise 1.4
#include <stdio.h>

int main(void) {
    printf(" Celsius to Fahrenheit Conversion table \n");
    int lower, upper, step;
    lower = 0; upper = 300; step = 20;
    float fahr, celsius;
    celsius = lower;

    while(celsius <= upper) {
        fahr = (celsius * (9/5)) + 32;
        printf("%3.1f %6.2f \n", celsius, fahr);
        celsius = celsius + step;
    }
}
