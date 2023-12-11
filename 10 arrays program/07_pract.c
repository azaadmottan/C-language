#include<stdio.h>

int main()
{
    int a[10],b[5],c[5],i,j=0,k=0;                    //One dimensional array (1D)

    printf("Enter series:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i]; j++;
        }
        else
        {
            c[k]=a[i]; k++;
        }
    }

    {printf("Even numbers are:\n");}
    for(i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
     
    {printf("\n");}

    {printf("Odd numbers are:\n");}
    for(i=0;i<5;i++)
    {
        printf("%d\t",c[i]);
    }

    return 0;
}