#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i = 0,j=0;

    printf("Enter string : ");
    gets(a);

    j = strlen(a)-1;
    printf("Length of string is %d\n",strlen(a));

    if(a[i++] == a[j--])
    {
        printf("String is palindrome (%s == %s)",a,a);
    }       
    else 
    {
        printf("String is not palindrome (%s != %s)",a,a);
    }

    return 0;
}