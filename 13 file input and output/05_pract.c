#include<stdio.h>

int main()
{
    char c;
    FILE *ptr;

    ptr = fopen("04.txt","r");
    
    // c = fgetc(ptr);                               
    
    while(c != EOF)
    {
        c = fgetc(ptr);                           // here we use fgetc for read the file
        printf("%c",c);
    }

    fclose(ptr);

    return 0;
}