#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    printf("Enter the value of b \n");
    scanf("%d", &b);
    printf("Enter the value of c \n");
    scanf("%d", &c);
    if ((a > b) && (a > c))
    {
        printf("%d is greater than %d and %d", a, b, c);
    }
    else if ((b > a) && (b > c))
    {
        printf("%d is the greater than %d and %d", b, a, c);
    }
    else if ((c > a) && (c > b))
    {
        printf("%d is greater than %d and %d", c, a, b);
    }
    return 0;
}