#include<stdio.h>
#include<string.h>

typedef struct employee 
{
    int code;
    float salary;
    char name[20];
}emp;

void print(struct employee emp1);

int main()
{
    emp e1;                                                    //typedef keywords
    emp *ptr;
    ptr = &e1;

    ptr->code = 22446;
    ptr->salary = 2000.2;
    strcpy(ptr->name,"azaad");

    print(e1);

    return 0;
}

void print(struct employee emp1)
{       
    printf("Employee name is %s\n",emp1.name);
    printf("Employee code is %d\n",emp1.code);
    printf("Employee salary is %.2f",emp1.salary);
}