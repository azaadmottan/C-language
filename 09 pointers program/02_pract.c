#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a=4,b=6; 
    
    printf("sum of a and b is %d\n",a+b);                               
    printf("sum of a and b is %d\n",sum(a,b));            //call by value

    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a+b; 
    return c;
}
