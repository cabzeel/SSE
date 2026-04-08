#include <stdio.h>
int main(void) {
    char letter;
    printf("enter a single letter: ");
    //old method
   // scanf("%c", &letter);

   // printf("the letter you entered is: %c", letter);
   // getChar method
    
    letter = getchar();
    putchar(letter);
}
