#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int i,j = 0,flag = 0;

    printf("Enter string : ");
    gets(a);

    for(i = strlen(a)-1; i >= 0; i--)         // strlen(a)-1 means remove '\0'    if strlen(l) = 5
    {                                         // l : 1, 2, 3, 4, 5
        b[j] = a[i];                          // i : 0  1  2  3  4   5  (i-- : 5, 4, 3, 2, 1, 0)( here i is index)     
                                              // a : m  a  d  a  m  \0    
        j++;                                  // b : m  a  d  a  m  \0  (j++ : 0, 1, 2, 3, 4, 5)
    }
    b[j] = '\0';

    printf("Reverse string is : ");
    for(i = 0; i <= strlen(a); i++)
    {
        printf("%c",b[i]);
    }
    
    for(i = 0; i < strlen(a); i++)
    {
        if(a[i] != b[i])
        {
            flag++;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\nString is palindrome");
    }
    else 
    {
        printf("\nString is not palindrome");
    }

    return 0;
}