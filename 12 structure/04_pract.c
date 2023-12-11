#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void print(struct employee emp);                              // function prototype

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 24568;                                        // pointer
    ptr->salary = 2000.44;
    strcpy(ptr->name, "azaad");

    print(e1);                                                // function call

    return 0;
}

void print(struct employee emp)                               // function declaration
{
    printf("Employee name is %s\n", emp.name);
    printf("Employee code is %d\n", emp.code);
    printf("Employee salary is %.4f$\n", emp.salary);
}