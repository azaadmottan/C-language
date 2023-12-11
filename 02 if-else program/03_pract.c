#include <stdio.h>

int main()
{
    int a;
    printf("enter a number less than 20 :");
    scanf("%d", &a);
    if (a < 20)
    {
        printf("%d is less than 20\n", a);
    }
    else
    {
        printf("%d is greater than 20\n", a);
    }
    return 0;
}