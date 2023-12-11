#include<stdio.h>
int sum(int a,int b);

int main()
{
    int c;

    c = sum(4,6);
    printf("The sum of 4 and 6 is %d\n",c);

    return 0;
}

int sum(int a, int b)
{
    int c=a+b;
    return c;
}