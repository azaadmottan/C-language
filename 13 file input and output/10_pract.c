#include<stdio.h>

int main()
{
    char c[200];
    FILE *ptr;

    ptr = fopen("11.txt","r");
    
    while(fscanf(ptr,"%s",c) != EOF)
    {
        printf("%s ",c); 
    }

    fclose(ptr);

    return 0;
}