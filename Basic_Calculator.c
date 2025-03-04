#include<stdio.h>
int main()
{
    float num1, num2;
    char op;
    printf("Choose an operator (+, -, *, /, %%): ");
    scanf("%c", &op);
    printf("Enter any two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (op)
    {
        case '+':
            printf("sum of %f and %f is %f", num1, num2, num1 + num2);
            break;
        case '-':
            printf("subtraction of %f and %f is %f", num1, num2, num1 - num2);
            break;
        case '*':
            printf("multiplication of %f and %f is %f", num1, num2, num1 * num2);
            break;
        case '/':
        if (num2 == 0)
        {
            printf("division by zero is not possible");
        }
        else
        {
            printf("division of %f and %f is %f", num1, num2, num1 / num2);
        }
            break;
        case '%':
        if (num2 == 0)
        {
            printf("division by zero is not possible");
        }
        else
        {
            printf("remainder of %f and %f is %f", num1, num2, (int)num1 % (int)num2);
        }
            break;
        default:
            printf("invalid operator");
            break;
    }
    return 0;
}