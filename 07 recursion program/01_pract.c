#include<stdio.h>

int fib(int a);
int main()
{
    int i,x;
    printf("Enter number to know the sequence:");
    scanf("%d",&x);
    printf("Fibonacci sequence is ");
    for(i=0; i<x; i++)
    {
        printf("%d ",fib(i));
    }

    return 0;
}
int fib(int a)
{
    if(a==0)
    {
        return 0;
    } 
    else if(a==1)
    {
        return 1;
    }
    else 
    {
        return (fib(a-1)+fib(a-2));                            // Call itself
    }
}