#include <stdio.h>

/*write a program that takes it's input and separates every word with a new line;*/
int main(void) {
    int prev, c;
    prev = 0;

    while((c = getchar()) != EOF) {
        if(c != ' ' && c != '\t' && c != '\n')
            putchar(c);
        else if(c == ' ' && prev != ' ') {
            printf("\n");
        }

        prev = c;
    }
}
