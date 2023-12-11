#include<stdio.h>

void display(int ar1[]);                               //Function prototype
int main()
{
    int arr[] = {10,20,30,40,50};
    display(arr);                                     //Function call

    return 0;
}

void display(int ar1[])                                //Function declaration 
{
    int i,count=0;
    for(i=0; i<5; i++)
    {
        printf("%d\t",ar1[i]);
    }
    for(int i=0; i<5; i++)
    {
        count = count + ar1[i];
    }
    printf("\nSum of array is %d",count);
}