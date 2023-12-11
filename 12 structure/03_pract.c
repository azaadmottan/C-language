#include<stdio.h>
#include<string.h>

struct stud
{
    int roll;
    float cgpa;
    char name[20];
};
int main()
{
    struct stud s1 = {21026,9.2,"azaad"};                     // initializing structures

    // struct stud s1;
    // strcpy(s1.name,"azaad");
    // s1.roll = 21022;
    // s1.cgpa = 9;

    struct stud *ptr;                                         // using pointer 
    ptr = &s1;                                  
    
    printf("Name:%s\n",(*ptr).name);                          // here  we can also use (ptr->name)
    printf("cgpa:%.2f\n",(*ptr).cgpa);                        // here  we can also use (ptr->cgpa)
    printf("Roll no.:%d\n",(*ptr).roll);                      // here  we can also use (ptr->roll)
    // printf("Roll no.:%d\n",ptr->roll);                        // here  we can also use (ptr->roll)

    return 0;
}