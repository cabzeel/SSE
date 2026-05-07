#include <stdio.h>
/*Print out the number of digits, white spaces and others*/

int main(void)
{
    int i, c, nother, nwhite;
    int ndigit[10]; //defining aray with size
    
    nother = nwhite = 0;
    /*for loop that sets the ndigit count for all digits to 0*/
    for(i = 0; i < 10; ++i)
        ndigit[i] = 0;
    /*while loop to handle sorting*/
    while((c = getchar()) != EOF)
    {
        if(c >= '0' && c <= '9') /*referencing the characters between and including ASCII 48 and 57*/
            ++ndigit[c - '0']; 
        else if(c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }
    /*print out the digits*/
    printf(" digits=");
    for(i = 0; i < 10; i++)
        printf("%d", ndigit[i]);
    /*print out everything else*/
    printf(", whites = %d, others = %d\n", nwhite, nother);
}
