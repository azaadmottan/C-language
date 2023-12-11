#include<stdio.h>

void printarray(int *a,int n)
{
    for(int i = 0; i <= n-1; i++)
    {
        printf("%d ",a[i]);
    }
}
void selection(int *a,int n)
{
    int index,i,j;

    for(i = 0; i < n-1; i++)
    {
        index = i;
        for(j = i+1; j < n; j++)                         // using selection sorting
        {
            if(a[j] < a[index])
            {
                index = j;
            }
        }
        int temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }
}

int main()
{
    int A[] = {3,2,6,1,5,4};
    int n = 6;

    printf("Array before sorting :");
    printarray(A,n);

    selection(A,n);

    printf("\nArray after selection sorting :");
    printarray(A,n);

    return 0;
}