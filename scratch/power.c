#include <stdio.h>

//build a custom power function in C
int power(int m, int n);

int main(void)
{
    int i;
    for(i = 0; i < 10; ++i)
    {
        printf("%d, %d, %d\n", i, power(2, i), power(-3, i));
    }
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for(i = 1; i <= n; ++i)
    {
        p = p * base;
    }
    return p;
}