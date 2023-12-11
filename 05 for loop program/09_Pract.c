#include<stdio.h>

int main()
{
    int i,n,m,p, rev = 0, sum = 0;

    printf("Enter number up to 6 digit :");
    scanf("%d",&n);

    for(i = 0; i < 6; i++)
    {
        p = n % 10;
        n = n / 10;

        rev = rev * 10 + p;
        sum = sum + p;
    }

    printf("Reverse number :%d\n",rev);
    printf("Sum of number :%d",sum);

    return 0;
}