#include<stdio.h>

long int factorial(int a);                   //using recursion

int main()
{
    long int a;
    printf("Enter the number:");
    scanf("%lld",&a);
    printf("The factorial of %d is %d\n",a,factorial(a));
    return 0;
}
long int factorial(int a)                
{
    if(a==1 || a==0)
    {
        return 1;
    }
    else
    {
        return a * factorial(a-1);                               // Call itself
    }
}