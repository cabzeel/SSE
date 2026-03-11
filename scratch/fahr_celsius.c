#include <stdio.h>
int main(void) {
	//conversion from fahrenheit to celsius

    /*float fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
    printf("Farenheit to Celcius Convertion table \n")
	while(fahr <= upper) {
		celsius  = 5 * (fahr - 32) /  9;
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr += step;
	}*/

    //Exercise 1.4:convert from celsius to fahrenheit

    float celsius, fahr;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;

    while(celsius <= 300) {
        fahr = (celsius * (9.0 / 5.0)) + 32;
        printf("%3.0f %6.1f \n", celsius, fahr);
        celsius = celsius + step;
    }

}
