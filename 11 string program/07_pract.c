#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j=0;

    printf("Enter string : ");
    gets(a);

    for(i = strlen(a)-1; i >= 0; i--)             // strlen(a)-1 means remove '\0'
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';

    printf("Reverse string is : ");
    for(i = 0; i <= strlen(a); i++)
    {
        printf("%c",b[i]);
    }
    // puts(b);

    return 0;
}