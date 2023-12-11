#include<stdio.h>
#include<stdlib.h>

int sum(int a,int b);
int sub(int a,int b);
int mult(int a,int b);
float divis(float a,float b);

int main()
{
    int c,d;
    char x;
     
    call:
    printf("\n");
    printf ("Enter operator:");
    scanf("%s",&x);
    printf("Enter two number:");
    scanf("%d%d",&c,&d);
  
    switch(x)
    {
        case '+':printf("Submition = %d",sum(c,d));
        break;

        case '-':printf("Subtraction = %d",sub(c,d));
        break;

        case '*':printf("Multiplication = %d",mult(c,d));
        break;

        case '/':printf("Division = %.4f",divis(c,d));
        break;

        case '=': exit(0);
        break;

        default :printf("Invalid operator");
        break;
    }
    goto call;
    
    return 0;
}

int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mult(int a,int b)
{
    return a*b;
}
float divis(float a,float b)
{
    return a/b;
}
