#include <stdio.h>
/*write a program to print a histogram of the lengths of words in its input*/
#define MAX_LENGTH 16
int main(void)
{
    int i, c, letters;
    letters = 0;
    int words_array[MAX_LENGTH];
    
 /*clear out grabage values*/
    for(i = 0; i < MAX_LENGTH; ++i)
    {
        words_array[i] = 0;
    }
    printf("Input your word: \n");
    /*while loop to control logic*/
    while((c = getchar()) != EOF)
    {
        if(c != '\t' && c != '\n' && c != ' ')
        {
            
            ++letters;
        }
        else
        {
            
            ++words_array[letters];
            letters = 0;
        }   
    }
    /* if the user terminates mid-word..implying flow was terminated without space/tab/enter*/
    if(letters != 0)
        ++words_array[letters];
    /*print out the result*/
    for(i = 0; i < MAX_LENGTH; ++i)
    {
        printf("\n%d: ", i);
        for(int j = 0; j < words_array[i]; ++j)
            printf(" #");
        printf("\n");
    }
}
