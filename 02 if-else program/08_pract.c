#include <stdio.h>

int main()
{
    char character;

    printf("Enter the character\n");
    scanf("%c", &character);
    if (character >= 97 && character <= 122)
    {
        printf("The character is lowercase\n");
    }
    else if (character >= 65 && character <= 90)
    {
        printf("The character is uppercase\n");
    }
    else
    {
        printf("Invalid character\n");
    }
    return 0;
}
