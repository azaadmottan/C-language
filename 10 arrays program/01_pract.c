#include <stdio.h>
int main()
{
    int marks[10];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter marks in %d subject: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + marks[i];
    }
    int total = sum;
    printf("Total marks is %d\n", sum);
    float avg;
    avg = (float)sum / 10;
    printf("Avg marks is %f", avg);
    return 0;
}