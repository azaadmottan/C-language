#include<stdio.h>

int matrix(int n,int m,int x[][m],int y[][m]);
// int matrix(int x[2][2],int y[2][2]);

int main()
{
    int i,j,a[2][2],b[2][2],n=2,m=2;

    printf("Enter the element of matrix (1):");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Enter the element of matrix (2):");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    matrix(n,m,a,b);                                   // passing array to function 
    // matrix(a,b);

    return 0;
}

// int matrix(int x[2][2],int y[2][2])
int matrix(int n,int m,int x[][m],int y[][m])
{
    printf("Difference of  two matrix is \n");

    for(int i=0; i<n; i++)    
    {
        for(int j=0; j<m; j++)
        {
            printf("%d\t",x[i][j]-y[i][j]);
        }
        printf("\n");
    }
}