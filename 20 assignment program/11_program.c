#include<stdio.h>
#include<string.h>

void xstrrev(char *s);

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");
    
    char str[][40] ={
                      "To ere is human...",
                      "But to really mess things up...",
                      "One needs to know C !!"
                    };
    int i;

    printf("Original string is\n\n");
    for (i = 0; i <= 2; i++)
    {
        printf("%s\n",str[i]);
    }
    printf("\nReverse string is\n\n");
    for (i = 0; i <= 2; i++)
    {
        // xstrrev(str[i]);
        strrev(str[i]);                        // using string function 
        printf("%s\n",str[i]);
    }

    return 0;
}

// void xstrrev(char *s)
// {
//     int l,i;
//     char *t,temp;

//     l = strlen(s);

//     t = s+l-1;

//     for(i=1; i<=l/2; i++)
//     {
//         temp = *s;
//         *s = *t; 
//         *t = temp;

//         s++;
//         t--;
//     }
// }
