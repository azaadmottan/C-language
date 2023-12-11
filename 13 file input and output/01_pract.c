#include<stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("01.txt","w");                        // creat a file
    
    printf("Successfully creat a file");

    fclose(ptr);

    return 0;
}
