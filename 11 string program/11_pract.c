#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;

    char str[][40]= {
                        "To ere is human...",
                        "But to really mess things up...",
                        "One needs to know C !!"
                    };
                    
    printf("Original string is \n\n");
    for(i = 0; i <= 2; i++)
    {
        for(j = 0; j <= strlen(str[i])-1; j++)    // strlen(a)-1 means remove '\0'    
        {                                         // l : 1, 2, 3, 4, 5       if strlen(l) = 5
            printf("%c",str[i][j]);               // i : 0  1  2  3  4   5            
        }                                         // a : m  a  d  a  m  \0   (i-- : 5, 4, 3, 2, 1, 0)( here i is index)
        printf("\n");                             // b : m  a  d  a  m  \0   (j++ : 0, 1, 2, 3, 4, 5)
    }

    printf("\nReverse string is :\n\n");
    for(i = 0; i <= 2; i++)
    {
        for(j = strlen(str[i])-1; j >= 0; j--)
        {
            printf("%c",str[i][j]);
        }
        printf("\n");
    }

    return 0;
}