#include<stdio.h>

int matrix(int m,int n,int x[][n],int y[][n]);

int main()
{
    int m,n,i,j;

    printf("Enter number of rows:");
    scanf("%d",&m);
    
    printf("Enter number of columns:");
    scanf("%d",&n);

    int a[m][n],b[m][n];                           

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

    matrix(m,n,a,b);                                      // passing array to function

    return 0;
}

int matrix(int m,int n,int x[m][n],int y[m][n])
{
    printf("Sum of two matrix is \n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d\t",x[i][j]+y[i][j]);
        }
        printf("\n");
    }
}