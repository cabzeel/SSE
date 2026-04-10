#include <stdio.h>

/*Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/

int main() {
    int c, prev;
    prev = 0;

    while((c = getchar()) != EOF) {
        if(c != ' ') {
            putchar(c);
        } else if(c == ' ' && prev != ' ') {
            putchar(c);
          }
        prev = c;
    }    
}
