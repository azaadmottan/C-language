#include <stdio.h>

int main()
{
    float n1, n2;
    char o;

    printf("Enter any operator[+,-,*,/]: ");
    scanf("%c", &o);

    printf("Enter two number: ");
    scanf("%f %f", &n1, &n2);

    switch (o)
    {
        case '+': printf("Sum of %f and %f is %f", n1, n2, n1 + n2);
        break;

        case '-':
        printf("Subtraction of %f and %f is %f", n1, n2, n1 - n2);
        break;

        case '*':
        printf("Multiplication of %f and %f is %f", n1, n2, n1 * n2);
        break;

        case '/':
        printf("Division of %f and %f is %f", n1, n2, n1 / n2);
        break;

        default:
        printf("Invalid operator");
        break;
    }

    return 0;
}