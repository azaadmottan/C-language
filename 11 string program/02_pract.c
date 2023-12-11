#include<stdio.h>
#include<string.h>

int main()
{
    char *ptr = "azaad";
    puts(ptr);                     //pointer can be change

    ptr = "azaad mottan";
    puts(ptr);

    char arr[] = "azaad";
    puts(arr);

    // arr[5] = "azaad mottan";     array cannot be change
    // puts(arr);                    
    
    return 0;
}