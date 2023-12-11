#include<stdio.h>
int main()
{
    int i=2,*j;
    j=&i;
    printf("Value of i is %d\n",i);

    printf("Address of i is %u\n",&i);

    printf("j store the address of i is %d\n",j);

    printf("The value of j is %d\n",*j);

    printf("The address of j is %u\n",&j);

    return 0;
}