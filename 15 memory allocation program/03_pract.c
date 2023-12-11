#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;

    ptr = (int *)malloc(6 * sizeof(int));                 // using free memory allocation
 
    for(int i=0; i<600; i++)
    {
        ptr2 = (int *)malloc(6000 * sizeof(int));
        printf("Enter the value of %d element:",i+1);
        scanf("%d",&ptr2[i]);

       free(ptr2);
    }
    
    return 0;
}