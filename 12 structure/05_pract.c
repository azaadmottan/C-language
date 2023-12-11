#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    int n, i;

    printf("Enter no. of student to store the data:");
    scanf("%d", &n);

    struct student s[n];                                  // array of structures
     
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter name,rollno.,cgpa of student (%d):", i + 1);
        scanf("%s%d%f", s[i].name, &s[i].roll, &s[i].cgpa);
    }
    
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("The data of student (%d):\nName:%s\nRollno.:%d\nCGPA:%f\n", i + 1, s[i].name, s[i].roll, s[i].cgpa);
        printf("\n");
    }

    return 0;
}