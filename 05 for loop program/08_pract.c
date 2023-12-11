#include<stdio.h>

int main()
{
    int i,n,m=1;

    printf("Enter a number to know the factorial:");
    scanf("%d",&n);
    
    for(i=n; i>=1; i--)
    {
        m = m*i;
    }
    printf("factorial of %d is %d",n,m);

    return 0;
}