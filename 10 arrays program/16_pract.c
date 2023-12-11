#include<stdio.h>

int display(int ar1[2][2][2]);
int main()
{
    int arr[2][2][2],i,j,k;                                //Multidimensional array
    printf("Enter elements upto 8 digits:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("The matrix is :\n");
    display(arr);

    return 0;
}
int display(int ar1[2][2][2])
{
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\t",ar1[i][j][k]);
            }
        }
        printf("\n");
    }
}