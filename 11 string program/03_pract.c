#include<stdio.h>
#include<string.h>

int count(char ar[]);

int main()
{
    // char arr[10];
    // printf("Enter your name:");
    // scanf("%s",&arr);                                   In this case length is not correct
    // printf("Length is %d",count(arr));

    char ar[10];

    printf("Enter your name:");
    gets(ar);
    puts(ar);
    printf("Length of string is %d",count(ar));

    return 0;
}
int count(char ar[])
{
    int count = 0;
    for(int i=0;ar[i]!='\0';i++)
    {
        count++;
    }
    return count;
}