#include <stdio.h>

int main(void) {
    //convert from celsius to fahrenheit from above
    printf("Celsius conversion table from the top \n");
    int start, end, step;
    float fahr, celsius;
    start = 300; end = 0; step = 20;
     celsius = start;

     while(celsius >= end) {
         fahr = (celsius * (9.0/5.0)) + 32;
         printf("%6.1f %9.2f\n", celsius, fahr);
         celsius = celsius - step;
     }
}
