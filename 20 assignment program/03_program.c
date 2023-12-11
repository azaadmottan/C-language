#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");

    float a,b,c,d;

    printf("\nEnter angle(1):");
    scanf("%f",&a);
    printf("Enter angle(2):");
    scanf("%f",&b);
    printf("Enter angle(3):");
    scanf("%f",&c);

    d = a + b + c;

    if(d == 180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }

    return 0;
}