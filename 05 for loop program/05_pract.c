#include<stdio.h>
int main()
{
    int i,n;
    //int k=0;
    printf("Enter number of rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        } 
        
        /*{
             printf("%d",i);
        }
        {   k++;
            printf("%d",k);
        }*/
        
        {
            printf("\n");
        }   
    }
    return 0;
}