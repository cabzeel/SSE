#include <stdio.h>

#define IN 1 //in word
#define OUT 0 //out of word

/*write a program that accepts its input and prints out words on a newline;*/

int main(void) {
    int state, c;
    state = OUT;

    while((c = getchar()) != EOF) {
        if((c == ' ' || c == '\t' || c == '\n') && (state == IN)) {
            printf("\n");
            state = OUT;
        } else if((state == OUT) && (c != ' ' && c != '\t' &&  c != '\n')) {
            state = IN;
            putchar(c); 
          } else
              putchar(c);
    }
}
            
