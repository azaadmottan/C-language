#include <stdio.h>
int main()
{
    int physics, chemistry, maths;
    float totalaverage;

    printf("Enter your physics marks :");
    scanf("%d", &physics);

    printf("Enter your chemistry marks :", chemistry);
    scanf("%d", &chemistry);

    printf("Enter your maths marks :", maths);
    scanf("%d", &maths);

    totalaverage = (float)(physics + chemistry + maths) / 3;

    if ((physics < 33) || (chemistry < 33) || (maths < 33))
    {
        if(physics < 33)
        {
            printf("Your physics marks %d is less than 35 i.e you are fail\n",physics);
        }
        else if(chemistry < 33)
        {
            printf("Your chemistry marks %d is less than 35 i.e you are fail\n",chemistry);
        }
        else if(maths < 33)
        {
            printf("Your physics marks %d is less than 35 i.e you are fail\n",maths);
        }
    }
    else
    {
        printf("your totalaverage is %.4f, you are pass", totalaverage);
    }

    return 0;
}
