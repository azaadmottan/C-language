#include <stdio.h>

int main()
{
    int a, b, c, d;
    float e;
    printf("enter three no");
    scanf("%d %d %d", &a, &b, &c);
    d = a + b + c;
    printf("the add of three no is %d\n", d);
    d = a - b - c;
    printf("the sub of three no is %d\n", d);
    d = a * b * c;
    printf("the multiplication of three no is %d\n", d);
    e = (float)a * b/ c ;
    printf("the division of three no is %f\n", e);

    return 0;
}