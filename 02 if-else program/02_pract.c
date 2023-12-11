#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age > 18 && age < 85)
    {
        printf("You can drive");
    }
    else
    {
        printf("You cannot drive");
    }
    return 0;
}