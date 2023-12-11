#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");
    
    int i,j;
    float sum,fact;

    for(i=1; i<=7; i++)
    {
        fact = 1.0;

        for(j=1; j<=i; j++)
        {
            fact = fact * j;
        }
        sum = sum + i/fact;
    }

    printf("\nSum of series is %f",sum);

    return 0;
}