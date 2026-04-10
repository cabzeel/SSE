#include <stdio.h>

int main(void) {
    int c; //declare a value that stores the result of the getchar() != EOF comparison;
    c = getchar() != EOF;
    printf("the expression getchar() != EOF evaluates to %d \n", c);
}
