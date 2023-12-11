#include <stdio.h>

float average(int a, int b, int c, int d, int e);

int main()
{
    int a, b, c, d, e;

    printf("Enter your physics,chemistry,maths,english,beee marks:");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    printf("Your percentage is %f", average(a, b, c, d, e));

    return 0;
}

float average(int a, int b, int c, int d, int e)
{
    return (float)(a + b + c + d + e) / 5;
}