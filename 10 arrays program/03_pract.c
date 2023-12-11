#include<stdio.h>
int main()
{
    int age = 22;
    int *i = &age;

    //printf("The value of age is %d\n",age);

    // printf("The address of age is %u\n",&age);

    printf("The value of i is %u\n",i);

    i++;                                                          // 1 integer = 4 bytes 
    //printf("The value of age after increment is %d\n",age);       

    printf("The value of i is %u\n",i);

    i--;
    //printf("The value of age after decrement is %d\n",age);

    printf("The value of i is %u\n\n",i);

         
    char star = '*';
    char *j = &star; 
    
    printf("The value of j is %u\n",j);

    j++;                                                          // 1 chararacter = 1 bytes
    printf("The value of j is %u\n",j);

    j--;
    printf("The value of j is %u\n\n",j);


    float price = 100.00;
    float *k = &price;

    printf ("The value of k is %u\n",k);

    k++;                                                          // 1 float = 4 bytes
    printf("The value of k is %u\n",k);

    k--;
    printf("The value of k is %u\n",k);

    return 0;
}