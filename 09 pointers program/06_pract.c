#include<stdio.h>
int main ()
{
    int i,*j = &i;
    *j = 0;
    printf("The value of i is %d\n",i);

    printf("The value of j is %d\n",*j);

    *j+=6;
    printf("The value of i is %d\n",i);

    printf("The value of j is %d\n",*j);

    (*j)++;
    printf("The value of i is %d\n",i);

    printf("The value of j is %d\n",*j);
    
    return 0;
}