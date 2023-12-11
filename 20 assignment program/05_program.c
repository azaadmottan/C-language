#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");

    int i,j,k,l,n,a;     

    printf("\nEnter number of rows:");
    scanf("%d",&n);

     for(i=0; i<=n; i++)
    {
        for(j=0; j<=n-i; j++)
        {
            printf(" ");
        }   
        for(k=0; k<=i; k++)
        {
            if(i==0 || k==0)
            {
                a = 1;
                printf("%d ",a);
            }
            else
            {
                a = a*(i-k+1)/k;
                printf("%d ",a);
            }
        }
        {
            printf("\n");
        }
    }

    return 0;
}