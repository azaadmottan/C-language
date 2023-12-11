#include<stdio.h>
void physics();
void chemistry();           //Function prototype
void math();

int main()
{
    physics();
    chemistry();            //Function call
    math();
    return 0;
}
void physics()
{printf("Physics\n");}
void chemistry()
{printf("Chemistry\n");}    //Function definition
void math()
{printf("Math\n");}


