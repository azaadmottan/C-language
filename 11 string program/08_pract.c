#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b;

    printf("Enter string : ");
    gets(a);

    printf("Reverse string is : ");

    strrev(a);          // here we use strrev string reverse function
    puts(a);

    return 0;
}