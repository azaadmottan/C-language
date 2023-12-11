#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[20];
};

int main()
{
    struct student s1;
    s1.roll=21026;
    s1.cgpa=9.2;
    strcpy(s1.name,"azaad");

    printf("Name:%s\n",s1.name);
    printf("Roll no.:%d\n",s1.roll);
    printf("cgpa:%.4f\n",s1.cgpa);

    return 0;
}