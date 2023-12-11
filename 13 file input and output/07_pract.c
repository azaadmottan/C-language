#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("07.txt","w");

    int n;
    printf("Enter integer to print (nth even and odd numbers):");
    scanf("%d",&n);

    fprintf(ptr,"Even numbers are:");
    for(int i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            fprintf(ptr,"%d ",i);
        }
    }
      
    fprintf(ptr,"\nOdd numbers are:");
    for(int i=1; i<=n;i++)
    {
        if(i%2 != 0)
        {
           fprintf(ptr,"%d ",i);
        }
    }

    fclose(ptr);

    return 0;
}