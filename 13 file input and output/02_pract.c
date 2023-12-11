#include<stdio.h>
#include<string.h>

int main()
{
    FILE *ptr;
    
    ptr = fopen("01.txt","r");
    
    char c;

    fscanf(ptr,"%c",&c);                                        // read the file
         
    printf("character is %c\n",c);
    
    fclose(ptr);      

    return 0;
}