#include<stdio.h>

int main()
{
    int i,j,k,l,n;

    printf("Enter number of rows:");
    scanf("%d",&n);
    
    i=1;
    while(i <= n)
    {
        j=1;
        while(j <= n-i)
        {
            printf("  ");
            j++;
        }
        k=1;
        while(k <= i)
        {
            printf(" %d",k);
            k++;
        }
        l=i-1;
        while(l >= 1)
        {
            printf(" %d",l);
            l--;
        }
        {
            printf("\n");
        }
        i++;
    }

    return 0;
}