#include<stdio.h>

int main()
{
    int i,j,l=0,m,element,max;

    printf("Enter size of array : ");
    scanf("%d",&m);

    int arr[m];
    printf("Enter elements of array : ");
    for(i = 0; i < m; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    max = arr[0];
    for(i = 0; i < m; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Largest number is : %d",max);

    return 0;
}
