#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("12.txt","w");

    fputs("Here we use fputs for write in the file.",ptr);
    
    fclose(ptr);

    return 0;
}