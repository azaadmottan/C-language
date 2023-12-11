#include<stdio.h>
int main()
{
    int t1=0,t2=1,t,n,i;

    printf("Enter the number of terms to know the fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci series is: %d %d ",t1,t2);
    for(i=3;i<=n;i++)
    {
        t=t1+t2;
        t1=t2;                   //swaping   
        t2=t;
        printf("%d ",t);
    }
    return 0;
}