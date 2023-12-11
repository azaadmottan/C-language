#include<stdio.h>
int main()
{
    int m,n,i,j;

    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of columns:");
    scanf("%d",&n);

    int a[m][n];                                       //Two dimensional array (2D)

    printf("Enter the element of matrix:");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The given matrix:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}