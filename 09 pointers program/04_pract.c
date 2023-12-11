#include <stdio.h>
int main()
{
    int i = 6;
    int *p = &i;
    int **pt = &p; 
                                                     
    printf("The value of i is %d\n", i);                       //pointer to pointer

    printf("The address of i is %u\n", &i);

    printf("p store the address of i is %d\n", p);

    printf("The value of p is %d\n", *p);

    printf("The value of p (using pointer value at address) is %d\n", *(&i));       

    printf("The address of p is %u\n", &p);
    
    printf("pt store the address of p is %d\n", pt);

    printf("The value of pt is %d\n", **pt);

    printf("The value of pt (using pointer value at address) is %d\n", **(&p));

    printf("The address of pt is %u\n", (&pt));

    return 0;
}