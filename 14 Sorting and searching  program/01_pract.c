#include<stdio.h>

void printarray(int n,int *A);
// void printarray(int n, int A[]);
void bubblesort(int *A,int n);
int main()
{
    int A[] = {10,1,9,2,8,3,7,4,6,5};
    int n = 10;
     
    printf("Before sorting :");
    // printarray(n,A,);
    printarray(n,A);

    bubblesort(A,n);                             // bubble sort array

    printf("After sorting :");
    // printarray(n,A);
    printarray(n,A);

    return 0;
}

// void printarray(int n, int A[])
void printarray(int n,int *A)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubblesort(int *A,int n)
{
    int temp; 
    // for(int i = 0; i < n; i++)
    for(int i = 0; i <= n-1; i++)                 // for number of pass 
    {
        printf("Working on pass number %d",i+1);

        // for(int j = 0; j < n-1; j++)
        for(int j = 0; j < n-i-1; j++)           // for number of comparison 
        {
            if(A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        printf("\n");
    }
}