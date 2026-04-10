#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;

    do {
        n = get_int("please enter an integer between(and including) 1 and 8: ");
    }
     while(n < 1 || n > 8);

     for(int i = 1; i <= n; i++)
     {
        //space loop
        for(int space = 0; space < (n - i); space++)
        {
            printf(" ");
        }
        //left col
        for(int left = 1; left <= i; left++)
        {
            printf("#");
        }
        //constant space between columns
        printf("  ");
        //right col
        for(int right = 1; right <= i; right++)
        {
            printf("#");
        }
        printf("\n");
     }
}

