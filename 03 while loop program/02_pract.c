#include<stdio.h>
int main()
{
    int n,i=2;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(i < n)
    {
        if(n%2==0)
        {
            printf("%d is not a prime number\n",n);
            break;
        }
        i++;
    }
    if(i==n)
    {
        printf("%d is a prime number\n",n);
    }
    return 0;
}