#include<stdio.h>
#include<limits.h>

int main()
{
    printf("Range of short int(min): %d",SHRT_MIN);
    printf("\nRange of short int (max): %d",SHRT_MAX);
    printf("\nSizeof short(int): %d",sizeof(int));

    printf("\n\nRange of int(min): %d", INT_MIN);
    printf("\nRange of int(max): %d", INT_MAX);
    printf("\nSizeof int(max): %d", sizeof(INT_MAX));

    printf("\n\nRange of long int(min): %li", LONG_MIN);
    printf("\nRange of long int(max): %li", LONG_MAX);
    printf("\nSizeof long (int): %d", sizeof(LONG_MAX));

    printf("\n\nRange of long long int(min): %lli", LLONG_MIN);
    printf("\nRange of long long int(max): %lli", LLONG_MAX);
    printf("\nSizeof long long (int): %d", sizeof(LLONG_MAX));


    return 0;
}