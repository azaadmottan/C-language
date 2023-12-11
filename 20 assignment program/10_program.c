#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");

    int m,n,i,l,k;
    char a[100];

    printf("\nEnter a stirng:");
    gets(a);

    printf("Enter the position extract from:");
    scanf("%d",&m);
    printf("Enter the number of character to extract:");
    scanf("%d",&n);
    k = strlen(a);
    m = m-1;
    n = n-1;
    
    if(m<0|| m>k )
    {
        printf("Improper position !");
    }

    else if(n<0 || n>k)
    {
        printf("Improper number of character for extract !");
    }
    else
    {
        printf("Extracted string is:");

        for(i=m; i<=m+n;i++)
        {
            printf("%c",a[i]);
        }
    }

    return 0;
}