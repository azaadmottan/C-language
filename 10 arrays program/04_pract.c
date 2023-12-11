#include<stdio.h>
int main()
{
    int age = 22;
    int *i = &age;
    int _age = 23;
    int *j = &_age;

    printf("Address of age is %u\nAddress of _age is %u\nDifference b/w age and _age (in integer) is %u\n",&age,&_age,&age-&_age);

    j = &age;

    printf("Comparison of age and _age is %u\n",i == j);

    return 0;
}