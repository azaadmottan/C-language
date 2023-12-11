#include<stdio.h>

int main()
{
    int m,n,i,j;

    printf("Enter number of rows:");
    scanf("%d",&m);
    
    printf("Enter number of columns:");
    scanf("%d",&n);

    int a[m][n],b[m][n];                               //Two dimensional array (2D)

    printf("Enter the element of matrix (1):");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the element of matrix (2):");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("\n");

    printf("Matrix (1):\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matrix (2):\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
      
    printf("\n");

    printf("Sum of two matrix is:\n");
     
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d+%d\t",a[i][j],b[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
     printf("\n");

    printf("Subtraction of two matrix is:\n");
     
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d-%d\t",a[i][j],b[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]-b[i][j]);
        }
        printf("\n");
    }

    return 0;
}