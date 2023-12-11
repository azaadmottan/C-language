#include <stdio.h>

int main()
{
    int rating;

    printf("Enter your rating(1-5)\n");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1\n");
        break;

    case 2:
        printf("Your rating is 2\n");
        break;

    case 3:
        printf("Your rating is 3\n");
        break;

    case 4:
        printf("Your rating is 4\n");
        break;

    case 5:
        printf("Your rating is 5\n");
        break;

    default:
        printf("Invalid rating\n");
        // break;
    }
    int x;
    printf("Enter any month to known number of days in a month: ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("31 days");
        break;
    case 2:
        printf("28 days");
        break;
    case 3:
        printf("31 days");
        break;
    case 4:
        printf("30 days");
        break;
    case 5:
        printf("31 days");
        break;
    case 6:
        printf("30 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("31 days");
        break;
    case 9:
        printf("30 days");
        break;
    case 10:
        printf("31 days");
        break;
    case 11:
        printf("30 days");
        break;
    case 12:
        printf("31 days");
        break;
    default:
        printf("Invalid month");
    }
    return 0;
}