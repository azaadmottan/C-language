#include<stdio.h>

int main()
{
    int a[51],b[50],i,j=0,k=0;                         //One dimensional array (1D)
    for(i=100;i<=200;i++)
    {
        if(i%2==0)
        {
            a[j]=i; j++;
        }
        else
        {
            b[k]=i; k++;
        }
    }

    {printf("Even numbers are:\n");}
    for(i=0;i<=50;i++)
    {
        printf("%d\t",a[i]);
    }
     
    {printf("\n");}

    {printf("Odd numbers are:\n");}
    for(i=0;i<50;i++)
    {
        printf("%d\t",b[i]);
    }

    return 0;
}