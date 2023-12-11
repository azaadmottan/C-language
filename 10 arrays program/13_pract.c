#include<stdio.h>

void reverse(int arr[],int n);                        //Function prototype
void print(int arr[],int n);

int main()
{
    int i;
    int arr[] = {1,2,3,4,5};
    int m = sizeof(arr)/sizeof(int);

    printf("Number of elements of array: %d\n",m);
    printf("Before reverse array: ");

    for(i=0; i<m; i++)
    {
        printf("[%d]",arr[i]);
    }
    
    printf("\nAfter reverse array: ");
    reverse(arr,m);                                   //Function call
    
    print(arr,m);

    return 0;
}

void reverse(int arr[],int n)                         //Function declaration 
{
    for(int i=0;i<n/2;i++)
    {
        int first = arr[i];
        int second = arr[n-i-1];
        arr[n-i-1] = first;
        arr[i] = second;
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]",arr[i]);
    }
}
