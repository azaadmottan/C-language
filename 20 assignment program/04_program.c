#include<stdio.h>

int main()
{
    printf("Name     :Azaad Mottan\nRoll no. :2107264\nBranch   :B.tech(C.S.E)\n");

    char n;

    printf("\nEnter any character(upercase or lowercase),digit,special symbol:");
    scanf("%c",&n);

    if(n>=48 && n<=57)
    {
        printf("The character is a digit");
    }
    else if(n>=65 && n<=90)
    {
        printf("The character is a upercase");
    }
    else if(n>=97 && n<=122)
    {
        printf("The character is a lowercase");
    }
    else if((n>=0 && n<=47) || (n>=58 && n<=64) || (n>=91 && n<=96) || n>=123 && n<=127)
    {
        printf("The caharacter is a special symbol");
    }

    return 0;
}