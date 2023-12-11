#include<stdio.h>

int main()
{
    char m;
    printf("Enter type of account in which you sign-in:");
    scanf("%c",&m);

    switch(m)
    {
        case 'g': printf("Click on this link: https://accounts.google.com");
        break;
        case 'i': printf("click on this link: https://www.instagram.com");
        break;
        case 'f': printf("Click on this link: https://www.facebook.com");
        break;
        case 't': printf("Click on this link: https://twitter.com");
        break;
        default: printf("Invalid type of account !");                                            
    }
    
    return 0;
}