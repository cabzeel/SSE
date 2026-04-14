#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    char op;
    double result;

    printf("Terminal Calculator app\n");
    printf("Number a: ");
    scanf("%d", &a);
    printf("operator: ");
    scanf(" %c", &op);
    printf("Number b: ");
   scanf("%d", &b);

    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '*')
        result = a * b;
    else if(op == '/')
        result = (float)a / b;
    else if(op == '%')
        result = a % b;
    else if(op == '^')
        result = pow((double)a, (double)b);
    else
    {
        printf("Invalid operator");
        return 1;
    }
    printf("%d %c %d =  %lf", a, op, b, result);
}

