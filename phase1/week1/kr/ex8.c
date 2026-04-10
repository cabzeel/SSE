#include <stdio.h>

/*Exercise 1-8. Write a program to count blanks, tabs, and newlines.*/

int main(void) {
    int b, t, nl, c;

    b = 0; t = 0; nl = 0;c = 0;
     while((c = getchar()) != EOF) {
         if(c == '\n') {
             ++nl;
         } else if(c == '\t') {
             ++t;
           } else if(c == ' ') {
               ++b;
             }
         
   }
     printf("blanks: %d; tabs: %d, new lines: %d \n", b, t, nl);
}
