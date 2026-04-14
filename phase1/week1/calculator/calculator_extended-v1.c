#include <stdio.h>
#include <math.h>

#define YES 1
#define NO 0

int main(void)
{
    int store, loop, a, b, use_store;
    char op, c;
    float result;
    
    loop = YES;
    use_store = NO;
    while(loop == YES)
    {
        //get number a:
        if(use_store == NO)
        {
            printf("Enter number a: \n");
            scanf("%d", &a);
         }
        else
        {
            a = store;
            printf("Number a: %d", a);
        }
        //get operator
        printf("Enter operator: \n");
        scanf(" %c", &op);
        //get number b
        printf("Enter number b: \n");
        scanf("%d", &b);
        //calculation logic using switch
        switch(op)
        {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '/':
                result = (float)a / b;
                break;
            case '%':
                result = a % b;
                break;
            case '^':
                result = pow((float)a, (float)b);
                break;
            case '*':
                result = a * b;
                break;
            default:
                printf("Invalid Operator");
                return 1;
        }
        printf("result: %.2f\n", result);
        printf("Do you want to store the result?\n");
        scanf(" %c", &c);
        if(c == 'y')
            {
                store = result;
            }
        printf("Do you want to continue?(y/n) \n");
        scanf(" %c", &c);
        if(c == 'y')
            {
                loop = YES;
                printf("Do you want to use previous calculation?(y/n)\n");
                scanf(" %c", &c);
                if(c == 'y')
                  use_store = YES;
            }
        else
            loop = NO;

    }
}
