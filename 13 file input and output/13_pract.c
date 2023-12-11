#include<stdio.h>

int main()
{
    char c[50];
    FILE *ptr;
    ptr = fopen("12.txt","r");

    fgets(c,50,ptr);                             // fgets(variable name,size,pointer);

    printf("%s",c);

    fclose(ptr);

    return 0;
}