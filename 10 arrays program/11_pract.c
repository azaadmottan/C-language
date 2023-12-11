#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k,sum = 0;             //Two dimensional array (2D)
       
    printf("Enter element of matrix (1):");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter element of matrix (2):");

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    printf("Multiplication of two matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {  
            sum=0;

            for(k=0;k<2;k++)
            {
                sum = sum + a[i][k] * b[k][j] ;
            }
            c[i][j] = sum;
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}