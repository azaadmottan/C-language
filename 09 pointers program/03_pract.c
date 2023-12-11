#include<stdio.h>
int call(int *a,int *b);
int main()
{
    int a=4,b=6;
    printf("The value of a is %d and b is %d\n",a,b);
    call(&a,&b);                                                      //call by reference
    printf("After the swaping the value of a is %d and b is %d\n",a,b);
    return 0;
}
int call(int *a,int *b)
{   
    int c;
    c = *b; 
    *b = *a;
    *a = c; 
}