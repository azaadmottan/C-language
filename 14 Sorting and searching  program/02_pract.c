#include<stdio.h>

void printarray(int *A,int n);
void bubblesortadaptive(int *A,int n);
int main()
{
    // int A[] = {44,2,24,42,4,46,45,46,47,55};
    int A[] = {1,2,3,4,5,6,7,8,9,10};    // if array is already sorted then array returned sorted array in leser number of pass
    int n = 10;
     
    printf("Before sorting :");
    printarray(A,n);

    bubblesortadaptive(A,n);

    printf("After sorting :");
    printarray(A,n);

    return 0;
}

void printarray(int *A,int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubblesortadaptive(int *A,int n)
{
    int temp; 
    int sorted = 0;
    for(int i = 0; i < n-1; i++)                 // for number of pass 
    {
        printf("Working on pass number %d",i+1);
        sorted = 1;
        for(int j = 0; j < n-i-1; j++)           // for number of comparison 
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                sorted = 0;
            }
        }
        printf("\n");
        if(sorted)
        {
            return;
        }
    }
}