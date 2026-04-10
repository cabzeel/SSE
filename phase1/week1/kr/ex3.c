#include <stdio.h>
int main(void) {
    printf("This is the fahrenheit to celsius conversion table\n");
    int LOWER, UPPER, STEP;
    LOWER = 0; UPPER = 300; STEP = 20;
    float fahr, celsius;
    fahr = LOWER;

    while(fahr <= UPPER) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.1f %6.2f \n", fahr, celsius);
        fahr += STEP;
    }

}
