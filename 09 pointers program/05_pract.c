#include<stdio.h>
int call(int a,int b,int *sum,int *prod,int *avg);
int main()
{
    int a=4,b=6,sum,prod,avg;
    call(a, b, &sum,&prod, &avg);
    printf("sum = %d, prod = %d, avg = %d",sum,prod,avg);
    return 0;
}
int call(int a,int b,int *sum,int *prod,int *avg)
{
    *sum = a+b; 
    *prod = a*b; 
    *avg = (a+b)/2;
}

