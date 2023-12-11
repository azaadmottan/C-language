#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("08.txt","r");

    int a;
    int b;

    fscanf(ptr,"%d",&a);
    fscanf(ptr,"%d",&b);

    fclose(ptr);

    fopen("08.txt","w");
    fprintf(ptr,"sum of %d and %d is %d",a,b,a+b);
    
    fclose(ptr);

    return 0;
}