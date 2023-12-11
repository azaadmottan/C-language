#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("09.txt","w");

    int n,i;
    printf("Enter integer you have to know the table:");
    scanf("%d",&n);

    for(i=1; i<=10; i++)
    {
        fprintf(ptr,"%d x %d = %d\n",n,i,n*i);
    }

    fclose(ptr);

    return 0;
}