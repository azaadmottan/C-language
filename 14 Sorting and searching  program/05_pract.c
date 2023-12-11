#include<stdio.h>

int linearsearch(int arr[],int size,int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binarysearch(int arr[],int size,int element)
{
    int low,mid,high;
    low = 0;
    high = size - 1;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == element)
        {
            return mid;
        }
        else if(arr[mid] < element)
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2,4,6,3,5,7,8,10};
    int arr1[] = {2,3,4,5,6,7,8,10};                            // if use binary search array must be sorted
    int size = sizeof(arr)/sizeof(int);
    int size1 = sizeof(arr1)/sizeof(int);

    int element = 6;

    int index = linearsearch(arr,size,element);                 // linear search 
    int index1 = binarysearch(arr1,size1,element);              // binary search 
         
    printf("The element %d was found at %d index\n",element,index);
    printf("The element %d was found at %d index",element,index1);

    return 0;
}